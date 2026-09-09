#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/InstancedThreadLocal.h"
#include "mc/world/level/levelgen/density/DensityCalculators.h"
#include "mc/world/level/levelgen/density/DensityVolume.h"

// auto generated forward declare list
// clang-format off
class DensityAllocator;
class DensityFunctionRegistry;
class Pos;
struct DensityFunctionPtr;
// clang-format on

class PrecalculatedDensityVolume {
public:
    // PrecalculatedDensityVolume inner types declare
    // clang-format off
    struct DensityResults;
    // clang-format on

    // PrecalculatedDensityVolume inner types define
    struct DensityResults {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::vector<float>>           mValueStorage;
        ::ll::TypedStorage<8, 64, std::optional<DensityVolume>> mDensityVolume;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::DensityCalculators> mDensityCalculators;
    ::ll::UntypedStorage<8, 112>                    mLocalResults;
    // NOLINTEND

public:
    // prevent constructor by default
    PrecalculatedDensityVolume();
};
