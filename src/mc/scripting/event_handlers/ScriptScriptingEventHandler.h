#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/TypedObjectHandle.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/gameplayhandlers/EventHandlerDispatcher.h"
#include "mc/gameplayhandlers/GameplayHandlerResult.h"
#include "mc/gameplayhandlers/ScriptingEventHandler.h"
#include "mc/scripting/event_handlers/ScriptEventHandler.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/scripting/modules/minecraft/events/ScriptSystemBeforeEvents.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
struct BeforeWatchdogTerminateEvent;
struct ScriptModuleShutdownEvent;
struct ScriptModuleStartupEvent;
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { class WeakLifetimeScope; }
#else // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptSystemBeforeEvents; }
#endif // @header-generator platform
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
class ScriptScriptingEventHandler : public ::EventHandlerDispatcher<ScriptingEventHandler>,
                                    public ::ScriptEventHandler<ScriptModuleMinecraft::ScriptSystemBeforeEvents> {
#else // @header-generator platform
class ScriptScriptingEventHandler : public ::EventHandlerDispatcher<::ScriptingEventHandler>,
                                    public ::ScriptEventHandler<::ScriptModuleMinecraft::ScriptSystemBeforeEvents> {
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ScriptScriptingEventHandler();
#else // @header-generator platform
    virtual ::GameplayHandlerResult<::CoordinatorResult>
    handleEvent(::BeforeWatchdogTerminateEvent& beforeWatchdogTerminateEvent) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::GameplayHandlerResult<CoordinatorResult> handleEvent(::BeforeWatchdogTerminateEvent&);
#else // @header-generator platform
    virtual ::GameplayHandlerResult<::CoordinatorResult>
    handleEvent(::ScriptModuleStartupEvent const& moduleStartupEvent) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    virtual ::GameplayHandlerResult<::CoordinatorResult>
    handleEvent(::ScriptModuleShutdownEvent const& moduleShutdownEvent) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::GameplayHandlerResult<CoordinatorResult> $handleEvent(::BeforeWatchdogTerminateEvent&);
#else // @header-generator platform
    MCAPI ::GameplayHandlerResult<::CoordinatorResult>
    $handleEvent(::BeforeWatchdogTerminateEvent& beforeWatchdogTerminateEvent);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::GameplayHandlerResult<CoordinatorResult> $handleEvent(::ScriptModuleStartupEvent const&);
#else // @header-generator platform
    MCAPI ::GameplayHandlerResult<::CoordinatorResult>
    $handleEvent(::ScriptModuleStartupEvent const& moduleStartupEvent);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::GameplayHandlerResult<CoordinatorResult> $handleEvent(::ScriptModuleShutdownEvent const&);
    // NOLINTEND
#else // @header-generator platform
    MCAPI ::GameplayHandlerResult<::CoordinatorResult>
    $handleEvent(::ScriptModuleShutdownEvent const& moduleShutdownEvent);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
