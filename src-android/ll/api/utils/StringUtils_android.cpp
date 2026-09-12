#include "ll/api/utils/StringUtils.h"

#include <codecvt>
#include <locale>

namespace ll::inline utils::string_utils {
namespace {
void requireUtf8(uint codePage) {
    if (codePage != CodePage::UTF8 && codePage != CodePage::DefaultACP && codePage != CodePage::ThreadACP) {
        throw std::system_error(std::make_error_code(std::errc::not_supported), "Android uses UTF-8 code pages");
    }
}
}

std::wstring str2wstr(std::string_view value, uint codePage) {
    requireUtf8(codePage);
    if (value.empty()) return {};
    return std::wstring_convert<std::codecvt_utf8<wchar_t>>{}.from_bytes(value.data(), value.data() + value.size());
}

std::string wstr2str(std::wstring_view value, uint codePage) {
    requireUtf8(codePage);
    if (value.empty()) return {};
    return std::wstring_convert<std::codecvt_utf8<wchar_t>>{}.to_bytes(value.data(), value.data() + value.size());
}

std::string str2str(std::string_view value, uint fromCodePage, uint toCodePage) {
    requireUtf8(fromCodePage);
    requireUtf8(toCodePage);
    return wstr2str(str2wstr(value, fromCodePage), toCodePage);
}
} // namespace ll::inline utils::string_utils
