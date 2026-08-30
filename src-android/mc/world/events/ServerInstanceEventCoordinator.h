#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/events/EventCoordinator.h"
#include "mc/world/events/EventRef.h"
#include "mc/world/events/ServerInstanceEventListener.h"
#include "mc/world/events/ServerInstanceGameplayEvent.h"

// auto generated forward declare list
// clang-format off
class Level;
class Minecraft;
class ServerInstance;
class ServerInstanceEventHandler;
// clang-format on

class ServerInstanceEventCoordinator : public ::EventCoordinator<ServerInstanceEventListener> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<ServerInstanceEventHandler>> mServerInstanceEventHandler;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerInstanceEventCoordinator();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void registerServerInstanceEventHandler(std::unique_ptr<ServerInstanceEventHandler>&&);

    MCNAPI void sendEvent(::EventRef<ServerInstanceGameplayEvent<void>> const&);

    MCNAPI void sendServerInitializeEnd(::ServerInstance&);

    MCNAPI void sendServerInitializeStart(::ServerInstance&);

    MCNAPI void sendServerLevelInitialized(::ServerInstance&, ::Level&);

    MCNAPI void
    sendServerMinecraftInitialized(::ServerInstance&, ::gsl::not_null<Bedrock::NonOwnerPointer<Minecraft>> const&);

    MCNAPI void sendServerResume(::ServerInstance&);

    MCNAPI void sendServerSuspend(::ServerInstance&);

    MCNAPI void sendServerThreadStarted(::ServerInstance&);

    MCNAPI void sendServerThreadStopped(::ServerInstance&);

    MCNAPI void sendServerUpdateEnd(::ServerInstance&);

    MCNAPI void sendServerUpdateStart(::ServerInstance&);

    MCNAPI void sendStartLeaveGame(::ServerInstance&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
