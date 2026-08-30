#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/parties/ScriptPartyListener.h"
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/ServerNetworkEventListener.h"

namespace ScriptModuleParties {

class ScriptPartiesGlobalEventListener : public ::EventListenerDispatcher<ServerNetworkEventListener> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<ScriptModuleParties::ScriptPartyListener>> mListeners;
    // NOLINTEND
};

} // namespace ScriptModuleParties
