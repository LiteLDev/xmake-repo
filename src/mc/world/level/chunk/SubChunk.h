#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/platform/brstd/function_ref.h"
#include "mc/platform/threading/LockGuard.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/platform/threading/SpinLockImpl.h"
#include "mc/world/level/chunk/DirtyTicksCounter.h"
#include "mc/world/level/chunk/SubChunkBrightnessStorage.h"
#include "mc/world/level/chunk/SubChunkStorage.h"
#include "mc/world/level/chunk/sub_chunk_storage_unit/PruneType.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPalette;
class BlockPos;
class BlockVolume;
#if defined(LL_PLAT_A) // @header-generator platform
class BoundingBox;
#else // @header-generator platform
#endif // @header-generator platform
class IDataInput;
class IDataOutput;
class SubChunkBrightnessStorage;
class SubChunkPos;
#if defined(LL_PLAT_A) // @header-generator platform
struct ClientChunkGenerationDifferenceData;
#else // @header-generator platform
#endif // @header-generator platform
struct DeserializationChanges;
// clang-format on

struct SubChunk {
public:
    // SubChunk inner types define
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    enum class BlockLayer : uchar {
        Standard = 0,
        Extra    = 1,
        Count    = 2,
    };

#endif // @header-generator platform
    enum class SubChunkState : int {
        Invalid                    = -1,
        Normal                     = 0,
        IsLightingSystemSubChunk   = 1,
        NeedsRequest               = 2,
        ReceivedResponseFromServer = 3,
        ProcessingSubChunk         = 4,
        WaitingForCacheResponse    = 5,
        ProcessedSubChunk          = 6,
        RequestFinished            = 7,
    };

#if defined(LL_PLAT_A) // @header-generator platform
    enum class BlockLayer : uchar {
        Standard = 0,
        Extra    = 1,
        Count    = 2,
    };

#else // @header-generator platform
#endif // @header-generator platform
    using Layer = uchar;

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 8, ::DirtyTicksCounter>                         mDirtyTicksCounter;
    ::ll::TypedStorage<8, 8, std::unique_ptr<SubChunkBrightnessStorage>>  mSkyLight;
    ::ll::TypedStorage<8, 8, std::unique_ptr<SubChunkBrightnessStorage>>  mBlockLight;
    ::ll::TypedStorage<4, 4, ::SubChunk::SubChunkState>                   mSubChunkState;
    ::ll::TypedStorage<1, 1, bool>                                        mHasMaxSkyLight;
    ::ll::TypedStorage<1, 1, bool>                                        mNeedsInitLighting;
    ::ll::TypedStorage<1, 1, bool>                                        mNeedsClientLighting;
    ::ll::TypedStorage<8, 16, std::unique_ptr<SubChunkStorage<Block>>[2]> mBlocks;
    ::ll::TypedStorage<8, 16, ::SubChunkStorage<Block>* [2]>              mBlocksReadPtr;
    ::ll::TypedStorage<8, 24, ::SpinLockImpl>                             mWriteLock;
    ::ll::TypedStorage<8, 8, ulong>                                       mHash;
    ::ll::TypedStorage<1, 1, bool>                                        mHashDirty;
    ::ll::TypedStorage<1, 1, schar>                                       mAbsoluteIndex;
    ::ll::TypedStorage<1, 1, bool>                                        mIsReplacementSubChunk;
    ::ll::TypedStorage<1, 1, uchar>                                       mRenderChunkTrackingVersionNumber;
    ::ll::TypedStorage<1, 1, bool>                                        mIsInitialized;
#else // @header-generator platform
    ::ll::TypedStorage<4, 8, ::DirtyTicksCounter>                               mDirtyTicksCounter;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SubChunkBrightnessStorage>>    mSkyLight;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SubChunkBrightnessStorage>>    mBlockLight;
    ::ll::TypedStorage<4, 4, ::SubChunk::SubChunkState>                         mSubChunkState;
    ::ll::TypedStorage<1, 1, bool>                                              mHasMaxSkyLight;
    ::ll::TypedStorage<1, 1, bool>                                              mNeedsInitLighting;
    ::ll::TypedStorage<1, 1, bool>                                              mNeedsClientLighting;
    ::ll::TypedStorage<8, 16, ::std::unique_ptr<::SubChunkStorage<::Block>>[2]> mBlocks;
    ::ll::TypedStorage<8, 16, ::SubChunkStorage<::Block>* [2]>                  mBlocksReadPtr;
    ::ll::TypedStorage<8, 24, ::SpinLockImpl>                                   mWriteLock;
    ::ll::TypedStorage<8, 8, uint64>                                            mHash;
    ::ll::TypedStorage<1, 1, bool>                                              mHashDirty;
    ::ll::TypedStorage<1, 1, schar>                                             mAbsoluteIndex;
    ::ll::TypedStorage<1, 1, bool>                                              mIsReplacementSubChunk;
    ::ll::TypedStorage<1, 1, uchar>                                             mRenderChunkTrackingVersionNumber;
    ::ll::TypedStorage<1, 1, bool>                                              mIsInitialized;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    SubChunk& operator=(SubChunk const&);
    SubChunk(SubChunk const&);
    SubChunk();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI SubChunk();
#else // @header-generator platform
    MCAPI SubChunk(::SubChunk&& rhs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI SubChunk(::SubChunk&&);
#else // @header-generator platform
    MCAPI SubChunk(::Block const* initBlock, bool maxSkyLight, bool maxLight, schar absoluteIndex);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI SubChunk(::Block const*, bool, bool, schar);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void _createBlockLightStorage();

    MCAPI void _createSkyLightStorage();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _createSkyLightStorage();
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI void _resetLight(bool maxSkyLight, bool maxLight);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _resetLight(bool, bool);
#else // @header-generator platform
    MCAPI void _setBlock(uchar layer, ushort index, ::Block const& block);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _setBlock(uchar, ushort, ::Block const&);
#else // @header-generator platform
    MCAPI void deserialize(
        ::IDataInput&                              stream,
        ::BlockPalette const&                      palette,
        ::SubChunkPos const&                       subChunkPos,
        ::std::optional<::DeserializationChanges*> deserializationChanges
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    deserialize(::IDataInput&, ::BlockPalette const&, ::SubChunkPos const&, std::optional<DeserializationChanges*>);

    MCNAPI void fetchBlocks(::BlockPos const&, ::BlockPos const&, short, ::BlockVolume&) const;

    MCNAPI void fetchBlocksInBox(
        ::BlockPos const&,
        ::BoundingBox const&,
        ::brstd::function_ref<bool(const Block&)> const&,
        std::vector<BlockDataFetchResult<Block>>&
#else // @header-generator platform
    MCAPI void fetchBlocks(
        ::BlockPos const& subChunkOrigin,
        ::BlockPos const& volumeOrigin,
        short             dimensionMinHeight,
        ::BlockVolume&    volume
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void fetchBlocksInCylinder(
        ::BlockPos const&,
        ::BlockPos const&,
        uint,
        uint,
        ::brstd::function_ref<bool(const Block&)> const&,
        std::vector<BlockDataFetchResult<Block>>&
    ) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI bool isPlaceHolderSubChunk() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI schar getAbsoluteIndex() const;
#else // @header-generator platform
    MCAPI ::SubChunk& operator=(::SubChunk&& rhs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Block const& getBlock(ushort) const;
#else // @header-generator platform
    MCAPI void prune(::SubChunkStorageUnit::PruneType pruneType);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Block const& getExtraBlock(ushort) const;
#else // @header-generator platform
    MCAPI ::std::string recalculateHashAndSerialize(bool network);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SubChunkBrightnessStorage::LightPair getLight(ushort) const;
#else // @header-generator platform
    MCAPI void reset(::Block const* resetBlock, bool maxSkyLight, bool fullyLit);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SpinLockImpl& getLock();
#else // @header-generator platform
    MCAPI void serialize(::IDataOutput& stream, bool network) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SubChunk::SubChunkState getSubChunkState() const;
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI void setBlockLight(ushort index, uchar lightValue);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool
    hasAnyBlockInBox(::BlockPos const&, ::BoundingBox const&, ::brstd::function_ref<bool(const Block&)> const&) const;
#else // @header-generator platform
    MCAPI void setBlocksToUniform(::Block const& initBlock, bool maxSkyLight, bool fullyLit);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool hasAnyBlockMatchingFilter(std::function<bool(const Block&)> const&) const;
#else // @header-generator platform
    MCAPI void setFromBlockVolume(::BlockVolume const& box, short height);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void initialize(::Block const*, bool, bool, schar);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void setLight(ushort idx, ::SubChunkBrightnessStorage::LightPair pair);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isEmpty() const;
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI void setSkyLight(ushort index, uchar lightValue);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isEmpty(::SubChunk::BlockLayer) const;

    MCNAPI bool isPaletteUniform(::Block const&) const;

    MCNAPI bool isPlaceHolderSubChunk() const;

    MCNAPI bool isReadPtrEmpty(::SubChunk::BlockLayer) const;

    MCNAPI bool isReplacementSubChunk() const;

    MCNAPI bool isUniform(::Block const&) const;

    MCNAPI bool likelyHasNonUniformBlockLight() const;

    MCNAPI bool needsClientLighting() const;

    MCNAPI bool needsInitLighting() const;

    MCNAPI ::SubChunk& operator=(::SubChunk&&);

    MCNAPI void prune();

    MCNAPI void prune(::SubChunkStorageUnit::PruneType);

    MCNAPI void recalculateHash(bool);

    MCNAPI std::string recalculateHashAndSerialize(bool);

    MCNAPI void reset(::Block const*, bool, bool);

    MCNAPI bool safeToModify() const;

    MCNAPI void serialize(::IDataOutput&, bool) const;

    MCNAPI void setAbsoluteIndex(schar);

    MCNAPI void setAllIsMaxSkyLight();

    MCNAPI void setAllIsNoSkyLight();

    MCNAPI void setBlock(ushort, ::Block const&);

    MCNAPI void setBlockLight(ushort, uchar);

    MCNAPI void setBlocksToUniform(::Block const&, bool, bool);

    MCNAPI void setExtraBlock(ushort, ::Block const&);

    MCNAPI void setFromBlockVolume(::BlockVolume const&, short);

    MCNAPI void setIsReplacementSubChunk(bool);

    MCNAPI void setLight(ushort, ::SubChunkBrightnessStorage::LightPair);

    MCNAPI void setNeedsClientLighting(bool);

    MCNAPI void setNeedsInitLighting(bool);

    MCNAPI void setRenderChunkTrackingVersionNumber(uchar);

    MCNAPI void setSkyLight(ushort, uchar);

    MCNAPI void setSubChunkState(::SubChunk::SubChunkState);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void const flushGarbageCollectors();
#else // @header-generator platform
    MCAPI ~SubChunk();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI void* $ctor(::SubChunk&& rhs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::SubChunk&&);
#else // @header-generator platform
    MCAPI void* $ctor(::Block const* initBlock, bool maxSkyLight, bool maxLight, schar absoluteIndex);
    // NOLINTEND
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Block const*, bool, bool, schar);
#else // @header-generator platform
public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
