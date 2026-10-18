#if defined(__ANDROID__)
#include "ll/api/utils/StringUtils.h"

#include <cerrno>
#include <cfenv>
#include <cmath>
#include <cstdlib>
#include <locale.h>

namespace ll::inline utils::string_utils::detail {
namespace {
struct NumericLocale {
    locale_t mLocale = ::newlocale(LC_NUMERIC_MASK, "C", nullptr);
    ~NumericLocale() {
        if (mLocale) ::freelocale(mLocale);
    }
};

struct FloatingEnvironment {
    fenv_t mEnvironment{};
    bool   mSaved = std::fegetenv(&mEnvironment) == 0;
    int    mErrno = errno;
    ~FloatingEnvironment() {
        if (mSaved) std::fesetenv(&mEnvironment);
        errno = mErrno;
    }
};

char lower(char value) { return value >= 'A' && value <= 'Z' ? static_cast<char>(value + ('a' - 'A')) : value; }
bool decimal(char value) { return value >= '0' && value <= '9'; }
bool hexadecimal(char value) { return decimal(value) || (lower(value) >= 'a' && lower(value) <= 'f'); }

bool startsWith(char const* first, char const* last, std::string_view word) {
    if (static_cast<size_t>(last - first) < word.size()) return false;
    for (size_t i = 0; i < word.size(); ++i)
        if (lower(first[i]) != word[i]) return false;
    return true;
}

template <class T>
std::from_chars_result parse(char const* first, char const* last, T& result, std::chars_format format) noexcept try {
    if (!first || !last || first == last) return {first, std::errc::invalid_argument};
    auto cursor = first;
    if (*cursor == '-') ++cursor;
    if (cursor == last || *cursor == '+') return {first, std::errc::invalid_argument};
    auto begin   = cursor;
    bool special = false;
    if (startsWith(cursor, last, "inf")) {
        special  = true;
        cursor  += startsWith(cursor, last, "infinity") ? 8 : 3;
    } else if (startsWith(cursor, last, "nan")) {
        special  = true;
        cursor  += 3;
        if (cursor != last && *cursor == '(') {
            auto payload = cursor + 1;
            while (payload != last
                   && (decimal(*payload) || (lower(*payload) >= 'a' && lower(*payload) <= 'z') || *payload == '_'))
                ++payload;
            if (payload != last && *payload == ')') cursor = payload + 1;
        }
    } else {
        bool   hex    = format == std::chars_format::hex;
        auto   digit  = hex ? hexadecimal : decimal;
        size_t digits = 0;
        while (cursor != last && digit(*cursor)) {
            ++digits;
            ++cursor;
        }
        if (cursor != last && *cursor == '.') {
            ++cursor;
            while (cursor != last && digit(*cursor)) {
                ++digits;
                ++cursor;
            }
        }
        if (!digits) return {first, std::errc::invalid_argument};
        auto mantissaEnd = cursor;
        bool exponent    = false;
        if (format != std::chars_format::fixed && cursor != last && lower(*cursor) == (hex ? 'p' : 'e')) {
            ++cursor;
            if (cursor != last && (*cursor == '+' || *cursor == '-')) ++cursor;
            auto exponentStart = cursor;
            while (cursor != last && decimal(*cursor)) ++cursor;
            exponent = cursor != exponentStart;
            if (!exponent) cursor = mantissaEnd;
        }
        if (format == std::chars_format::scientific && !exponent) return {first, std::errc::invalid_argument};
    }
    // C strto*_l accepts whitespace, '+', and hex prefixes that from_chars
    // rejects. Only the matched from_chars token reaches the conversion.
    std::string text;
    if (begin != first) text += '-';
    if (format == std::chars_format::hex && !special) text += "0x";
    text.append(begin, cursor);
    static NumericLocale locale;
    if (!locale.mLocale) return {first, std::errc::not_enough_memory};
    FloatingEnvironment environment;
    if (!environment.mSaved || std::fesetround(FE_TONEAREST)) return {first, std::errc::not_supported};
    errno = 0;
    char* end{};
    T     value;
    if constexpr (std::is_same_v<T, float>) value = ::strtof_l(text.c_str(), &end, locale.mLocale);
    else if constexpr (std::is_same_v<T, double>) value = ::strtod_l(text.c_str(), &end, locale.mLocale);
    else value = ::strtold_l(text.c_str(), &end, locale.mLocale);
    if (end != text.c_str() + text.size()) return {first, std::errc::invalid_argument};
    // libc may signal underflow for representable subnormal results.
    if (errno == ERANGE && (value == 0 || !std::isfinite(value))) return {cursor, std::errc::result_out_of_range};
    result = value;
    return {cursor, {}};
} catch (...) {
    return {first, std::errc::not_enough_memory};
}
} // namespace

std::from_chars_result
fromCharsFloat(char const* first, char const* last, float& value, std::chars_format format) noexcept {
    return parse(first, last, value, format);
}
std::from_chars_result
fromCharsFloat(char const* first, char const* last, double& value, std::chars_format format) noexcept {
    return parse(first, last, value, format);
}
std::from_chars_result
fromCharsFloat(char const* first, char const* last, long double& value, std::chars_format format) noexcept {
    return parse(first, last, value, format);
}
} // namespace ll::inline utils::string_utils::detail
#endif
