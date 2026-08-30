#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
class ClientInstance;
class Level;
class Minecraft;
struct ClientInstanceNotificationEvent;
// clang-format on

class ClientInstanceEventListener {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientInstanceEventListener();

    virtual ::EventResult onClientInitializeStart(::ClientInstance&);

    virtual ::EventResult onClientInitializeEnd(::ClientInstance&);

    virtual ::EventResult onClientMinecraftInitialized(::ClientInstance&, ::Minecraft&);

    virtual ::EventResult onClientCreatedLevel(::ClientInstance&, ::Level&);

    virtual ::EventResult onClientUpdateStart(::ClientInstance&);

    virtual ::EventResult onClientUpdateEnd(::ClientInstance&);

    virtual ::EventResult onClientSuspend(::ClientInstance&);

    virtual ::EventResult onClientEnteredWorld(::ClientInstance&);

    virtual ::EventResult onStartLeaveGame(::ClientInstance&);

    virtual ::EventResult onEvent(::ClientInstanceNotificationEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::EventResult $onClientInitializeStart(::ClientInstance&);

    MCNAPI ::EventResult $onClientInitializeEnd(::ClientInstance&);

    MCNAPI ::EventResult $onClientMinecraftInitialized(::ClientInstance&, ::Minecraft&);

    MCNAPI ::EventResult $onClientCreatedLevel(::ClientInstance&, ::Level&);

    MCNAPI ::EventResult $onClientUpdateStart(::ClientInstance&);

    MCNAPI ::EventResult $onClientUpdateEnd(::ClientInstance&);

    MCNAPI ::EventResult $onClientSuspend(::ClientInstance&);

    MCNAPI ::EventResult $onClientEnteredWorld(::ClientInstance&);

    MCNAPI ::EventResult $onStartLeaveGame(::ClientInstance&);

    MCNAPI ::EventResult $onEvent(::ClientInstanceNotificationEvent const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
