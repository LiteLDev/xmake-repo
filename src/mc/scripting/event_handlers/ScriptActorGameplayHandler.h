#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/TypedObjectHandle.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/gameplayhandlers/ActorGameplayHandler.h"
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/gameplayhandlers/EventHandlerDispatcher.h"
#include "mc/gameplayhandlers/GameplayHandlerResult.h"
#include "mc/gameplayhandlers/HandlerResult.h"
#include "mc/scripting/event_handlers/ScriptEventHandler.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/scripting/modules/minecraft/events/IScriptWorldBeforeEvents.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
struct ActorAddEffectEvent;
struct ActorBeforeAcquireItemEvent;
struct ActorBeforeHealEvent;
struct ActorBeforeHurtEvent;
struct ActorRemovedEvent;
struct BeforeMountTamingEvent;
struct BeforeTamingEvent;
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { class WeakLifetimeScope; }
#else // @header-generator platform
namespace ScriptModuleMinecraft { class IScriptWorldBeforeEvents; }
#endif // @header-generator platform
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
class ScriptActorGameplayHandler : public ::EventHandlerDispatcher<ActorGameplayHandler>,
                                   public ::ScriptEventHandler<ScriptModuleMinecraft::IScriptWorldBeforeEvents> {
#else // @header-generator platform
class ScriptActorGameplayHandler : public ::EventHandlerDispatcher<::ActorGameplayHandler>,
                                   public ::ScriptEventHandler<::ScriptModuleMinecraft::IScriptWorldBeforeEvents> {
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ScriptActorGameplayHandler();
#else // @header-generator platform
    virtual ::GameplayHandlerResult<::CoordinatorResult>
    handleEvent(::ActorAddEffectEvent& actorEffectAddedEvent) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::HandlerResult handleEvent(::ActorRemovedEvent const&);
#else // @header-generator platform
    virtual ::GameplayHandlerResult<::CoordinatorResult>
    handleEvent(::ActorBeforeHealEvent& actorHealEvent) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::GameplayHandlerResult<CoordinatorResult> handleEvent(::ActorAddEffectEvent&);
#else // @header-generator platform
    virtual ::GameplayHandlerResult<::CoordinatorResult>
    handleEvent(::ActorBeforeHurtEvent& actorHurtEvent) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::GameplayHandlerResult<CoordinatorResult> handleEvent(::ActorBeforeAcquireItemEvent&);
#else // @header-generator platform
    virtual ::GameplayHandlerResult<::CoordinatorResult>
    handleEvent(::ActorBeforeAcquireItemEvent& actorAquireItemEvent) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::GameplayHandlerResult<CoordinatorResult> handleEvent(::ActorBeforeHealEvent&);
#else // @header-generator platform
    virtual ::GameplayHandlerResult<::CoordinatorResult>
    handleEvent(::BeforeTamingEvent& beforeTamingEvent) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::GameplayHandlerResult<CoordinatorResult> handleEvent(::ActorBeforeHurtEvent&);
#else // @header-generator platform
    virtual ::GameplayHandlerResult<::CoordinatorResult>
    handleEvent(::BeforeMountTamingEvent& beforeMountTamingEvent) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    virtual ::HandlerResult handleEvent(::ActorRemovedEvent const& actorRemovedEvent) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::HandlerResult $handleEvent(::ActorRemovedEvent const&);
#else // @header-generator platform
    MCAPI ::GameplayHandlerResult<::CoordinatorResult> $handleEvent(::ActorAddEffectEvent& actorEffectAddedEvent);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::GameplayHandlerResult<CoordinatorResult> $handleEvent(::ActorAddEffectEvent&);
#else // @header-generator platform
    MCAPI ::GameplayHandlerResult<::CoordinatorResult> $handleEvent(::ActorBeforeHealEvent& actorHealEvent);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::GameplayHandlerResult<CoordinatorResult> $handleEvent(::ActorBeforeAcquireItemEvent&);
#else // @header-generator platform
    MCAPI ::GameplayHandlerResult<::CoordinatorResult> $handleEvent(::ActorBeforeHurtEvent& actorHurtEvent);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::GameplayHandlerResult<CoordinatorResult> $handleEvent(::ActorBeforeHealEvent&);
#else // @header-generator platform
    MCAPI ::GameplayHandlerResult<::CoordinatorResult>
    $handleEvent(::ActorBeforeAcquireItemEvent& actorAquireItemEvent);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::GameplayHandlerResult<CoordinatorResult> $handleEvent(::ActorBeforeHurtEvent&);
#else // @header-generator platform
    MCAPI ::GameplayHandlerResult<::CoordinatorResult> $handleEvent(::BeforeTamingEvent& beforeTamingEvent);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::GameplayHandlerResult<CoordinatorResult> $handleEvent(::BeforeTamingEvent&);
#else // @header-generator platform
    MCAPI ::GameplayHandlerResult<::CoordinatorResult> $handleEvent(::BeforeMountTamingEvent& beforeMountTamingEvent);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::GameplayHandlerResult<CoordinatorResult> $handleEvent(::BeforeMountTamingEvent&);
    // NOLINTEND
#else // @header-generator platform
    MCAPI ::HandlerResult $handleEvent(::ActorRemovedEvent const& actorRemovedEvent);
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
