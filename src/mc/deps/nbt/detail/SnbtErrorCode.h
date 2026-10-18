#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

namespace ll::nbt::detail {
enum class SnbtErrorCode : int {
    NotTheExpectedType,
    UnexpectedEofEncountered,
    UnterminatedComment,
    NotANumber,
    NumberOutOfRange,
    NotAUnicodeEncodedHex,
    IllegalOmittedQuotesString,
    QuoteEscapeNotMatch,
    Utf8Codepoint2NotInRange,
    Utf8Codepoint2Missing,
    Utf8Codepoint1Missing,
    IllegalEscape,
    IllegalUtf8Character,
    UnclosedBracket,
    IllegalKeyValueSeparator,
    EmptyString,
};
}
#endif // @header-generator platform
