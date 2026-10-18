#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/gameplayhandlers/CoordinatorResult.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/events/EventCoordinator.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/events/EventRef.h"
#include "mc/world/events/MutableServerNetworkGameplayEvent.h"
#include "mc/world/events/ServerNetworkEventListener.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class ServerNetworkEventHandler;
#if defined(LL_PLAT_A) // @header-generator platform
struct DiagnosticsEvent;
struct MessageEvent;
struct PartyChangedEvent;
struct PartyDestinationCookieResponseEvent;
#else // @header-generator platform
class ServerNetworkEventListener;
#endif // @header-generator platform
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
class ServerNetworkEventCoordinator : public ::EventCoordinator<ServerNetworkEventListener> {
#else // @header-generator platform
class ServerNetworkEventCoordinator : public ::EventCoordinator<::ServerNetworkEventListener> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ServerNetworkEventHandler>> mServerNetworkEventHandler;
#endif // @header-generator platform
    // NOLINTEND
};
