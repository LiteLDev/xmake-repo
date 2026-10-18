#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class DensityAllocator;
class DensityFunctionRegistry;
class DensityVolume;
#else // @header-generator platform
#endif // @header-generator platform
class IDensityCalculator;
#if defined(LL_PLAT_A) // @header-generator platform
struct DensityFunctionPtr;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class DensityCalculators {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<IDensityCalculator>>>        mCalculators;
    ::ll::TypedStorage<8, 8, std::unique_ptr<std::unordered_map<const void*, ushort>>> mCalculatorIndices;
    // NOLINTEND
#else // @header-generator platform
    // DensityCalculators inner types define
    using CalculatorIndexMap = ::std::unordered_map<void const*, ushort>;
#endif // @header-generator platform

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    DensityCalculators();
#else // @header-generator platform
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::IDensityCalculator>>>      mCalculators;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::std::unordered_map<void const*, ushort>>> mCalculatorIndices;
    // NOLINTEND
#endif // @header-generator platform
};
