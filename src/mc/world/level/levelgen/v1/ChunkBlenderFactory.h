#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/ScalarOptional.h"
#include "mc/world/level/biome/BiomeIdType.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BlendingData;
#else // @header-generator platform
#endif // @header-generator platform
class ChunkBlender;
class ChunkSource;
#if defined(LL_PLAT_A) // @header-generator platform
namespace ChunkBlenderUtil { struct AttenuationData; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class ChunkBlenderFactory {
public:
    // ChunkBlenderFactory inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct IntermediateAttenuationData;
#else // @header-generator platform
#endif // @header-generator platform
    struct BlendCheckEntry;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct IntermediateAttenuationData;
#endif // @header-generator platform
    // clang-format on

    // ChunkBlenderFactory inner types define
#if defined(LL_PLAT_A) // @header-generator platform
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

#else // @header-generator platform
#endif // @header-generator platform
    struct BlendCheckEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::ChunkPos> checkPosition;
        ::ll::TypedStorage<1, 1, bool>       adjacentChunk;
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    };
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct IntermediateAttenuationData {
#endif // @header-generator platform
    public:
#if defined(LL_PLAT_A) // @header-generator platform
        // prevent constructor by default
        BlendCheckEntry& operator=(BlendCheckEntry const&);
        BlendCheckEntry(BlendCheckEntry const&);
        BlendCheckEntry();
#else // @header-generator platform
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float>                                               mDistanceToBlendTarget;
        ::ll::TypedStorage<4, 4, float>                                               mWeightedHeight;
        ::ll::TypedStorage<4, 4, float>                                               mTotalHeightWeight;
        ::ll::TypedStorage<4, 4, float>                                               mTotalDensityWeight;
        ::ll::TypedStorage<4, 164, ::std::array<::ScalarOptional<float>, 41>>         mWeightedDensities;
        ::ll::TypedStorage<1, 41, ::std::array<::ScalarOptional<schar>, 41>>          mBlockTypeWeights;
        ::ll::TypedStorage<2, 192, ::std::array<::ScalarOptional<::BiomeIdType>, 96>> mBiome;
        ::ll::TypedStorage<1, 1, bool>                                                mHaveBlockTypes;
        ::ll::TypedStorage<1, 1, bool>                                                mSyncPoint;
        // NOLINTEND
#endif // @header-generator platform
    };

    using ChunkIntermediateAttenuationData =
#if defined(LL_PLAT_A) // @header-generator platform
        std::vector<std::array<ChunkBlenderFactory::IntermediateAttenuationData, 4>>;
#else // @header-generator platform
        ::std::vector<::std::array<::ChunkBlenderFactory::IntermediateAttenuationData, 4>>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_map<ChunkPos, std::shared_ptr<ChunkBlender>>> mAttenuatorCache;
    ::ll::UntypedStorage<1, 140>                                                           mAttenuatorSharedMutex;
    ::ll::TypedStorage<1, 1, bool const>                                                   mIsClientSide;
    ::ll::TypedStorage<8, 8, ::ChunkSource*>                                               mChunkSource;
    ::ll::TypedStorage<2, 2, short const>                                                  mDimensionMinHeight;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ChunkPos, ::std::shared_ptr<::ChunkBlender>>> mAttenuatorCache;
    ::ll::TypedStorage<8, 8, ::std::shared_mutex> mAttenuatorSharedMutex;
    ::ll::TypedStorage<1, 1, bool const>          mIsClientSide;
    ::ll::TypedStorage<8, 8, ::ChunkSource*>      mChunkSource;
    ::ll::TypedStorage<2, 2, short const>         mDimensionMinHeight;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ChunkBlenderFactory();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ChunkBlenderFactory(bool, short);
#else // @header-generator platform
    MCAPI void freeChunkBlenderCache();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI ::std::shared_ptr<::ChunkBlender> getOrCreateChunkBlender(::ChunkPos const& lcPosition);
#endif // @header-generator platform
    // NOLINTEND
};
