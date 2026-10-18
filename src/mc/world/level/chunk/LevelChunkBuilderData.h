#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/threading/SpinLockImpl.h"
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/chunk/ChunkState.h"
#include "mc/world/level/chunk/LevelChunkGridAreaElement.h"

// auto generated forward declare list
// clang-format off
class LevelChunk;
// clang-format on

class LevelChunkBuilderData {
public:
    // LevelChunkBuilderData inner types declare
    // clang-format off
    struct ChunkReadyForProcessingElement;
    // clang-format on

    // LevelChunkBuilderData inner types define
    struct ChunkReadyForProcessingElement {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 16, std::pair<ChunkPos, ChunkState>> mChunkPosAndExpectedState;
        ::ll::TypedStorage<4, 4, int>                              mPriority;
#else // @header-generator platform
        ::ll::TypedStorage<8, 16, ::std::pair<::ChunkPos, ::ChunkState>> mChunkPosAndExpectedState;
        ::ll::TypedStorage<4, 4, int>                                    mPriority;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        ChunkReadyForProcessingElement& operator=(ChunkReadyForProcessingElement const&);
        ChunkReadyForProcessingElement(ChunkReadyForProcessingElement const&);
        ChunkReadyForProcessingElement();
#else // @header-generator platform
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    ::ll::TypedStorage<8, 24, ::SpinLockImpl> mChunkGenerationGridMapSpinLock;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_map<ChunkPos, std::shared_ptr<LevelChunkGridAreaElement<std::weak_ptr<LevelChunk>>>>> mChunkGenerationGridMap;
    ::ll::TypedStorage<8, 24, ::SpinLockImpl> mChunksToAddToProcessingSpinLock;
    ::ll::TypedStorage<8, 24, std::vector<std::pair<ChunkPos, ChunkState>>> mChunksToAddToProcessing;
    ::ll::TypedStorage<8, 24, ::SpinLockImpl> mChunksReadyForProcessingSpinLock;
    ::ll::TypedStorage<8, 40, std::unordered_set<std::pair<ChunkPos, ChunkState>>> mChunksReadyForProcessing;
    ::ll::TypedStorage<8, 24, std::vector<LevelChunkBuilderData::ChunkReadyForProcessingElement>> mChunkSortVector;
    ::ll::TypedStorage<4, 4, std::atomic<int>> mChunkGenerationTasksInFlight;
    ::ll::TypedStorage<4, 4, std::atomic<int>> mChunkQueueDepth;
    ::ll::TypedStorage<8, 24, ::SpinLockImpl> mSpawnTasksLock;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::ChunkPos, ::std::shared_ptr<::LevelChunkGridAreaElement<::std::weak_ptr<::LevelChunk>>>>>
                                                                                    mChunkGenerationGridMap;
    ::ll::TypedStorage<8, 24, ::SpinLockImpl>                                       mChunksToAddToProcessingSpinLock;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::ChunkPos, ::ChunkState>>> mChunksToAddToProcessing;
    ::ll::TypedStorage<8, 24, ::SpinLockImpl>                                       mChunksReadyForProcessingSpinLock;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::std::pair<::ChunkPos, ::ChunkState>>> mChunksReadyForProcessing;
    ::ll::TypedStorage<8, 24, ::std::vector<::LevelChunkBuilderData::ChunkReadyForProcessingElement>> mChunkSortVector;
    ::ll::TypedStorage<4, 4, ::std::atomic<int>> mChunkGenerationTasksInFlight;
    ::ll::TypedStorage<4, 4, ::std::atomic<int>> mChunkQueueDepth;
    ::ll::TypedStorage<8, 24, ::SpinLockImpl>    mSpawnTasksLock;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI LevelChunkBuilderData();
#else // @header-generator platform
    MCAPI LevelChunkBuilderData();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void enqueueChunkForProcessing(::ChunkPos const&, ::ChunkState);
#else // @header-generator platform
    MCAPI void enqueueChunkForProcessing(::ChunkPos const& pos, ::ChunkState state);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~LevelChunkBuilderData();
#else // @header-generator platform
    MCAPI ~LevelChunkBuilderData();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI void* $ctor();
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
