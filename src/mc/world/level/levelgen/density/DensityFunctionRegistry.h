#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/level/levelgen/density/DensityFunctionPtr.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
struct DensityFunctionPtr;
// clang-format on
#endif // @header-generator platform

class DensityFunctionRegistry {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, DensityFunctionPtr>> mFunctions;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DensityFunctionRegistry();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::DensityFunctionPtr>> mFunctions;
#endif // @header-generator platform
    // NOLINTEND
};
