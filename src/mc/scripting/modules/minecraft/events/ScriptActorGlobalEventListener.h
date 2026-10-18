#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/scripting/modules/minecraft/Listener.h"
#endif // @header-generator platform

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/TypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/Listener.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/events/ActorEventListener.h"
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
class Actor;
struct ActorAcquiredItemEvent;
struct ActorAddEffectEvent;
struct ActorAttackEvent;
struct ActorDefinitionEndedEvent;
struct ActorDiedEvent;
struct ActorDroppedItemEvent;
struct ActorHealEvent;
struct ActorHealthChangedEvent;
struct ActorHurtEvent;
struct ActorRemovedEvent;
struct ActorUpgradeEndedEvent;
struct MountTamingEvent;
struct ProjectileHitEvent;
struct TamingEvent;
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { class IScriptWorldAfterEvents; }
namespace ScriptModuleMinecraft { class ScriptV010Events; }
namespace ScriptModuleMinecraft { class ScriptWorldAfterEvents; }
namespace Scripting { class WeakLifetimeScope; }
#else // @header-generator platform
namespace ScriptModuleMinecraft::ScriptGlobalEventListenerUtils { struct Listener; }
#endif // @header-generator platform
// clang-format on

namespace ScriptModuleMinecraft {

#if defined(LL_PLAT_A) // @header-generator platform
class ScriptActorGlobalEventListener : public ::EventListenerDispatcher<ActorEventListener> {
#else // @header-generator platform
class ScriptActorGlobalEventListener : public ::EventListenerDispatcher<::ActorEventListener> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<ScriptModuleMinecraft::ScriptGlobalEventListenerUtils::Listener>> mListeners;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::ScriptModuleMinecraft::ScriptGlobalEventListenerUtils::Listener>>
        mListeners;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ScriptActorGlobalEventListener();
#else // @header-generator platform
    virtual ::EventResult onEvent(::ActorAddEffectEvent const& eventData) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onActorSneakChanged(::Actor&, bool);
#else // @header-generator platform
    virtual ::EventResult onEvent(::ActorDefinitionEndedEvent const& eventData) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onActorCreated(::Actor&, ::ActorInitializationMethod);
#else // @header-generator platform
    virtual ::EventResult onEvent(::ActorUpgradeEndedEvent const& eventData) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onEvent(::ActorAcquiredItemEvent const&);
#else // @header-generator platform
    virtual ::EventResult onEvent(::ActorHealEvent const& eventData) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onEvent(::ActorAttackEvent const&);
#else // @header-generator platform
    virtual ::EventResult onEvent(::ActorHurtEvent const& eventData) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onEvent(::ActorDefinitionEndedEvent const&);
#else // @header-generator platform
    virtual ::EventResult onEvent(::ActorDiedEvent const& eventData) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onEvent(::ActorDiedEvent const&);
#else // @header-generator platform
    virtual ::EventResult onEvent(::ActorAttackEvent const& eventData) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onEvent(::ActorDroppedItemEvent const&);
#else // @header-generator platform
    virtual ::EventResult onEvent(::ActorHealthChangedEvent const& eventData) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onEvent(::ActorHealEvent const&);
#else // @header-generator platform
    virtual ::EventResult onEvent(::ActorDroppedItemEvent const& eventData) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onEvent(::ActorHurtEvent const&);
#else // @header-generator platform
    virtual ::EventResult onEvent(::ActorAcquiredItemEvent const& eventData) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onEvent(::ActorHealthChangedEvent const&);
#else // @header-generator platform
    virtual ::EventResult onEvent(::ProjectileHitEvent const& projectileHitEvent) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onEvent(::ActorRemovedEvent const&);
#else // @header-generator platform
    virtual ::EventResult onEvent(::ActorRemovedEvent const& actorRemovedEvent) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onEvent(::ActorUpgradeEndedEvent const&);
#else // @header-generator platform
    virtual ::EventResult onEvent(::MountTamingEvent const& eventData) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onEvent(::MountTamingEvent const&);
#else // @header-generator platform
    virtual ::EventResult onEvent(::TamingEvent const& eventData) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onEvent(::TamingEvent const&);
#else // @header-generator platform
    virtual ::EventResult onActorSneakChanged(::Actor& actor, bool isSneaking) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onEvent(::ProjectileHitEvent const&);

