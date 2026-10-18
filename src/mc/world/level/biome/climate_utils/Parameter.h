#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClimateUtils {

struct Parameter {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, long> mMin;
    ::ll::TypedStorage<8, 8, long> mMax;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, int64> mMin;
    ::ll::TypedStorage<8, 8, int64> mMax;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    Parameter();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI Parameter(float, float);
    // NOLINTEND
#else // @header-generator platform
    MCAPI Parameter(int64 const& min, int64 const& max);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ClimateUtils::Parameter
    fromParameters(::ClimateUtils::Parameter const&, ::ClimateUtils::Parameter const&);
#else // @header-generator platform
    MCAPI Parameter(float min, float max);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(float, float);
#else // @header-generator platform
    MCAPI void* $ctor(int64 const& min, int64 const& max);

    MCAPI void* $ctor(float min, float max);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ClimateUtils
