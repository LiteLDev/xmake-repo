#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/ScalarOptional.h"
#include "mc/world/level/biome/BiomeIdType.h"

// auto generated forward declare list
// clang-format off
class BlendingData;
class ChunkBlender;
class ChunkSource;
namespace ChunkBlenderUtil { struct AttenuationData; }
// clang-format on

class ChunkBlenderFactory {
public:
    // ChunkBlenderFactory inner types declare
    // clang-format off
    struct IntermediateAttenuationData;
    struct BlendCheckEntry;
    // clang-format on

    // ChunkBlenderFactory inner types define
    struct IntermediateAttenuationData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> mDistanceToBlendTarget;
        ::ll::TypedStorage<4, 4, float> mWeightedHeight;
        ::ll::TypedStorage<4, 4, float> mTotalHeightWeight;
        ::ll::TypedStorage<4, 4, float> mTotalDensityWeight;
        ::ll::UntypedStorage<4, 164>    mWeightedDensities;
        ::ll::UntypedStorage<1, 41>     mBlockTypeWeights;
        ::ll::UntypedStorage<2, 192>    mBiome;
        ::ll::TypedStorage<1, 1, bool>  mHaveBlockTypes;
        ::ll::TypedStorage<1, 1, bool>  mSyncPoint;
        // NOLINTEND
    };

    struct BlendCheckEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::ChunkPos> checkPosition;
        ::ll::TypedStorage<1, 1, bool>       adjacentChunk;
        // NOLINTEND

    public:
        // prevent constructor by default
        BlendCheckEntry& operator=(BlendCheckEntry const&);
        BlendCheckEntry(BlendCheckEntry const&);
        BlendCheckEntry();
    };

    using ChunkIntermediateAttenuationData =
        std::vector<std::array<ChunkBlenderFactory::IntermediateAttenuationData, 4>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<ChunkPos, std::shared_ptr<ChunkBlender>>> mAttenuatorCache;
    ::ll::UntypedStorage<1, 140>                                                           mAttenuatorSharedMutex;
    ::ll::TypedStorage<1, 1, bool const>                                                   mIsClientSide;
    ::ll::TypedStorage<8, 8, ::ChunkSource*>                                               mChunkSource;
    ::ll::TypedStorage<2, 2, short const>                                                  mDimensionMinHeight;
    // NOLINTEND

public:
    // prevent constructor by default
    ChunkBlenderFactory();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ChunkBlenderFactory(bool, short);

    MCNAPI void freeChunkBlenderCache();

    MCNAPI std::shared_ptr<ChunkBlender> getOrCreateChunkBlender(::ChunkPos const&);

    MCNAPI bool isClientSide() const;

    MCNAPI void setChunkSource(::ChunkSource*);

    MCNAPI ~ChunkBlenderFactory();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(bool, short);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
