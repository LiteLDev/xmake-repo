#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/TypedObjectHandle.h"
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/gameplayhandlers/EventHandlerDispatcher.h"
#include "mc/gameplayhandlers/GameplayHandlerResult.h"
#include "mc/gameplayhandlers/ScriptingEventHandler.h"
#include "mc/scripting/event_handlers/ScriptEventHandler.h"
#include "mc/scripting/modules/minecraft/events/ScriptSystemBeforeEvents.h"

// auto generated forward declare list
// clang-format off
struct BeforeWatchdogTerminateEvent;
struct ScriptModuleShutdownEvent;
struct ScriptModuleStartupEvent;
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

class ScriptScriptingEventHandler : public ::EventHandlerDispatcher<ScriptingEventHandler>,
                                    public ::ScriptEventHandler<ScriptModuleMinecraft::ScriptSystemBeforeEvents> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptScriptingEventHandler();

    virtual ::GameplayHandlerResult<CoordinatorResult> handleEvent(::BeforeWatchdogTerminateEvent&);

    virtual ::GameplayHandlerResult<CoordinatorResult> handleEvent(::ScriptModuleStartupEvent const&);

    virtual ::GameplayHandlerResult<CoordinatorResult> handleEvent(::ScriptModuleShutdownEvent const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _handlScriptModuleShutdownEvent(
        ::ScriptModuleShutdownEvent const&,
        ::Scripting::WeakLifetimeScope const&,
        ::Scripting::TypedObjectHandle<ScriptModuleMinecraft::ScriptSystemBeforeEvents>
    ) const;

    MCNAPI bool _handleScriptModuleStartupEvent(
        ::ScriptModuleStartupEvent const&,
        ::Scripting::WeakLifetimeScope const&,
        ::Scripting::TypedObjectHandle<ScriptModuleMinecraft::ScriptSystemBeforeEvents>
    ) const;

    MCNAPI bool _handleWatchdogTerminateEvent(
        ::BeforeWatchdogTerminateEvent&,
        ::Scripting::WeakLifetimeScope const&,
        ::Scripting::TypedObjectHandle<ScriptModuleMinecraft::ScriptSystemBeforeEvents>
    ) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::GameplayHandlerResult<CoordinatorResult> $handleEvent(::BeforeWatchdogTerminateEvent&);

    MCNAPI ::GameplayHandlerResult<CoordinatorResult> $handleEvent(::ScriptModuleStartupEvent const&);

    MCNAPI ::GameplayHandlerResult<CoordinatorResult> $handleEvent(::ScriptModuleShutdownEvent const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
