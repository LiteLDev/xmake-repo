#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/scripting/modules/minecraft/events/IScriptScriptDeferredEventListener.h"

// auto generated forward declare list
// clang-format off
class ScriptDeferredEventCoordinator;
class ServerNetworkEventCoordinator;
namespace ScriptModuleMinecraft { class ScriptAfterEventList; }
namespace ScriptModuleMinecraft { class ScriptGlobalEventListeners; }
// clang-format on

namespace ScriptModuleParties {

class ScriptPartiesAfterEvents : public ::Scripting::WeakHandleFromThis<ScriptModuleParties::ScriptPartiesAfterEvents> {
public:
    // ScriptPartiesAfterEvents inner types declare
    // clang-format off
    class ScriptPartiesAfterEventsDeferredEventListener;
    // clang-format on

    // ScriptPartiesAfterEvents inner types define
    class ScriptPartiesAfterEventsDeferredEventListener
    : public ::ScriptModuleMinecraft::IScriptScriptDeferredEventListener<
          ScriptModuleParties::ScriptPartiesAfterEvents> {};

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::TypedStorage<8, 8, ::ServerNetworkEventCoordinator&> mServerNetworkEventCoordinator;
    ::ll::TypedStorage<8, 8, ::ScriptDeferredEventCoordinator&> mScriptDeferredEventCoordinator;
    ::ll::TypedStorage<8, 8, ::ScriptModuleMinecraft::ScriptGlobalEventListeners*> mGlobalEventListeners;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptModuleParties::ScriptPartiesAfterEvents::ScriptPartiesAfterEventsDeferredEventListener>> mScriptDeferredEventListener;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptModuleMinecraft::ScriptAfterEventList>> mEvents;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPartiesAfterEvents& operator=(ScriptPartiesAfterEvents const&);
    ScriptPartiesAfterEvents(ScriptPartiesAfterEvents const&);
    ScriptPartiesAfterEvents();
};

} // namespace ScriptModuleParties
