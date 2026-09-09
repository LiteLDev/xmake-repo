#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/TypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/Listener.h"
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
namespace ScriptModuleMinecraft { class IScriptWorldAfterEvents; }
namespace ScriptModuleMinecraft { class ScriptV010Events; }
namespace ScriptModuleMinecraft { class ScriptWorldAfterEvents; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptActorGlobalEventListener : public ::EventListenerDispatcher<ActorEventListener> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<ScriptModuleMinecraft::ScriptGlobalEventListenerUtils::Listener>> mListeners;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptActorGlobalEventListener();

    virtual ::EventResult onActorSneakChanged(::Actor&, bool);

    virtual ::EventResult onActorCreated(::Actor&, ::ActorInitializationMethod);

    virtual ::EventResult onEvent(::ActorAcquiredItemEvent const&);

    virtual ::EventResult onEvent(::ActorAttackEvent const&);

    virtual ::EventResult onEvent(::ActorDefinitionEndedEvent const&);

    virtual ::EventResult onEvent(::ActorDiedEvent const&);

    virtual ::EventResult onEvent(::ActorDroppedItemEvent const&);

    virtual ::EventResult onEvent(::ActorHealEvent const&);

    virtual ::EventResult onEvent(::ActorHurtEvent const&);

    virtual ::EventResult onEvent(::ActorHealthChangedEvent const&);

    virtual ::EventResult onEvent(::ActorRemovedEvent const&);

    virtual ::EventResult onEvent(::ActorUpgradeEndedEvent const&);

    virtual ::EventResult onEvent(::MountTamingEvent const&);

    virtual ::EventResult onEvent(::TamingEvent const&);

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
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::EventResult $onActorSneakChanged(::Actor&, bool);

    MCNAPI ::EventResult $onActorCreated(::Actor&, ::ActorInitializationMethod);

    MCNAPI ::EventResult $onEvent(::ActorAcquiredItemEvent const&);

    MCNAPI ::EventResult $onEvent(::ActorAttackEvent const&);

    MCNAPI ::EventResult $onEvent(::ActorDefinitionEndedEvent const&);

    MCNAPI ::EventResult $onEvent(::ActorDiedEvent const&);

    MCNAPI ::EventResult $onEvent(::ActorDroppedItemEvent const&);

    MCNAPI ::EventResult $onEvent(::ActorHealEvent const&);

    MCNAPI ::EventResult $onEvent(::ActorHurtEvent const&);

    MCNAPI ::EventResult $onEvent(::ActorHealthChangedEvent const&);

    MCNAPI ::EventResult $onEvent(::ActorRemovedEvent const&);

    MCNAPI ::EventResult $onEvent(::ActorUpgradeEndedEvent const&);

    MCNAPI ::EventResult $onEvent(::MountTamingEvent const&);

    MCNAPI ::EventResult $onEvent(::TamingEvent const&);

    MCNAPI ::EventResult $onEvent(::ProjectileHitEvent const&);

    MCNAPI ::EventResult $onEvent(::ActorAddEffectEvent const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
