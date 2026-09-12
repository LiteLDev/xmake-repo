#include "ll/api/utils/StringUtils.h"

#include <array>
#include <cerrno>
#include <cfenv>
#include <cmath>
#include <limits>

#include <gtest/gtest.h>

namespace {
using ll::string_utils::detail::fromCharsFloat;

template <class T>
void accepted(
    std::string_view  text,
    T                 expected,
    size_t            consumed,
    std::chars_format format = std::chars_format::general
) {
    T    value{};
    auto result = fromCharsFloat(text.data(), text.data() + text.size(), value, format);
    EXPECT_EQ(result.ec, std::errc{});
    EXPECT_EQ(result.ptr, text.data() + consumed);
    EXPECT_EQ(value, expected);
}

template <class T>
void invalid(std::string_view text, std::chars_format format = std::chars_format::general) {
    T    value{42};
    auto result = fromCharsFloat(text.data(), text.data() + text.size(), value, format);
    EXPECT_EQ(result.ec, std::errc::invalid_argument);
    EXPECT_EQ(result.ptr, text.data());
    EXPECT_EQ(value, T{42});
}

TEST(AndroidFloatParsing, DecimalAndBoundedInput) {
    accepted<float>("-12.5tail", -12.5f, 5);
    accepted<double>(".125", 0.125, 4);
    accepted<long double>("1.25e2!", 125, 6);
    constexpr std::array text{'2', '.', '5', 'x'};
    accepted<double>({text.data(), 3}, 2.5, 3);
    for (auto text : {"", " ", " 1", "+1", "-", "-+1", ".", "abc"}) {
        invalid<float>(text);
        invalid<double>(text);
        invalid<long double>(text);
    }
}

TEST(AndroidFloatParsing, FormatAndIncompleteExponent) {
    accepted<double>("12e3", 12, 2, std::chars_format::fixed);
    accepted<double>("12e+", 12, 2);
    invalid<double>("12", std::chars_format::scientific);
    invalid<double>("12e+", std::chars_format::scientific);
    accepted<double>("12e-1", 1.2, 5, std::chars_format::scientific);
    accepted<double>("1.ap2", 6.5, 5, std::chars_format::hex);
    accepted<double>("-1.ap2", -6.5, 6, std::chars_format::hex);
    accepted<double>("0x1p2", 0, 1, std::chars_format::hex);
    accepted<double>("1ap+", 26, 2, std::chars_format::hex);
}

TEST(AndroidFloatParsing, SpecialValuesAndSignedZero) {
    for (auto text : {"NaN", "nan(payload_42)"}) {
        double           value{};
        std::string_view input{text};
        auto             result = fromCharsFloat(input.data(), input.data() + input.size(), value);
        EXPECT_EQ(result.ec, std::errc{});
        EXPECT_EQ(result.ptr, input.data() + input.size());
        EXPECT_TRUE(std::isnan(value));
    }
    accepted<double>("-INFINITY!", -std::numeric_limits<double>::infinity(), 9);
    accepted<float>("inf", std::numeric_limits<float>::infinity(), 3);
    double           zero{1};
    std::string_view input{"-0"};
    EXPECT_EQ(fromCharsFloat(input.data(), input.data() + input.size(), zero).ec, std::errc{});
    EXPECT_TRUE(std::signbit(zero));
}

TEST(AndroidFloatParsing, RangeErrorsLeaveValueUnchanged) {
    auto check = []<class T>() {
        for (std::string_view text : {"1e99999", "-1e99999", "1e-99999"}) {
            T    value{42};
            auto result = fromCharsFloat(text.data(), text.data() + text.size(), value);
            EXPECT_EQ(result.ec, std::errc::result_out_of_range);
            EXPECT_EQ(result.ptr, text.data() + text.size());
            EXPECT_EQ(value, T{42});
        }
    };
    check.operator()<float>();
    check.operator()<double>();
    check.operator()<long double>();
    accepted<float>("1.401298464324817e-45", std::numeric_limits<float>::denorm_min(), 21);
    accepted<double>("4.9406564584124654e-324", std::numeric_limits<double>::denorm_min(), 23);
}

TEST(AndroidFloatParsing, PreservesCallerFloatingEnvironment) {
    fenv_t original{};
    ASSERT_EQ(std::fegetenv(&original), 0);
    int originalErrno = errno;
    ASSERT_EQ(std::fesetround(FE_DOWNWARD), 0);
    std::feclearexcept(FE_ALL_EXCEPT);
    std::feraiseexcept(FE_DIVBYZERO);
    errno = EDOM;
    double           value{};
    std::string_view input{"0.1"};
    auto             result     = fromCharsFloat(input.data(), input.data() + input.size(), value);
    int              savedErrno = errno;
    int              rounding   = std::fegetround();
    int              flags      = std::fetestexcept(FE_ALL_EXCEPT);
    std::fesetenv(&original);
    errno = originalErrno;
    EXPECT_EQ(result.ec, std::errc{});
    EXPECT_EQ(value, 0.1);
    EXPECT_EQ(savedErrno, EDOM);
    EXPECT_EQ(rounding, FE_DOWNWARD);
    EXPECT_EQ(flags, FE_DIVBYZERO);
}

TEST(AndroidFloatParsing, OriginalPublicWrapper) {
    size_t consumed{};
    auto   value = ll::string_utils::svtonum<double>("3.25tail", &consumed);
    ASSERT_TRUE(value);
    EXPECT_EQ(*value, 3.25);
    EXPECT_EQ(consumed, 4);
    EXPECT_FALSE(ll::string_utils::svtonum<double>("+2", nullptr));
    EXPECT_FALSE(ll::string_utils::svtonum<double>("1e99999", nullptr));
    auto integer = ll::string_utils::svtonum<int>("12tail", &consumed);
    ASSERT_TRUE(integer);
    EXPECT_EQ(*integer, 12);
    EXPECT_EQ(consumed, 2);
}
} // namespace
