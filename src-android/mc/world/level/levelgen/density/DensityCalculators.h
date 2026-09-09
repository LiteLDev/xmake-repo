#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class DensityAllocator;
class DensityFunctionRegistry;
class DensityVolume;
class IDensityCalculator;
struct DensityFunctionPtr;
// clang-format on

class DensityCalculators {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<IDensityCalculator>>>        mCalculators;
    ::ll::TypedStorage<8, 8, std::unique_ptr<std::unordered_map<const void*, ushort>>> mCalculatorIndices;
    // NOLINTEND

public:
    // prevent constructor by default
    DensityCalculators();
};
