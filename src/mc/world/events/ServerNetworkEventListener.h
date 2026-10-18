#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
struct DiagnosticsEvent;
struct MessageEvent;
struct PartyChangedEvent;
struct PartyDestinationCookieResponseEvent;
struct ServerNetworkGameplayNotificationEvent;
// clang-format on

class ServerNetworkEventListener {
public:
    // ServerNetworkEventListener inner types define
    using EventType = ::ServerNetworkGameplayNotificationEvent;

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerNetworkEventListener() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onEvent(::ServerNetworkGameplayNotificationEvent const&);
#else // @header-generator platform
    virtual ::EventResult onEvent(::ServerNetworkGameplayNotificationEvent const& event);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onMessage(::MessageEvent const&);
#else // @header-generator platform
    virtual ::EventResult onMessage(::MessageEvent const& messageEvent);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onDiagnostics(::DiagnosticsEvent const&);
#else // @header-generator platform
    virtual ::EventResult onDiagnostics(::DiagnosticsEvent const& diagnosticsEvent);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onPartyChanged(::PartyChangedEvent const&);
#else // @header-generator platform
    virtual ::EventResult onPartyChanged(::PartyChangedEvent const& event);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onPartyDestinationCookieResponse(::PartyDestinationCookieResponseEvent const&);
#else // @header-generator platform
    virtual ::EventResult onPartyDestinationCookieResponse(::PartyDestinationCookieResponseEvent const& event);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onEvent(::ServerNetworkGameplayNotificationEvent const&);
#else // @header-generator platform
    MCFOLD ::EventResult $onEvent(::ServerNetworkGameplayNotificationEvent const& event);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onMessage(::MessageEvent const&);
#else // @header-generator platform
    MCFOLD ::EventResult $onMessage(::MessageEvent const& messageEvent);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onDiagnostics(::DiagnosticsEvent const&);
#else // @header-generator platform
    MCFOLD ::EventResult $onDiagnostics(::DiagnosticsEvent const& diagnosticsEvent);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onPartyChanged(::PartyChangedEvent const&);
#else // @header-generator platform
    MCFOLD ::EventResult $onPartyChanged(::PartyChangedEvent const& event);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onPartyDestinationCookieResponse(::PartyDestinationCookieResponseEvent const&);
#else // @header-generator platform
    MCFOLD ::EventResult $onPartyDestinationCookieResponse(::PartyDestinationCookieResponseEvent const& event);


#endif // @header-generator platform
    // NOLINTEND
};
