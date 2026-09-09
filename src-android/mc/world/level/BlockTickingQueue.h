#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/MovePriorityQueue.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/world/level/Tick.h"
#include "mc/world/level/TickNextTickData.h"
#include "mc/world/level/TickingQueueType.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPalette;
class BlockPos;
class BlockSource;
class BlockType;
class BoundingBox;
class CompoundTag;
class LevelChunk;
class ListTag;
struct TickDelayBlock;
// clang-format on

class BlockTickingQueue {
public:
    // BlockTickingQueue inner types declare
    // clang-format off
    class BlockTick;
    class TickDataSet;
    struct HashBlockTick;
    // clang-format on

    // BlockTickingQueue inner types define
    class BlockTick {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>                mIsRemoved;
        ::ll::TypedStorage<8, 32, ::TickNextTickData> mData;
        // NOLINTEND

    public:
        // prevent constructor by default
        BlockTick();
    };

    class TickDataSet
    : public ::MovePriorityQueue<BlockTickingQueue::BlockTick, std::greater<BlockTickingQueue::BlockTick>> {
    public:
        // prevent constructor by default
        TickDataSet& operator=(TickDataSet const&);
        TickDataSet(TickDataSet const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void _pruneQueueForMemory();
        // NOLINTEND
    };

    struct HashBlockTick {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::LevelChunk*>      mOwningChunk;
    ::ll::TypedStorage<8, 8, ::Tick>             mCurrentTick;
    ::ll::UntypedStorage<8, 24>                  mNextTickQueue;
    ::ll::UntypedStorage<8, 24>                  mActiveTickQueue;
    ::ll::UntypedStorage<8, 24>                  mDeferredTicks;
    ::ll::TypedStorage<1, 1, ::TickingQueueType> mQueueType;
    ::ll::TypedStorage<1, 1, bool>               mInstaTick;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _acquireAllTicks(::BlockTickingQueue&);

    MCNAPI void _addToNextTickQueue(::BlockPos const&, ::Block const&, int const, int const);

    MCNAPI void _eliminateTicksForZeroAndAbove(::BlockTickingQueue::TickDataSet&);

    MCNAPI void _saveQueue(::ListTag&, ::BlockTickingQueue::TickDataSet const&) const;

    MCNAPI void acquireAllRandomTicks(::LevelChunk&);

    MCNAPI void acquireAllTicks(::LevelChunk&);

    MCNAPI void acquireAllTicks(::BlockTickingQueue&);

    MCNAPI void add(::BlockSource&, ::BlockPos const&, ::Block const&, int, int);

    MCNAPI void addTickToLevelChunk(::LevelChunk&, ::BlockPos const&, ::Block const&, int, int);

    MCNAPI void eliminateAllTicksZeroAndAbove();

    MCNAPI void eliminateDuplicatesOf(::BlockType const&);

    MCNAPI void finishInstaticking();

    MCNAPI bool getNextUpdateForPos(::BlockPos const&, ::Tick&) const;

    MCNAPI std::optional<Tick> getTickDelayForNextTickUpdateAtPos(::BlockPos const&) const;

    MCNAPI std::unordered_multimap<BlockPos, TickDelayBlock> getTickDelaysInArea(::BoundingBox const&) const;

    MCNAPI bool hasTickInPendingTicks(::BlockPos const&) const;

    MCNAPI bool isEmpty() const;

    MCNAPI bool isInNextTickQueue(::BlockPos const&, ::BlockType const&, int) const;

    MCNAPI void load(::CompoundTag const&, ::BlockPalette const&);

    MCNAPI void remove(::brstd::function_ref<bool(const TickNextTickData&)>);

    MCNAPI void remove(::BlockPos const&, ::Block const&);

    MCNAPI void save(::CompoundTag&) const;

    MCNAPI void setOwningChunk(::LevelChunk*);

    MCNAPI void tickAllPendingTicks(::BlockSource&, ulong);

    MCNAPI bool tickPendingTicks(::BlockSource&, ::Tick const&, int, bool);

    MCNAPI int ticksFromNow(int) const;

    MCNAPI ~BlockTickingQueue();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
