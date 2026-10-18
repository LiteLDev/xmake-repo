#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/level/levelgen/density/DensityVolume.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class DensityFunctionRegistry;
class DensitySpline;
#else // @header-generator platform
#endif // @header-generator platform
class IDensityFunction;
// clang-format on

struct DensityFunctionPtr {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<IDensityFunction>>> mDensityFunction;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::std::shared_ptr<::IDensityFunction>>> mDensityFunction;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    DensityFunctionPtr();
#else // @header-generator platform
#endif // @header-generator platform
};