    virtual ::EventResult onEvent(::ActorAddEffectEvent const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void registerListener(
        ::Scripting::WeakLifetimeScope const&,
        ::Scripting::TypedObjectHandle<ScriptModuleMinecraft::ScriptWorldAfterEvents>
    );

    MCNAPI void registerListener(
        ::Scripting::WeakLifetimeScope const&,
        ::Scripting::TypedObjectHandle<ScriptModuleMinecraft::ScriptV010Events>
    );

    MCNAPI void unregisterListener(::Scripting::TypedObjectHandle<ScriptModuleMinecraft::IScriptWorldAfterEvents>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::EventResult onActorCreated(::Actor& actor, ::ActorInitializationMethod initializationMethod) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onActorSneakChanged(::Actor&, bool);
#else // @header-generator platform
    MCAPI ::EventResult $onEvent(::ActorAddEffectEvent const& eventData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onActorCreated(::Actor&, ::ActorInitializationMethod);
#else // @header-generator platform
    MCAPI ::EventResult $onEvent(::ActorDefinitionEndedEvent const& eventData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onEvent(::ActorAcquiredItemEvent const&);
#else // @header-generator platform
    MCAPI ::EventResult $onEvent(::ActorUpgradeEndedEvent const& eventData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onEvent(::ActorAttackEvent const&);
#else // @header-generator platform
    MCAPI ::EventResult $onEvent(::ActorHealEvent const& eventData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onEvent(::ActorDefinitionEndedEvent const&);
#else // @header-generator platform
    MCAPI ::EventResult $onEvent(::ActorHurtEvent const& eventData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onEvent(::ActorDiedEvent const&);
#else // @header-generator platform
    MCAPI ::EventResult $onEvent(::ActorDiedEvent const& eventData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onEvent(::ActorDroppedItemEvent const&);
#else // @header-generator platform
    MCAPI ::EventResult $onEvent(::ActorAttackEvent const& eventData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onEvent(::ActorHealEvent const&);
#else // @header-generator platform
    MCAPI ::EventResult $onEvent(::ActorHealthChangedEvent const& eventData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onEvent(::ActorHurtEvent const&);
#else // @header-generator platform
    MCAPI ::EventResult $onEvent(::ActorDroppedItemEvent const& eventData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onEvent(::ActorHealthChangedEvent const&);
#else // @header-generator platform
    MCAPI ::EventResult $onEvent(::ActorAcquiredItemEvent const& eventData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onEvent(::ActorRemovedEvent const&);
#else // @header-generator platform
    MCAPI ::EventResult $onEvent(::ProjectileHitEvent const& projectileHitEvent);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onEvent(::ActorUpgradeEndedEvent const&);
#else // @header-generator platform
    MCAPI ::EventResult $onEvent(::ActorRemovedEvent const& actorRemovedEvent);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onEvent(::MountTamingEvent const&);
#else // @header-generator platform
    MCAPI ::EventResult $onEvent(::MountTamingEvent const& eventData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onEvent(::TamingEvent const&);
#else // @header-generator platform
    MCAPI ::EventResult $onEvent(::TamingEvent const& eventData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onEvent(::ProjectileHitEvent const&);
#else // @header-generator platform
    MCAPI ::EventResult $onActorSneakChanged(::Actor& actor, bool isSneaking);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onEvent(::ActorAddEffectEvent const&);
    // NOLINTEND
#else // @header-generator platform
    MCAPI ::EventResult $onActorCreated(::Actor& actor, ::ActorInitializationMethod initializationMethod);
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

} // namespace ScriptModuleMinecraft
