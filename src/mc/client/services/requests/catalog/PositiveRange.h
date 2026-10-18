#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace catalog {

#if defined(LL_PLAT_A) // @header-generator platform
class PositiveRange {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mLow;
    ::ll::TypedStorage<4, 4, float> mHigh;
    // NOLINTEND

public:
    // prevent constructor by default
    PositiveRange& operator=(PositiveRange const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PositiveRange(float const, float const);

    MCNAPI float getRangeHigh() const;

    MCNAPI float getRangeLow() const;

    MCNAPI bool hasRangeHigh() const;

    MCNAPI bool hasRangeLow() const;

    MCNAPI bool isValid() const;

    MCNAPI bool operator==(::catalog::PositiveRange const&) const;

    MCNAPI void parse(::Json::Value const&);

    MCNAPI void setRangeHigh(float const);

    MCNAPI void setRangeLow(float const);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(float const, float const);
    // NOLINTEND
};
#else // @header-generator platform
class PositiveRange {};
#endif // @header-generator platform

} // namespace catalog
