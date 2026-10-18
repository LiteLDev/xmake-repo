#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/InstancedThreadLocal.h"
#include "mc/world/level/levelgen/density/DensityCalculators.h"
#include "mc/world/level/levelgen/density/DensityVolume.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class DensityAllocator;
class DensityFunctionRegistry;
class Pos;
struct DensityFunctionPtr;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::vector<float>>           mValueStorage;
        ::ll::TypedStorage<8, 64, std::optional<DensityVolume>> mDensityVolume;
#else // @header-generator platform
        ::ll::TypedStorage<8, 24, ::std::vector<float>>             mValueStorage;
        ::ll::TypedStorage<8, 64, ::std::optional<::DensityVolume>> mDensityVolume;
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::DensityCalculators> mDensityCalculators;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 112>                    mLocalResults;
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        168,
        ::Bedrock::Threading::InstancedThreadLocal<
            ::PrecalculatedDensityVolume::DensityResults,
            ::std::allocator<::PrecalculatedDensityVolume::DensityResults>>>
        mLocalResults;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    PrecalculatedDensityVolume();
#else // @header-generator platform
#endif // @header-generator platform
};
