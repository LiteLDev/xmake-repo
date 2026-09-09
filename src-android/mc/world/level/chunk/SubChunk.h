#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/function_ref.h"
#include "mc/platform/threading/LockGuard.h"
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
class BoundingBox;
class IDataInput;
class IDataOutput;
class SubChunkBrightnessStorage;
class SubChunkPos;
struct ClientChunkGenerationDifferenceData;
struct DeserializationChanges;
// clang-format on

struct SubChunk {
public:
    // SubChunk inner types define
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

    enum class BlockLayer : uchar {
        Standard = 0,
        Extra    = 1,
        Count    = 2,
    };

    using Layer = uchar;

public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SubChunk();

    MCNAPI SubChunk(::SubChunk&&);

    MCNAPI SubChunk(::Block const*, bool, bool, schar);

    MCNAPI void _createSkyLightStorage();

    MCNAPI void _resetLight(bool, bool);

    MCNAPI void _setBlock(uchar, ushort, ::Block const&);

    MCNAPI void
    deserialize(::IDataInput&, ::BlockPalette const&, ::SubChunkPos const&, std::optional<DeserializationChanges*>);

    MCNAPI void fetchBlocks(::BlockPos const&, ::BlockPos const&, short, ::BlockVolume&) const;

    MCNAPI void fetchBlocksInBox(
        ::BlockPos const&,
        ::BoundingBox const&,
        ::brstd::function_ref<bool(const Block&)> const&,
        std::vector<BlockDataFetchResult<Block>>&
    ) const;

    MCNAPI void fetchBlocksInCylinder(
        ::BlockPos const&,
        ::BlockPos const&,
        uint,
        uint,
        ::brstd::function_ref<bool(const Block&)> const&,
        std::vector<BlockDataFetchResult<Block>>&
    ) const;

    MCNAPI schar getAbsoluteIndex() const;

    MCNAPI ::Block const& getBlock(ushort) const;

    MCNAPI ::Block const& getExtraBlock(ushort) const;

    MCNAPI ::SubChunkBrightnessStorage::LightPair getLight(ushort) const;

    MCNAPI ::SpinLockImpl& getLock();

    MCNAPI ::SubChunk::SubChunkState getSubChunkState() const;

    MCNAPI bool
    hasAnyBlockInBox(::BlockPos const&, ::BoundingBox const&, ::brstd::function_ref<bool(const Block&)> const&) const;

    MCNAPI bool hasAnyBlockMatchingFilter(std::function<bool(const Block&)> const&) const;

    MCNAPI void initialize(::Block const*, bool, bool, schar);

    MCNAPI bool isEmpty() const;

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
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::SubChunk&&);

    MCNAPI void* $ctor(::Block const*, bool, bool, schar);
    // NOLINTEND
};
