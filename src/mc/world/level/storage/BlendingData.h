#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#endif // @header-generator platform

class BlendingData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 16, ::BlendingConfig>                                mConfig;
    ::ll::UntypedStorage<1, 2>                                                 mNeighbors;
    ::ll::UntypedStorage<2, 32>                                                mHeights;
    ::ll::TypedStorage<8, 384, std::array<std::vector<BiomeIdType>, 16>>       mBiomes3D;
    ::ll::TypedStorage<8, 384, std::array<std::vector<float>, 16>>             mDensity;
    ::ll::TypedStorage<8, 384, std::array<std::vector<BlendingBlockType>, 16>> mBlockTypes;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 16>  mUnk2236bb;
    ::ll::UntypedStorage<1, 1>   mUnk221f9b;
    ::ll::UntypedStorage<2, 32>  mUnkf2a2f1;
    ::ll::UntypedStorage<8, 384> mUnkad10ef;
    ::ll::UntypedStorage<8, 384> mUnk63ba47;
    ::ll::UntypedStorage<8, 384> mUnk4d055d;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    BlendingData& operator=(BlendingData const&);
    BlendingData(BlendingData const&);
#endif // @header-generator platform
    BlendingData();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ScalarOptional<BiomeIdType> getBiome(int, int, int) const;

    MCNAPI ::BlendingBlockType getBlockType(int, int, int) const;

    MCNAPI ::ScalarOptional<float> getDensity(int, int, int) const;

    MCNAPI ::ScalarOptional<short> getHeight(int, int) const;

    MCNAPI bool hasBlendDataAt(int, int) const;
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
