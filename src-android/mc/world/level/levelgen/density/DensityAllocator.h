#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/small_vector.h"
#include "mc/world/Pos.h"
#include "mc/world/level/levelgen/density/DensityVolume.h"

// auto generated forward declare list
// clang-format off
class DensityVolume;
// clang-format on

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
        ::ll::TypedStorage<4, 12, ::Pos>              mMin;
        ::ll::UntypedStorage<2, 6>                    mDimensions;
        ::ll::TypedStorage<8, 24, std::vector<float>> mBuffer;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 400>   mEntries;
    ::ll::TypedStorage<4, 4, uint> mActiveCount;
    // NOLINTEND
};
