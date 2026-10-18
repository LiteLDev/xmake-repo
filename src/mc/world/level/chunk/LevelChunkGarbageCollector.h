#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/MPMCQueue.h"

// auto generated forward declare list
// clang-format off
class Dimension;
class LevelChunk;
struct LevelChunkFinalDeleter;
// clang-format on

class LevelChunkGarbageCollector {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Dimension&>       mDimension;
    ::ll::UntypedStorage<8, 616>                 mLevelChunksToDiscard;
    ::ll::TypedStorage<8, 8, std::atomic<ulong>> mPendingDeletes;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Dimension&> mDimension;
    ::ll::TypedStorage<8, 616, ::MPMCQueue<::std::unique_ptr<::LevelChunk, ::LevelChunkFinalDeleter>>>
                                                    mLevelChunksToDiscard;
    ::ll::TypedStorage<8, 8, ::std::atomic<uint64>> mPendingDeletes;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    LevelChunkGarbageCollector& operator=(LevelChunkGarbageCollector const&);
    LevelChunkGarbageCollector(LevelChunkGarbageCollector const&);
    LevelChunkGarbageCollector();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit LevelChunkGarbageCollector(::Dimension&);
#else // @header-generator platform
    MCAPI void acquireDiscardedChunk(::std::unique_ptr<::LevelChunk> discarded);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void flush();

    MCNAPI ulong getPendingDeletesCount() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Dimension&);
#else // @header-generator platform
    MCAPI void flush();
#endif // @header-generator platform
    // NOLINTEND
};
