#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/world/events/EventCoordinator.h"
#include "mc/world/events/EventRef.h"
#include "mc/world/events/MutableServerNetworkGameplayEvent.h"
#include "mc/world/events/ServerNetworkEventListener.h"

// auto generated forward declare list
// clang-format off
class ServerNetworkEventHandler;
struct DiagnosticsEvent;
struct MessageEvent;
struct PartyChangedEvent;
struct PartyDestinationCookieResponseEvent;
// clang-format on

class ServerNetworkEventCoordinator : public ::EventCoordinator<ServerNetworkEventListener> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<ServerNetworkEventHandler>> mServerNetworkEventHandler;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerNetworkEventCoordinator();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ServerNetworkEventHandler& getServerNetworkEventHandler();

    MCNAPI void registerServerNetworkEventHandler(std::unique_ptr<ServerNetworkEventHandler>&&);

    MCNAPI void sendDiagnostics(::DiagnosticsEvent&);

    MCNAPI ::CoordinatorResult sendEvent(::EventRef<MutableServerNetworkGameplayEvent<CoordinatorResult>>);

    MCNAPI void sendMessage(::MessageEvent&);

    MCNAPI void sendPartyChanged(::PartyChangedEvent&);

    MCNAPI void sendPartyDestinationCookieResponse(::PartyDestinationCookieResponseEvent&);
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
