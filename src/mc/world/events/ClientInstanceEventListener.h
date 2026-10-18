#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
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
    // ClientInstanceEventListener inner types define
    using EventType = ::ClientInstanceNotificationEvent;

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientInstanceEventListener() = default;

    virtual ::EventResult onClientInitializeStart(::ClientInstance& instance);

    virtual ::EventResult onClientInitializeEnd(::ClientInstance& instance);

    virtual ::EventResult onClientMinecraftInitialized(::ClientInstance& instance, ::Minecraft& minecraft);

    virtual ::EventResult onClientCreatedLevel(::ClientInstance& instance, ::Level& level);

    virtual ::EventResult onClientUpdateStart(::ClientInstance& instance);

    virtual ::EventResult onClientUpdateEnd(::ClientInstance& instance);

    virtual ::EventResult onClientSuspend(::ClientInstance& instance);

    virtual ::EventResult onClientEnteredWorld(::ClientInstance& instance);

    virtual ::EventResult onStartLeaveGame(::ClientInstance& instance);

    virtual ::EventResult onEvent(::ClientInstanceNotificationEvent const& playerViewPerspectiveChangedEvent);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::EventResult $onClientInitializeStart(::ClientInstance& instance);

    MCFOLD ::EventResult $onClientInitializeEnd(::ClientInstance& instance);

    MCFOLD ::EventResult $onClientMinecraftInitialized(::ClientInstance& instance, ::Minecraft& minecraft);

    MCFOLD ::EventResult $onClientCreatedLevel(::ClientInstance& instance, ::Level& level);

    MCFOLD ::EventResult $onClientUpdateStart(::ClientInstance& instance);

    MCFOLD ::EventResult $onClientUpdateEnd(::ClientInstance& instance);

    MCFOLD ::EventResult $onClientSuspend(::ClientInstance& instance);

    MCFOLD ::EventResult $onClientEnteredWorld(::ClientInstance& instance);

    MCFOLD ::EventResult $onStartLeaveGame(::ClientInstance& instance);

    MCFOLD ::EventResult $onEvent(::ClientInstanceNotificationEvent const& playerViewPerspectiveChangedEvent);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class ClientInstanceEventListener {};
#endif // @header-generator platform
#endif // @header-generator platform
