#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/world/level/SubChunkPos.h"

// auto generated forward declare list
// clang-format off
class Player;
class SubChunkPacketHandler;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class SubChunkInsertManager {
public:
    // SubChunkInsertManager inner types declare
    // clang-format off
    struct SubChunkInsertTaskInfo;
    // clang-format on

    // SubChunkInsertManager inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct SubChunkInsertTaskInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>                                     mDistanceToPlayerSq;
        ::ll::TypedStorage<4, 12, ::SubChunkPos>                          mPosition;
        ::ll::TypedStorage<8, 16, std::shared_ptr<SubChunkPacketHandler>> mHandler;
        // NOLINTEND

    public:
        // prevent constructor by default
        SubChunkInsertTaskInfo& operator=(SubChunkInsertTaskInfo const&);
        SubChunkInsertTaskInfo();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~SubChunkInsertTaskInfo();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<SubChunkInsertManager::SubChunkInsertTaskInfo>> mQueuedSubChunkTasks;
    ::ll::TypedStorage<8, 240, ::TaskGroup>                                               mTaskGroup;
    ::ll::TypedStorage<8, 8, ulong>                                                       mMaxInFlightTasksFloor;
    ::ll::TypedStorage<8, 8, ulong>                                                       mMaxInFlightTasks;
    ::ll::TypedStorage<1, 1, bool>                                                        mIsLeavingGame;
    ::ll::UntypedStorage<8, 48>                                                           mGetPrimaryLocalPlayer;
    // NOLINTEND

public:
    // prevent constructor by default
    SubChunkInsertManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SubChunkInsertManager(std::function<Player*()>);

    MCNAPI void addSubChunkInsertTask(std::shared_ptr<SubChunkPacketHandler>);

    MCNAPI void stopAndFlushTasks();

    MCNAPI void tick();

    MCNAPI ~SubChunkInsertManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::function<Player*()>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    struct SubChunkInsertTaskInfo {};
#endif // @header-generator platform
};
