#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/UniqueOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ActorEventCoordinator;
class BlockEventCoordinator;
class ClientPlayerEventCoordinator;
class ItemEventCoordinator;
class LevelEventCoordinator;
class NpcEventCoordinator;
class PlayerEventCoordinator;
class ScriptDeferredEventCoordinator;
class ScriptingEventCoordinator;
class ServerLevelEventCoordinator;
class ServerNetworkEventCoordinator;
class ServerPlayerEventCoordinator;
// clang-format on

class EventCoordinatorManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mActorEventCoordinator;
    ::ll::UntypedStorage<8, 16> mBlockEventCoordinator;
    ::ll::UntypedStorage<8, 16> mItemEventCoordinator;
    ::ll::UntypedStorage<8, 16> mNpcEventCoordinator;
    ::ll::UntypedStorage<8, 16> mScriptingEventCoordinator;
    ::ll::UntypedStorage<8, 16> mScriptDeferredEventCoordinator;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EventCoordinatorManager();

    virtual ::Bedrock::NonOwnerPointer<PlayerEventCoordinator> getRemotePlayerEventCoordinator();

    virtual ::Bedrock::NonOwnerPointer<ClientPlayerEventCoordinator> getClientPlayerEventCoordinator();

    virtual ::Bedrock::NonOwnerPointer<ServerPlayerEventCoordinator> getServerPlayerEventCoordinator();

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<LevelEventCoordinator>> getLevelEventCoordinator() = 0;

    virtual ::Bedrock::NonOwnerPointer<ServerLevelEventCoordinator> getServerLevelEventCoordinator();

    virtual ::Bedrock::NonOwnerPointer<ServerNetworkEventCoordinator> getServerNetworkEventCoordinator();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EventCoordinatorManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::NonOwnerPointer<PlayerEventCoordinator> $getRemotePlayerEventCoordinator();

    MCNAPI ::Bedrock::NonOwnerPointer<ClientPlayerEventCoordinator> $getClientPlayerEventCoordinator();

    MCNAPI ::Bedrock::NonOwnerPointer<ServerPlayerEventCoordinator> $getServerPlayerEventCoordinator();

    MCNAPI ::Bedrock::NonOwnerPointer<ServerLevelEventCoordinator> $getServerLevelEventCoordinator();

    MCNAPI ::Bedrock::NonOwnerPointer<ServerNetworkEventCoordinator> $getServerNetworkEventCoordinator();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
