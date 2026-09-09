#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/TypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/deps/script_core/reflection/scripting/Privilege.h"
#include "mc/deps/script_core/scripting/Version.h"
#include "mc/scripting/modules/minecraft/ScriptWeatherType.h"
#include "mc/scripting/modules/minecraft/events/IScriptWorldBeforeEvents.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Level;
class Player;
struct ActorAddEffectEvent;
struct ActorBeforeAcquireItemEvent;
struct ActorBeforeHealEvent;
struct ActorBeforeHurtEvent;
struct BlockTryDestroyByPlayerEvent;
struct BlockTryPlaceByPlayerEvent;
struct ChatEvent;
struct ExplosionStartedEvent;
struct ItemUseEvent;
struct ItemUseOnEvent;
struct PlayerInteractWithBlockBeforeEvent;
struct PlayerInteractWithEntityBeforeEvent;
struct ScriptingWorldInitializeEvent;
namespace ScriptModuleMinecraft { struct EmptyFilter; }
namespace ScriptModuleMinecraft { struct ScriptActorAddEffectBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorHealBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorHurtBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorItemPickupBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorRemoveBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorTamedBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptChatSendBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptExplosionStartedBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemUseBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemUseOnBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerBreakBlockBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerGameModeChangeBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerInteractWithBlockBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerInteractWithEntityBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerLeaveBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerPlaceBlockBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptWeatherChangedBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptWorldInitializeBeforeEvent; }
namespace ScriptModuleMinecraft { struct SignalNameSubscriberCount; }
namespace ScriptModuleMinecraft { template<typename T0, typename T1, typename T2> class ScriptFilteredEventSignal; }
namespace ScriptModuleMinecraft::EventFilters { struct ScriptActorHealEventFilter; }
namespace ScriptModuleMinecraft::EventFilters { struct ScriptActorHurtBeforeEventFilter; }
namespace ScriptModuleMinecraft::EventFilters { struct ScriptActorItemPickupEventFilter; }
namespace ScriptModuleMinecraft::EventFilters { struct ScriptActorTamedEventFilter; }
namespace ScriptModuleMinecraft::EventFilters { struct ScriptBlockEventFilter; }
namespace Scripting { class ModuleBindingBuilder; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptWorldBeforeEvents
: public ::ScriptModuleMinecraft::IScriptWorldBeforeEvents,
  public ::Scripting::WeakHandleFromThis<ScriptModuleMinecraft::IScriptWorldBeforeEvents> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::TypedStorage<8, 32, ::Scripting::Version>           mServerModuleVersion;
    ::ll::TypedStorage<8, 8, ::Level*>                        mLevel;
    ::ll::UntypedStorage<8, 16>                               mHandle;
    ::ll::UntypedStorage<8, 32>                               mBeforeChatSignal;
    ::ll::UntypedStorage<8, 32>                               mBeforeExplosionSignal;
    ::ll::UntypedStorage<8, 32>                               mBeforeItemUseEventSignal;
    ::ll::UntypedStorage<8, 32>                               mBeforeItemUseOnEventSignal;
    ::ll::UntypedStorage<8, 32>                               mBeforePlayerBreakBlockEventSignal;
    ::ll::UntypedStorage<8, 32>                               mBeforePlayerPlaceBlockEventSignal;
    ::ll::UntypedStorage<8, 32>                               mBeforeActorHealEventSignal;
    ::ll::UntypedStorage<8, 32>                               mBeforeActorHurtEventSignal;
    ::ll::UntypedStorage<8, 32>                               mBeforeActorRemoveEventSignal;
    ::ll::UntypedStorage<8, 32>                               mBeforeActorItemPickupEventSignal;
    ::ll::UntypedStorage<8, 32>                               mBeforePlayerInteractWithBlockEventSignal;
    ::ll::UntypedStorage<8, 32>                               mBeforePlayerInteractWithEntityEventSignal;
    ::ll::UntypedStorage<8, 32>                               mBeforePlayerLeaveEventSignal;
    ::ll::UntypedStorage<8, 32>                               mBeforePlayerGameModeChangeEventSignal;
    ::ll::UntypedStorage<8, 32>                               mBeforeEffectAddEventSignal;
    ::ll::UntypedStorage<8, 32>                               mBeforeWeatherChangedEventSignal;
    ::ll::UntypedStorage<8, 32>                               mBeforeWorldInitializeEventSignal;
    ::ll::UntypedStorage<8, 32>                               mBeforeActorTamedEventSignal;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWorldBeforeEvents& operator=(ScriptWorldBeforeEvents const&);
    ScriptWorldBeforeEvents(ScriptWorldBeforeEvents const&);
    ScriptWorldBeforeEvents();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ScriptWorldBeforeEvents();

    virtual std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptChatSendBeforeEvent>> onBeforeChat(::ChatEvent const&, ::Player const&);

    virtual void onBeforeWorldInitialize(::ScriptingWorldInitializeEvent const&);

    virtual std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptWeatherChangedBeforeEvent>> onBeforeWeatherChangedEvent(::ScriptModuleMinecraft::ScriptWeatherType, ::ScriptModuleMinecraft::ScriptWeatherType, int);

    virtual std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptPlayerInteractWithEntityBeforeEvent>> onBeforePlayerInteractWithEntity(::Player&, ::Actor&, ::PlayerInteractWithEntityBeforeEvent const&);

    virtual std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptPlayerInteractWithBlockBeforeEvent>> onBeforePlayerInteractWithBlock(::Player&, ::PlayerInteractWithBlockBeforeEvent const&);

