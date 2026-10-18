#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class FontHandle;
struct CaretMeasureData;
struct MeasureResult;
struct TextMeasureData;
// clang-format on

class UIMeasureStrategy {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~UIMeasureStrategy() = default;

    virtual ::MeasureResult measureText(::gsl::not_null<Bedrock::NonOwnerPointer<const FontHandle>> const&, std::string const&, int, int, ::TextMeasureData const&, ::CaretMeasureData const&) const = 0;

    virtual ::MeasureResult measureTextHeight(::gsl::not_null<Bedrock::NonOwnerPointer<const FontHandle>> const&, std::string const&, int, ::TextMeasureData const&, ::CaretMeasureData const&) const = 0;

    virtual ::MeasureResult measureTextWidth(::gsl::not_null<Bedrock::NonOwnerPointer<const FontHandle>> const&, std::string const&, ::TextMeasureData const&, ::CaretMeasureData const&) const = 0;

    virtual std::string filterProfanityFromText(std::string const&, bool const) const = 0;

    virtual bool isProfanityFilterActive() const = 0;

    virtual ulong getCaretIndexFromPixelCoords(std::string const&, ::glm::vec<2, float, (glm::qualifier)0> const&, ::glm::vec<2, float, (glm::qualifier)0> const&, ::gsl::not_null<FontHandle*>, ::TextMeasureData const&, ::CaretMeasureData const&) const = 0;
    // clang-format on
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class FontHandle;
struct CaretMeasureData;
struct MeasureResult;
struct TextMeasureData;
// clang-format on

class UIMeasureStrategy {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UIMeasureStrategy() = default;

    virtual ::MeasureResult measureText(
        ::Bedrock::NotNullNonOwnerPtr<::FontHandle const> const& font,
        ::std::string const&                                     text,
        int                                                      maxWidth,
        int                                                      maxHeight,
        ::TextMeasureData const&                                 textData,
        ::CaretMeasureData const&                                caretData
    ) const = 0;

    virtual ::MeasureResult measureTextHeight(
        ::Bedrock::NotNullNonOwnerPtr<::FontHandle const> const& font,
        ::std::string const&                                     text,
        int                                                      maxWidth,
        ::TextMeasureData const&                                 textData,
        ::CaretMeasureData const&                                caretData
    ) const = 0;

    virtual ::MeasureResult measureTextWidth(
        ::Bedrock::NotNullNonOwnerPtr<::FontHandle const> const& font,
        ::std::string const&                                     text,
        ::TextMeasureData const&                                 textData,
        ::CaretMeasureData const&                                caretData
    ) const = 0;

    virtual ::std::string filterProfanityFromText(::std::string const& text, bool const allowFilterOverride) const = 0;

    virtual bool isProfanityFilterActive() const = 0;

    virtual uint64 getCaretIndexFromPixelCoords(
        ::std::string const&           text,
        ::glm::vec2 const&             xyPosition,
        ::glm::vec2 const&             ownerSize,
        ::gsl::not_null<::FontHandle*> fontHandle,
        ::TextMeasureData const&       textData,
        ::CaretMeasureData const&      caretData
    ) const = 0;
    // NOLINTEND
};
#else // @header-generator platform
class UIMeasureStrategy {};
#endif // @header-generator platform
#endif // @header-generator platform
