#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
