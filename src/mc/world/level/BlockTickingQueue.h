#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/level/TickNextTickData.h"
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
    class TickDataSet;
#else // @header-generator platform
#endif // @header-generator platform
    struct HashBlockTick;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    class TickDataSet;
#endif // @header-generator platform
    // clang-format on

    // BlockTickingQueue inner types define
    class BlockTick {
    public:
#if defined(LL_PLAT_A) // @header-generator platform
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>                mIsRemoved;
        ::ll::TypedStorage<8, 32, ::TickNextTickData> mData;
        // NOLINTEND
#else // @header-generator platform
        [[nodiscard]] bool operator>(BlockTick const& other) const { return mData > other.mData; }
#endif // @header-generator platform

    public:
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
        // member variables
#endif // @header-generator platform
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void _pruneQueueForMemory();
#else // @header-generator platform
        bool               mIsRemoved;
        ::TickNextTickData mData;
#endif // @header-generator platform
        // NOLINTEND
    };

    struct HashBlockTick {};

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    class TickDataSet
    : public ::MovePriorityQueue<::BlockTickingQueue::BlockTick, ::std::greater<::BlockTickingQueue::BlockTick>> {
    public:
        // member functions
        // NOLINTBEGIN
        MCAPI void _pruneQueueForMemory();
        // NOLINTEND
    };

#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::LevelChunk*>      mOwningChunk;
    ::ll::TypedStorage<8, 8, ::Tick>             mCurrentTick;
    ::ll::UntypedStorage<8, 24>                  mNextTickQueue;
    ::ll::UntypedStorage<8, 24>                  mActiveTickQueue;
    ::ll::UntypedStorage<8, 24>                  mDeferredTicks;
    ::ll::TypedStorage<1, 1, ::TickingQueueType> mQueueType;
    ::ll::TypedStorage<1, 1, bool>               mInstaTick;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::LevelChunk*>                     mOwningChunk;
    ::ll::TypedStorage<8, 8, ::Tick>                            mCurrentTick;
    ::ll::TypedStorage<8, 24, ::BlockTickingQueue::TickDataSet> mNextTickQueue;
    ::ll::TypedStorage<8, 24, ::BlockTickingQueue::TickDataSet> mActiveTickQueue;
    ::ll::TypedStorage<8, 24, ::BlockTickingQueue::TickDataSet> mDeferredTicks;
    ::ll::TypedStorage<1, 1, ::TickingQueueType>                mQueueType;
    ::ll::TypedStorage<1, 1, bool>                              mInstaTick;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _acquireAllTicks(::BlockTickingQueue&);
#else // @header-generator platform
    MCAPI void _acquireAllTicks(::BlockTickingQueue& otherChunkQueue);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _addToNextTickQueue(::BlockPos const&, ::Block const&, int const, int const);
#else // @header-generator platform
    MCAPI void
    _addToNextTickQueue(::BlockPos const& pos, ::Block const& block, int const tickDelay, int const priorityOffset);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _eliminateTicksForZeroAndAbove(::BlockTickingQueue::TickDataSet&);
#else // @header-generator platform
    MCAPI void _eliminateTicksForZeroAndAbove(::BlockTickingQueue::TickDataSet& queue);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _saveQueue(::ListTag&, ::BlockTickingQueue::TickDataSet const&) const;
#else // @header-generator platform
    MCAPI void _saveQueue(::ListTag& list, ::BlockTickingQueue::TickDataSet const& queue) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void acquireAllRandomTicks(::LevelChunk&);
#else // @header-generator platform
    MCAPI void
    add(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, int tickDelay, int priorityOffset);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void acquireAllTicks(::LevelChunk&);
#else // @header-generator platform
    MCAPI void addTickToLevelChunk(
        ::LevelChunk&     lc,
        ::BlockPos const& pos,
        ::Block const&    block,
        int               tickDelay,
        int               priorityOffset
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void acquireAllTicks(::BlockTickingQueue&);
#else // @header-generator platform
    MCAPI void eliminateDuplicatesOf(::BlockType const& block);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void add(::BlockSource&, ::BlockPos const&, ::Block const&, int, int);
#else // @header-generator platform
    MCAPI void finishInstaticking();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addTickToLevelChunk(::LevelChunk&, ::BlockPos const&, ::Block const&, int, int);
#else // @header-generator platform
    MCAPI bool getNextUpdateForPos(::BlockPos const& pos, ::Tick& tick) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void eliminateAllTicksZeroAndAbove();
#else // @header-generator platform
    MCAPI ::std::unordered_multimap<::BlockPos, ::TickDelayBlock>
    getTickDelaysInArea(::BoundingBox const& boundingBox) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void eliminateDuplicatesOf(::BlockType const&);
#else // @header-generator platform
    MCAPI void load(::CompoundTag const& tag, ::BlockPalette const& palette);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void finishInstaticking();
#else // @header-generator platform
    MCAPI void remove(::brstd::function_ref<bool(::TickNextTickData const&)> removeCondition);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool getNextUpdateForPos(::BlockPos const&, ::Tick&) const;
#else // @header-generator platform
    MCAPI void remove(::BlockPos const& pos, ::Block const& block);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<Tick> getTickDelayForNextTickUpdateAtPos(::BlockPos const&) const;
#else // @header-generator platform
    MCAPI void save(::CompoundTag& tag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unordered_multimap<BlockPos, TickDelayBlock> getTickDelaysInArea(::BoundingBox const&) const;
#else // @header-generator platform
    MCAPI bool tickPendingTicks(::BlockSource& region, ::Tick const& until, int max, bool instaTick_);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI ~BlockTickingQueue();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
