#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/scripting/modules/parties/ScriptPartyListener.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/events/EventListenerDispatcher.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/events/EventResult.h"
#endif // @header-generator platform
#include "mc/world/events/ServerNetworkEventListener.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
struct PartyChangedEvent;
struct PartyDestinationCookieResponseEvent;
// clang-format on
#endif // @header-generator platform

namespace ScriptModuleParties {

#if defined(LL_PLAT_A) // @header-generator platform
class ScriptPartiesGlobalEventListener : public ::EventListenerDispatcher<ServerNetworkEventListener> {
#else // @header-generator platform
class ScriptPartiesGlobalEventListener : public ::EventListenerDispatcher<::ServerNetworkEventListener> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<ScriptModuleParties::ScriptPartyListener>> mListeners;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnk7cc856;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPartiesGlobalEventListener& operator=(ScriptPartiesGlobalEventListener const&);
    ScriptPartiesGlobalEventListener(ScriptPartiesGlobalEventListener const&);
    ScriptPartiesGlobalEventListener();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::EventResult onPartyChanged(::PartyChangedEvent const& event) /*override*/;

    virtual ::EventResult
    onPartyDestinationCookieResponse(::PartyDestinationCookieResponseEvent const& event) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::EventResult $onPartyChanged(::PartyChangedEvent const& event);

    MCNAPI ::EventResult $onPartyDestinationCookieResponse(::PartyDestinationCookieResponseEvent const& event);


#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleParties
