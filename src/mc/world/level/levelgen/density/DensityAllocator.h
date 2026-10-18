#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/small_vector.h"
#include "mc/world/Pos.h"
#include "mc/world/level/levelgen/density/DensityVolume.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class DensityVolume;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class DensityAllocator {
public:
    // DensityAllocator inner types declare
    // clang-format off
    struct VolumeEntry;
    // clang-format on

    // DensityAllocator inner types define
    struct VolumeEntry {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<4, 12, ::Pos>              mMin;
        ::ll::UntypedStorage<2, 6>                    mDimensions;
        ::ll::TypedStorage<8, 24, std::vector<float>> mBuffer;
#else // @header-generator platform
        ::ll::TypedStorage<4, 12, ::Pos>                      mMin;
        ::ll::TypedStorage<2, 6, ::DensityVolume::Dimensions> mDimensions;
        ::ll::TypedStorage<8, 24, ::std::vector<float>>       mBuffer;
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 400>   mEntries;
    ::ll::TypedStorage<4, 4, uint> mActiveCount;
#else // @header-generator platform
    ::ll::TypedStorage<8, 400, ::Bedrock::small_vector<::DensityAllocator::VolumeEntry, 8>> mEntries;
    ::ll::TypedStorage<4, 4, uint>                                                          mActiveCount;
#endif // @header-generator platform
    // NOLINTEND
};