    virtual std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptPlayerGameModeChangeBeforeEvent>> onBeforePlayerGameModeChange(::Player const&, ::GameType, ::GameType);

    virtual void onBeforePlayerLeave(::Player const&);

    virtual std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActorHealBeforeEvent>> onBeforeActorHeal(::Actor const&, ::ActorBeforeHealEvent const&);

    virtual std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActorHurtBeforeEvent>> onBeforeActorHurt(::Actor const&, ::ActorBeforeHurtEvent const&);

    virtual void onBeforeActorRemove(::Actor const&);

    virtual std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActorAddEffectBeforeEvent>> onBeforeEffectAddedEventSend(::ActorAddEffectEvent&, ::Actor const&);

    virtual std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActorItemPickupBeforeEvent>> onBeforeActorItemPickup(::ActorBeforeAcquireItemEvent&);

    virtual std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActorTamedBeforeEvent>> onBeforeActorTamed(::Actor const&, ::Actor const&);

    virtual std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptExplosionStartedBeforeEvent>> onBeforeExplosion(::ExplosionStartedEvent const&);

    virtual std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptPlayerBreakBlockBeforeEvent>> onBeforePlayerBreakBlock(::Player const&, ::BlockTryDestroyByPlayerEvent const&);

    virtual std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptPlayerPlaceBlockBeforeEvent>> onBeforePlayerPlaceBlock(::Player const&, ::BlockTryPlaceByPlayerEvent const&);

    virtual std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptItemUseBeforeEvent>> onBeforeItemUse(::Player const&, ::ItemUseEvent const&);

    virtual std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptItemUseOnBeforeEvent>> onBeforeItemUseOn(::Player const&, ::ItemUseOnEvent const&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptWorldBeforeEvents(::ScriptModuleMinecraft::ScriptWorldBeforeEvents&&);

    MCNAPI ScriptWorldBeforeEvents(::Scripting::WeakLifetimeScope, ::Level*, ::Scripting::Version);

    MCNAPI std::vector<ScriptModuleMinecraft::SignalNameSubscriberCount> getFineGrainedSignalSubscriberStats() const;

    MCNAPI ::ScriptModuleMinecraft::ScriptWorldBeforeEvents&
    operator=(::ScriptModuleMinecraft::ScriptWorldBeforeEvents&&);

    MCNAPI void registerListeners();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bind(::Scripting::ModuleBindingBuilder&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptWorldBeforeEvents&&);

    MCNAPI void* $ctor(::Scripting::WeakLifetimeScope, ::Level*, ::Scripting::Version);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptChatSendBeforeEvent>>
           $onBeforeChat(::ChatEvent const&, ::Player const&);

    MCNAPI void $onBeforeWorldInitialize(::ScriptingWorldInitializeEvent const&);

    MCNAPI std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptWeatherChangedBeforeEvent>>
           $onBeforeWeatherChangedEvent(
               ::ScriptModuleMinecraft::ScriptWeatherType,
               ::ScriptModuleMinecraft::ScriptWeatherType,
               int
           );

    MCNAPI std::optional<
        Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptPlayerInteractWithEntityBeforeEvent>>
    $onBeforePlayerInteractWithEntity(::Player&, ::Actor&, ::PlayerInteractWithEntityBeforeEvent const&);

    MCNAPI std::optional<
        Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptPlayerInteractWithBlockBeforeEvent>>
    $onBeforePlayerInteractWithBlock(::Player&, ::PlayerInteractWithBlockBeforeEvent const&);

    MCNAPI
        std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptPlayerGameModeChangeBeforeEvent>>
        $onBeforePlayerGameModeChange(::Player const&, ::GameType, ::GameType);

    MCNAPI void $onBeforePlayerLeave(::Player const&);

    MCNAPI std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActorHealBeforeEvent>>
           $onBeforeActorHeal(::Actor const&, ::ActorBeforeHealEvent const&);

    MCNAPI std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActorHurtBeforeEvent>>
           $onBeforeActorHurt(::Actor const&, ::ActorBeforeHurtEvent const&);

    MCNAPI void $onBeforeActorRemove(::Actor const&);

    MCNAPI std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActorAddEffectBeforeEvent>>
           $onBeforeEffectAddedEventSend(::ActorAddEffectEvent&, ::Actor const&);

    MCNAPI std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActorItemPickupBeforeEvent>>
           $onBeforeActorItemPickup(::ActorBeforeAcquireItemEvent&);

    MCNAPI std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActorTamedBeforeEvent>>
           $onBeforeActorTamed(::Actor const&, ::Actor const&);

    MCNAPI std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptExplosionStartedBeforeEvent>>
           $onBeforeExplosion(::ExplosionStartedEvent const&);

    MCNAPI std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptPlayerBreakBlockBeforeEvent>>
           $onBeforePlayerBreakBlock(::Player const&, ::BlockTryDestroyByPlayerEvent const&);

    MCNAPI std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptPlayerPlaceBlockBeforeEvent>>
           $onBeforePlayerPlaceBlock(::Player const&, ::BlockTryPlaceByPlayerEvent const&);

    MCNAPI std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptItemUseBeforeEvent>>
           $onBeforeItemUse(::Player const&, ::ItemUseEvent const&);

    MCNAPI std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptItemUseOnBeforeEvent>>
           $onBeforeItemUseOn(::Player const&, ::ItemUseOnEvent const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
