#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/ScalarOptional.h"
#include "mc/world/level/biome/BiomeIdType.h"
#include "mc/world/level/chunk/BlendVersion.h"
#include "mc/world/level/chunk/LevelChunk.h"
#include "mc/world/level/storage/BlendingBlockType.h"
#include "mc/world/level/storage/BlendingConfig.h"

// auto generated forward declare list
// clang-format off
struct PersistentBlendData;
// clang-format on

class BlendingData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::BlendingConfig>                                mConfig;
    ::ll::UntypedStorage<1, 2>                                                 mNeighbors;
    ::ll::UntypedStorage<2, 32>                                                mHeights;
    ::ll::TypedStorage<8, 384, std::array<std::vector<BiomeIdType>, 16>>       mBiomes3D;
    ::ll::TypedStorage<8, 384, std::array<std::vector<float>, 16>>             mDensity;
    ::ll::TypedStorage<8, 384, std::array<std::vector<BlendingBlockType>, 16>> mBlockTypes;
    // NOLINTEND

public:
    // prevent constructor by default
    BlendingData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ScalarOptional<BiomeIdType> getBiome(int, int, int) const;

    MCNAPI ::BlendingBlockType getBlockType(int, int, int) const;

    MCNAPI ::ScalarOptional<float> getDensity(int, int, int) const;

    MCNAPI ::ScalarOptional<short> getHeight(int, int) const;

    MCNAPI bool hasBlendDataAt(int, int) const;
    // NOLINTEND
};
