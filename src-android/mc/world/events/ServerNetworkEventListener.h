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

    virtual ::EventResult onEvent(::ServerNetworkGameplayNotificationEvent const&);

    virtual ::EventResult onMessage(::MessageEvent const&);

    virtual ::EventResult onDiagnostics(::DiagnosticsEvent const&);

    virtual ::EventResult onPartyChanged(::PartyChangedEvent const&);

    virtual ::EventResult onPartyDestinationCookieResponse(::PartyDestinationCookieResponseEvent const&);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::EventResult $onEvent(::ServerNetworkGameplayNotificationEvent const&);

    MCNAPI ::EventResult $onMessage(::MessageEvent const&);

    MCNAPI ::EventResult $onDiagnostics(::DiagnosticsEvent const&);

    MCNAPI ::EventResult $onPartyChanged(::PartyChangedEvent const&);

    MCNAPI ::EventResult $onPartyDestinationCookieResponse(::PartyDestinationCookieResponseEvent const&);
    // NOLINTEND
};
