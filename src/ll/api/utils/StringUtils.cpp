#include "ll/api/utils/StringUtils.h"

#include <algorithm>
#include <cctype>
#include "fmt/format.h"
#include "ctre/ctre-unicode.hpp"

namespace ll::inline utils::string_utils {
bool isu8str(std::string_view str) noexcept {
    bool res = true;
    fmt::detail::for_each_codepoint(str, [&](uint32_t cp, fmt::string_view) {
        if (cp == fmt::detail::invalid_code_point) {
            res = false;
            return false;
        }
        return true;
    });
    return res;
}

std::string tou8str(std::string_view str) {
    if (isu8str(str)) {
        return std::string{str};
    } else {
        return str2str(str, CodePage::DefaultACP, CodePage::UTF8);
    }
}

std::string toSnakeCase(std::string_view str) {
    std::string res;
    if (str.empty()) {
        return res;
    }
    for (size_t i = 0; i < str.size(); ++i) {
        if (isupper(static_cast<unsigned char>(str[i]))) {
            if (i > 0 && ((i + 1 < str.size() && !isupper(static_cast<unsigned char>(str[i + 1]))) || !isupper(static_cast<unsigned char>(str[i - 1])))) {
                res.push_back('_');
            }
            res.push_back((char)tolower(static_cast<unsigned char>(str[i])));
        } else {
            res.push_back(str[i]);
        }
    }
    return res;
}

std::string toLowerCase(std::string_view str) {
    std::string res{str};
    std::transform(res.begin(), res.end(), res.begin(), [](char c) { return (char)std::tolower(static_cast<unsigned char>(c)); });
    return res;
}

Expected<bool> svtobool(std::string_view str) {
    if (str.size() <= 5) {
        auto lower = toLowerCase(str);
        if (lower == "true" || lower == "1" || lower == "y" || lower == "t" || str == "yes") {
            return true;
        } else if (lower == "false" || lower == "0" || lower == "n" || lower == "f" || str == "no") {
            return false;
        }
    }
    return makeErrorCodeError(std::errc::invalid_argument);
}
std::string removeEscapeCode(std::string_view str) {
    std::string res;
    auto        sbu8 = sv2u8sv(str);
    for (auto& s : ctre::split<u8"(\x1B(?:[@-Z\\-_]|\\[[0-?]*[ -/]*[@-~]))|((?<!§)§(?:[0-9a-v]))">(sbu8)) {
        res += u8sv2sv(s);
    }
    return res;
}

} // namespace ll::inline utils::string_utils
