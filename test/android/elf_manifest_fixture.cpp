#include "ll/api/android/Mod.h"
#include "ll/core/mod/ElfModule.h"
#include "ll/core/mod/ModManifest.h"
#include <cstddef>
#include <cstdio>
#include <fstream>
#include <iterator>
#include <vector>

static_assert(sizeof(LLAndroidModContextV1) == 56 && sizeof(LLAndroidModRegistrationV1) == 56);
static_assert(offsetof(LLAndroidModContextV1, javaVm) == 8 && offsetof(LLAndroidModContextV1, resourcePath) == 48);
static_assert(
    offsetof(LLAndroidModRegistrationV1, instance) == 16 && offsetof(LLAndroidModRegistrationV1, unload) == 48
);
using namespace ll::android;
#define REQUIRE(expr)                                                                                                  \
    do {                                                                                                               \
        if (!(expr)) {                                                                                                 \
            std::fprintf(stderr, "ELF/manifest fixture failed line %d: %s\n", __LINE__, #expr);                        \
            return 1;                                                                                                  \
        }                                                                                                              \
    } while (false)

int main(int argc, char** argv) {
    REQUIRE(argc == 3);
    constexpr std::string_view valid =
        R"({"name":"Example","entry":"libExample.so","version":"0.1.0","type":"native","minecraft_versions":["1.26.40.5"],"android_mod_abi":1})";
    ModManifest manifest;
    REQUIRE(parseModManifest(valid, manifest) == ManifestResult::Native && manifest.canonicalId == "example");
    REQUIRE(parseModManifest(R"({"type":"preload-native"})", manifest) == ManifestResult::SkipType);
    for (auto change :
         {"../libExample.so", "/libExample.so", "libpreloader.so", "libLeviLamina.so", "dir\\\\libExample.so"}) {
        std::string input(valid);
        input.replace(input.find("libExample.so"), 13, change);
        REQUIRE(parseModManifest(input, manifest) == ManifestResult::Invalid);
    }
    auto duplicate = std::string(valid);
    duplicate.insert(1, "\"name\":\"Other\",");
    REQUIRE(parseModManifest(duplicate, manifest) == ManifestResult::Invalid);
    auto wrong = std::string(valid);
    wrong.replace(wrong.find("1.26.40.5"), 9, "1.26.45.1");
    REQUIRE(parseModManifest(wrong, manifest) == ManifestResult::Incompatible);
    REQUIRE(parseModManifest(std::string(valid) + "x", manifest) == ManifestResult::Invalid);
    auto read = [](char const* name) {
        std::ifstream file(name, std::ios::binary);
        return std::vector<uint8_t>{std::istreambuf_iterator<char>(file), std::istreambuf_iterator<char>()};
    };
    auto        kernel  = read(argv[1]);
    auto        example = read(argv[2]);
    ElfModule   self, child;
    char const* error{};
    REQUIRE(inspectElfModule(kernel, true, "libLeviLamina.so", {}, self, error));
    REQUIRE(inspectElfModule(example, false, "libLeviLaminaP6Example.so", self.prelinkNote, child, error));
    REQUIRE(!inspectElfModule(example, false, "libWrong.so", self.prelinkNote, child, error));
    auto wrongNote    = self.prelinkNote;
    wrongNote.back() ^= 1;
    REQUIRE(!inspectElfModule(example, false, "libLeviLaminaP6Example.so", wrongNote, child, error));
    example[18] = 62;
    REQUIRE(!inspectElfModule(example, false, "libLeviLaminaP6Example.so", self.prelinkNote, child, error));
    REQUIRE(!inspectElfModule(std::span<uint8_t const>(kernel).first(63), true, "libLeviLamina.so", {}, child, error));
    std::puts(
        "ELF/manifest passed: real P5 kernel/example, C layout, cold-loader contracts and malformed input refusal"
    );
}
