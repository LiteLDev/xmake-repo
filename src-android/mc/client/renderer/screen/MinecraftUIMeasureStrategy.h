#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/UIMeasureStrategy.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class Font;
class FontHandle;
class ProfanityContext;
struct CaretMeasureData;
struct MeasureResult;
struct TextMeasureData;
// clang-format on

class MinecraftUIMeasureStrategy : public ::UIMeasureStrategy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mProfanityContext;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftUIMeasureStrategy();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~MinecraftUIMeasureStrategy();

    virtual ::MeasureResult measureText(::gsl::not_null<Bedrock::NonOwnerPointer<const FontHandle>> const&, std::string const&, int, int, ::TextMeasureData const&, ::CaretMeasureData const&) const;

    virtual ::MeasureResult measureTextHeight(::gsl::not_null<Bedrock::NonOwnerPointer<const FontHandle>> const&, std::string const&, int, ::TextMeasureData const&, ::CaretMeasureData const&) const;

    virtual ::MeasureResult measureTextWidth(::gsl::not_null<Bedrock::NonOwnerPointer<const FontHandle>> const&, std::string const&, ::TextMeasureData const&, ::CaretMeasureData const&) const;

    virtual std::string filterProfanityFromText(std::string const&, bool const) const;

    virtual bool isProfanityFilterActive() const;

    virtual ulong getCaretIndexFromPixelCoords(std::string const&, ::glm::vec<2, float, (glm::qualifier)0> const&, ::glm::vec<2, float, (glm::qualifier)0> const&, ::gsl::not_null<FontHandle*>, ::TextMeasureData const&, ::CaretMeasureData const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _fillCaretOffsets(std::vector<int>&, int, int) const;

    MCNAPI ::MeasureResult _measureText(
        ::gsl::not_null<Bedrock::NonOwnerPointer<const FontHandle>> const&,
        std::string const&,
        int,
        int,
        ::TextMeasureData const&,
        ::CaretMeasureData const&
    ) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::MeasureResult $measureText(
        ::gsl::not_null<Bedrock::NonOwnerPointer<const FontHandle>> const&,
        std::string const&,
        int,
        int,
        ::TextMeasureData const&,
        ::CaretMeasureData const&
    ) const;

    MCNAPI ::MeasureResult $measureTextHeight(
        ::gsl::not_null<Bedrock::NonOwnerPointer<const FontHandle>> const&,
        std::string const&,
        int,
        ::TextMeasureData const&,
        ::CaretMeasureData const&
    ) const;

    MCNAPI ::MeasureResult $measureTextWidth(
        ::gsl::not_null<Bedrock::NonOwnerPointer<const FontHandle>> const&,
        std::string const&,
        ::TextMeasureData const&,
        ::CaretMeasureData const&
    ) const;

    MCNAPI std::string $filterProfanityFromText(std::string const&, bool const) const;

    MCNAPI bool $isProfanityFilterActive() const;

    MCNAPI ulong $getCaretIndexFromPixelCoords(
        std::string const&,
        ::glm::vec<2, float, (glm::qualifier)0> const&,
        ::glm::vec<2, float, (glm::qualifier)0> const&,
        ::gsl::not_null<FontHandle*>,
        ::TextMeasureData const&,
        ::CaretMeasureData const&
    ) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
