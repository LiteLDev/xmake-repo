#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/ClientInstanceEventListener.h"
#include "mc/world/events/ClientInstanceGameplayEvent.h"
#include "mc/world/events/EventCoordinator.h"
#include "mc/world/events/EventRef.h"

// auto generated forward declare list
// clang-format off
class ClientInstance;
class ClientInstanceEventHandler;
class Level;
class Minecraft;
// clang-format on

class ClientInstanceEventCoordinator : public ::EventCoordinator<ClientInstanceEventListener> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<ClientInstanceEventHandler>> mClientInstanceGameplayHandler;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientInstanceEventCoordinator();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void registerClientInstanceEventHandler(std::unique_ptr<ClientInstanceEventHandler>);

    MCNAPI void sendClientCreatedLevel(::ClientInstance&, ::Level&);

    MCNAPI void sendClientEnteredWorld(::ClientInstance&);

    MCNAPI void sendClientInitializeEnd(::ClientInstance&);

    MCNAPI void sendClientInitializeStart(::ClientInstance&);

    MCNAPI void sendClientMinecraftInitialized(::ClientInstance&, ::Minecraft&);

    MCNAPI void sendClientSuspend(::ClientInstance&);

    MCNAPI void sendClientUpdateEnd(::ClientInstance&);

    MCNAPI void sendClientUpdateStart(::ClientInstance&);

    MCNAPI void sendEvent(::EventRef<ClientInstanceGameplayEvent<void>> const&);

    MCNAPI void sendStartLeaveGame(::ClientInstance&);
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
