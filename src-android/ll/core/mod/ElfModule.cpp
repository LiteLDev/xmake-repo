#include "ll/core/mod/ElfModule.h"
#include <array>
#include <cstring>
#include <rapidjson/document.h>
#include <set>
#include <vector>

namespace ll::android {
namespace {
struct Header {
    uint8_t  ident[16];
    uint16_t type, machine;
    uint32_t version;
    uint64_t entry, phoff, shoff;
    uint32_t flags;
    uint16_t size, phsize, phcount, shsize, shcount, shnames;
};
struct Program {
    uint32_t type, flags;
    uint64_t offset, address, physical, fileSize, memorySize, alignment;
};
struct Section {
    uint32_t name, type;
    uint64_t flags, address, offset, size;
    uint32_t link, info;
    uint64_t alignment, entrySize;
};
struct Symbol {
    uint32_t name;
    uint8_t  info, other;
    uint16_t section;
    uint64_t value, size;
};
struct Dynamic {
    int64_t  tag;
    uint64_t value;
};
static_assert(sizeof(Header) == 64 && sizeof(Program) == 56 && sizeof(Section) == 64 && sizeof(Symbol) == 24);
class Reader {
public:
    explicit Reader(std::span<uint8_t const> value) : bytes(value) {}
    bool range(uint64_t offset, uint64_t size) const noexcept {
        return offset <= bytes.size() && size <= bytes.size() - offset;
    }
    template <typename T>
    bool read(uint64_t offset, T& value) const noexcept {
        if (!range(offset, sizeof(value))) return false;
        std::memcpy(&value, bytes.data() + offset, sizeof(value));
        return true;
    }
    bool string(Section const& table, uint64_t offset, std::string_view& value) const noexcept {
        if (offset >= table.size || !range(table.offset, table.size)) return false;
        auto start = reinterpret_cast<char const*>(bytes.data() + table.offset + offset);
        auto end   = static_cast<char const*>(std::memchr(start, 0, static_cast<size_t>(table.size - offset)));
        if (!end) return false;
        value = {start, static_cast<size_t>(end - start)};
        return true;
    }
    std::span<uint8_t const> bytes;
};
bool standardCxx(std::string_view name) noexcept {
    for (auto prefix : {"_ZNSt", "_ZNKSt", "_ZSt", "_Zn", "_Zd", "_ZTINSt", "_ZTSNSt", "_ZTVNSt"})
        if (name.starts_with(prefix)) return true;
    return false;
}
bool validNote(std::string_view note) noexcept {
    if (note.size() < 20 || note.size() > 2048) return false;
    uint32_t names{}, size{}, type{};
    std::memcpy(&names, note.data(), 4);
    std::memcpy(&size, note.data() + 4, 4);
    std::memcpy(&type, note.data() + 8, 4);
    if (names != 7 || type != 1 || std::memcmp(note.data() + 12, "LEVIMC\0", 7) || size > 2000
        || 20 + ((size + 3U) & ~3U) != note.size())
        return false;
    rapidjson::Document doc;
    doc.Parse<rapidjson::kParseValidateEncodingFlag>(note.data() + 20, size);
    if (doc.HasParseError() || !doc.IsObject() || doc.MemberCount() != 5) return false;
    auto version = doc.FindMember("schemaVersion");
    if (version == doc.MemberEnd() || !version->value.IsUint() || version->value.GetUint() != 1) return false;
    for (auto key : {"targetBuildId", "providerBuildId", "semanticSha256", "importSetSha256"}) {
        auto value = doc.FindMember(key);
        if (value == doc.MemberEnd() || !value->value.IsString()) return false;
        auto length = value->value.GetStringLength();
        bool hash   = std::string_view(key).ends_with("Sha256");
        if ((hash && length != 64) || (!hash && (!length || length > 64 || length % 2))) return false;
        for (size_t i = 0; i < length; ++i) {
            char c = value->value.GetString()[i];
            if (!((c >= '0' && c <= '9') || (c >= 'a' && c <= 'f'))) return false;
        }
    }
    // SHA-256 of the canonical empty functionImports array "[]".
    return std::string_view(doc["importSetSha256"].GetString())
        == "4f53cda18c2baa0c0354bb5f9a3ecbe5ed12ab4d8e11ba873c2f11161202b945";
}
} // namespace

bool inspectElfModule(
    std::span<uint8_t const> bytes,
    bool                     kernel,
    std::string_view         expectedSoname,
    std::string_view         expectedNote,
    ElfModule&               result,
    char const*&             error
) noexcept {
    result = {};
    error  = "invalid ELF";
    Reader reader(bytes);
    Header h{};
    if (!reader.read(0, h) || std::memcmp(h.ident, "\177ELF\2\1\1", 7) || h.type != 3 || h.machine != 183
        || h.version != 1 || h.size != sizeof(Header) || h.phsize != sizeof(Program) || h.shsize != sizeof(Section)
        || !h.phcount || h.phcount > 128 || !h.shcount || h.shcount > 1024 || h.shnames >= h.shcount
        || !reader.range(h.phoff, uint64_t(h.phcount) * h.phsize)
        || !reader.range(h.shoff, uint64_t(h.shcount) * h.shsize))
        return false;
    size_t   loads{};
    bool     stack{};
    uint64_t firstLoad = UINT64_MAX;
    for (size_t i = 0; i < h.phcount; ++i) {
        Program p{};
        if (!reader.read(h.phoff + i * h.phsize, p)) return false;
        if (p.type == 3) return false; // PIE executable is not a Mod SO
        if (p.type == 1) {
            ++loads;
            firstLoad = std::min(firstLoad, p.address);
            if (p.fileSize > p.memorySize || !reader.range(p.offset, p.fileSize) || p.alignment < 16384
                || (p.alignment & (p.alignment - 1)) || p.offset % p.alignment != p.address % p.alignment
                || (p.flags & 3) == 3)
                return false;
            if (p.memorySize > UINT64_MAX - p.address) return false;
            result.ranges.push_back({p.address, p.memorySize, p.flags});
        }
        if (p.type == 0x6474e551) {
            if (p.flags & 1) return false;
            stack = true;
        }
    }
    if (!loads || !stack || firstLoad != 0) return false;
    std::vector<Section> sections(h.shcount);
    for (size_t i = 0; i < h.shcount; ++i) {
        if (!reader.read(h.shoff + i * h.shsize, sections[i])) return false;
        if (sections[i].type != 8 && !reader.range(sections[i].offset, sections[i].size)) return false;
    }
    std::set<std::string_view> needed, exports;
    size_t                     dynamicCount{}, symbolCount{}, apiNotes{};
    for (auto const& section : sections) {
        std::string_view name;
        if (!reader.string(sections[h.shnames], section.name, name)) return false;
        if (name == ".note.levimc.prelink") {
            if (section.type != 7 || !(section.flags & 2) || !result.prelinkNote.empty()) return false;
            result.prelinkNote.assign(reinterpret_cast<char const*>(bytes.data() + section.offset), section.size);
        }
        if (section.type == 7 && name == ".note.android.ident") {
            uint32_t count{}, desc{}, kind{}, api{};
            if (section.size < 24 || !reader.read(section.offset, count) || !reader.read(section.offset + 4, desc)
                || !reader.read(section.offset + 8, kind) || count != 8 || desc < 4 || kind != 1
                || desc > section.size - 20 || std::memcmp(bytes.data() + section.offset + 12, "Android\0", 8)
                || !reader.read(section.offset + 20, api) || api != 28)
                return false;
            ++apiNotes;
        }
        if (section.type == 6) {
            ++dynamicCount;
            if (section.link >= sections.size() || sections[section.link].type != 3
                || section.entrySize != sizeof(Dynamic) || section.size % sizeof(Dynamic))
                return false;
            bool terminated{};
            for (uint64_t offset = 0; offset < section.size; offset += sizeof(Dynamic)) {
                Dynamic d{};
                if (!reader.read(section.offset + offset, d)) return false;
                if (!d.tag) {
                    terminated = true;
                    break;
                }
                if (d.tag == 22 || (d.tag == 30 && (d.value & 4))) return false;
                if (d.tag == 1 || d.tag == 14) {
                    std::string_view value;
                    if (!reader.string(sections[section.link], d.value, value)) return false;
                    if (d.tag == 14) {
                        if (!result.soname.empty()) return false;
                        result.soname = value;
                    } else if (!needed.insert(value).second || needed.size() > 7) return false;
                }
            }
            if (!terminated) return false;
        }
        if (section.type == 11) {
            ++symbolCount;
            if (section.link >= sections.size() || sections[section.link].type != 3
                || section.entrySize != sizeof(Symbol) || section.size % sizeof(Symbol))
                return false;
            for (uint64_t offset = 0; offset < section.size; offset += sizeof(Symbol)) {
                Symbol symbol{};
                if (!reader.read(section.offset + offset, symbol)) return false;
                std::string_view value;
                if (!reader.string(sections[section.link], symbol.name, value)) return false;
                if (!symbol.section) {
                    if ((value.starts_with("_Z") && !standardCxx(value)) || value.starts_with("Java_com_mojang"))
                        return false;
                    if (!kernel && (value.starts_with("pl_") || value == "PLGetModRegistration")) return false;
                    if (value.size() > 16384 || result.imports.size() > 8192) return false;
                    if (!value.empty()) result.imports.push_back({std::string(value), (symbol.info >> 4) == 2});
                } else if ((symbol.info >> 4) != 0 && (symbol.other & 3) != 2) {
                    if (symbol.info != 0x12 || (symbol.other & 3) != 0 || !exports.insert(value).second) return false;
                    if (exports.size() > (kernel ? 6U : 1U)) return false;
                }
            }
        }
    }
    if (dynamicCount != 1 || symbolCount != 1 || apiNotes != 1 || result.soname != expectedSoname
        || !validNote(result.prelinkNote) || (!expectedNote.empty() && result.prelinkNote != expectedNote))
        return false;
    std::set<std::string_view>
        allowed{"libpreloader.so", "libc++_shared.so", "libc.so", "libm.so", "libdl.so", "liblog.so"};
    if (!kernel) allowed.insert("libLeviLamina.so");
    for (auto library : needed)
        if (!allowed.contains(library)) return false;
    if (!needed.contains("libpreloader.so") || !needed.contains("libc++_shared.so")
        || (!kernel && !needed.contains("libLeviLamina.so")))
        return false;
    std::set<std::string_view> required =
        kernel
            ? std::set<
                  std::
                      string_view>{"PLGetModRegistration", "LLAndroidKernel_GetApiVersion", "LLAndroidKernel_GetState", "LLAndroidKernel_Log", "LLAndroidKernel_Subscribe", "LLAndroidKernel_Unsubscribe"}
            : std::set<std::string_view>{"LLGetModRegistration"};
    if (exports != required) return false;
    for (auto library : needed) result.needed.emplace_back(library);
    error = nullptr;
    return true;
}
} // namespace ll::android
