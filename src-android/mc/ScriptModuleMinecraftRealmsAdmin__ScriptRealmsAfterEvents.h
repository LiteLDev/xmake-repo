#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/scripting/modules/minecraft/events/IScriptScriptDeferredEventListener.h"

// auto generated forward declare list
// clang-format off
class LevelEventCoordinator;
class ScriptDeferredEventCoordinator;
namespace ScriptModuleMinecraft { class ScriptAfterEventList; }
namespace ScriptModuleMinecraft { class ScriptGlobalEventListeners; }
// clang-format on

namespace ScriptModuleMinecraftRealmsAdmin {

class ScriptRealmsAfterEvents
: public ::Scripting::WeakHandleFromThis<ScriptModuleMinecraftRealmsAdmin::ScriptRealmsAfterEvents> {
public:
    // ScriptRealmsAfterEvents inner types declare
    // clang-format off
    class ScriptRealmsAfterEventsDeferredEventListener;
    // clang-format on

    // ScriptRealmsAfterEvents inner types define
    class ScriptRealmsAfterEventsDeferredEventListener
    : public ::ScriptModuleMinecraft::IScriptScriptDeferredEventListener<
          ScriptModuleMinecraftRealmsAdmin::ScriptRealmsAfterEvents> {};

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::TypedStorage<8, 8, ::LevelEventCoordinator&> mLevelEventCoordinator;
    ::ll::TypedStorage<8, 8, ::ScriptDeferredEventCoordinator&> mScriptDeferredEventCoordinator;
    ::ll::TypedStorage<8, 8, ::ScriptModuleMinecraft::ScriptGlobalEventListeners*> mGlobalEventListeners;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptModuleMinecraftRealmsAdmin::ScriptRealmsAfterEvents::ScriptRealmsAfterEventsDeferredEventListener>> mScriptDeferredEventListener;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptModuleMinecraft::ScriptAfterEventList>> mEvents;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptRealmsAfterEvents& operator=(ScriptRealmsAfterEvents const&);
    ScriptRealmsAfterEvents(ScriptRealmsAfterEvents const&);
    ScriptRealmsAfterEvents();
};

} // namespace ScriptModuleMinecraftRealmsAdmin
