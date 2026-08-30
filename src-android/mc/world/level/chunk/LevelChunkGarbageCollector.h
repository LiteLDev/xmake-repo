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
    ::ll::TypedStorage<8, 8, ::Dimension&>       mDimension;
    ::ll::UntypedStorage<8, 616>                 mLevelChunksToDiscard;
    ::ll::TypedStorage<8, 8, std::atomic<ulong>> mPendingDeletes;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelChunkGarbageCollector& operator=(LevelChunkGarbageCollector const&);
    LevelChunkGarbageCollector(LevelChunkGarbageCollector const&);
    LevelChunkGarbageCollector();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit LevelChunkGarbageCollector(::Dimension&);

    MCNAPI void flush();

    MCNAPI ulong getPendingDeletesCount() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Dimension&);
    // NOLINTEND
};
