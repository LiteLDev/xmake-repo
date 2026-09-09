#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/TypedObjectHandle.h"
#include "mc/gameplayhandlers/ActorGameplayHandler.h"
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/gameplayhandlers/EventHandlerDispatcher.h"
#include "mc/gameplayhandlers/GameplayHandlerResult.h"
#include "mc/gameplayhandlers/HandlerResult.h"
#include "mc/scripting/event_handlers/ScriptEventHandler.h"
#include "mc/scripting/modules/minecraft/events/IScriptWorldBeforeEvents.h"

// auto generated forward declare list
// clang-format off
struct ActorAddEffectEvent;
struct ActorBeforeAcquireItemEvent;
struct ActorBeforeHealEvent;
struct ActorBeforeHurtEvent;
struct ActorRemovedEvent;
struct BeforeMountTamingEvent;
struct BeforeTamingEvent;
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

class ScriptActorGameplayHandler : public ::EventHandlerDispatcher<ActorGameplayHandler>,
                                   public ::ScriptEventHandler<ScriptModuleMinecraft::IScriptWorldBeforeEvents> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptActorGameplayHandler();

    virtual ::HandlerResult handleEvent(::ActorRemovedEvent const&);

    virtual ::GameplayHandlerResult<CoordinatorResult> handleEvent(::ActorAddEffectEvent&);

    virtual ::GameplayHandlerResult<CoordinatorResult> handleEvent(::ActorBeforeAcquireItemEvent&);

    virtual ::GameplayHandlerResult<CoordinatorResult> handleEvent(::ActorBeforeHealEvent&);

    virtual ::GameplayHandlerResult<CoordinatorResult> handleEvent(::ActorBeforeHurtEvent&);

    virtual ::GameplayHandlerResult<CoordinatorResult> handleEvent(::BeforeTamingEvent&);

    virtual ::GameplayHandlerResult<CoordinatorResult> handleEvent(::BeforeMountTamingEvent&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _handleActorAcquireItemEvent(
        ::ActorBeforeAcquireItemEvent&,
        ::Scripting::WeakLifetimeScope const&,
        ::Scripting::TypedObjectHandle<ScriptModuleMinecraft::IScriptWorldBeforeEvents>
    ) const;

    MCNAPI bool _handleActorEffectAddedEvent(
        ::ActorAddEffectEvent&,
        ::Scripting::WeakLifetimeScope const&,
        ::Scripting::TypedObjectHandle<ScriptModuleMinecraft::IScriptWorldBeforeEvents>
    ) const;

    MCNAPI bool _handleActorHealEvent(
        ::ActorBeforeHealEvent&,
        ::Scripting::WeakLifetimeScope const&,
        ::Scripting::TypedObjectHandle<ScriptModuleMinecraft::IScriptWorldBeforeEvents>
    );

    MCNAPI bool _handleActorHurtEvent(
        ::ActorBeforeHurtEvent&,
        ::Scripting::WeakLifetimeScope const&,
        ::Scripting::TypedObjectHandle<ScriptModuleMinecraft::IScriptWorldBeforeEvents>
    );

    MCNAPI bool _handleBeforeMountTamingEvent(
        ::BeforeMountTamingEvent&,
        ::Scripting::WeakLifetimeScope const&,
        ::Scripting::TypedObjectHandle<ScriptModuleMinecraft::IScriptWorldBeforeEvents>
    ) const;

    MCNAPI bool _handleBeforeTamingEvent(
        ::BeforeTamingEvent&,
        ::Scripting::WeakLifetimeScope const&,
        ::Scripting::TypedObjectHandle<ScriptModuleMinecraft::IScriptWorldBeforeEvents>
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
    MCNAPI ::HandlerResult $handleEvent(::ActorRemovedEvent const&);

    MCNAPI ::GameplayHandlerResult<CoordinatorResult> $handleEvent(::ActorAddEffectEvent&);

    MCNAPI ::GameplayHandlerResult<CoordinatorResult> $handleEvent(::ActorBeforeAcquireItemEvent&);

    MCNAPI ::GameplayHandlerResult<CoordinatorResult> $handleEvent(::ActorBeforeHealEvent&);

    MCNAPI ::GameplayHandlerResult<CoordinatorResult> $handleEvent(::ActorBeforeHurtEvent&);

    MCNAPI ::GameplayHandlerResult<CoordinatorResult> $handleEvent(::BeforeTamingEvent&);

    MCNAPI ::GameplayHandlerResult<CoordinatorResult> $handleEvent(::BeforeMountTamingEvent&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
