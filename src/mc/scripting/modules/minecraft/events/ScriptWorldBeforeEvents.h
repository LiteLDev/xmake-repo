#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/TypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/reflection/scripting/Privilege.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/script_core/scripting/Version.h"
#include "mc/scripting/modules/minecraft/ScriptWeatherType.h"
#include "mc/scripting/modules/minecraft/events/IScriptWorldBeforeEvents.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/scripting/modules/minecraft/events/ScriptFilteredEventSignal.h"
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { template<typename T0, typename T1, typename T2> class ScriptFilteredEventSignal; }
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
  public ::Scripting::WeakHandleFromThis<ScriptModuleMinecraft::IScriptWorldBeforeEvents> {
#else // @header-generator platform
  public ::Scripting::WeakHandleFromThis<::ScriptModuleMinecraft::IScriptWorldBeforeEvents> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 32, ::Scripting::Version>           mServerModuleVersion;
#else // @header-generator platform
    ::ll::TypedStorage<8, 40, ::Scripting::Version>           mServerModuleVersion;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Level*>                        mLevel;
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::Scripting::TypedObjectHandle<::ScriptModuleMinecraft::ScriptWorldBeforeEvents>> mHandle;
    ::ll::TypedStorage<
        8,
        32,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptFilteredEventSignal<
            ::ScriptModuleMinecraft::ScriptChatSendBeforeEvent,
            1,
            ::ScriptModuleMinecraft::EmptyFilter>>>
        mBeforeChatSignal;
    ::ll::TypedStorage<
        8,
        32,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptFilteredEventSignal<
            ::ScriptModuleMinecraft::ScriptExplosionStartedBeforeEvent,
            1,
            ::ScriptModuleMinecraft::EmptyFilter>>>
        mBeforeExplosionSignal;
    ::ll::TypedStorage<
        8,
        32,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptFilteredEventSignal<
            ::ScriptModuleMinecraft::ScriptItemUseBeforeEvent,
            1,
            ::ScriptModuleMinecraft::EmptyFilter>>>
        mBeforeItemUseEventSignal;
    ::ll::TypedStorage<
        8,
        32,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptFilteredEventSignal<
            ::ScriptModuleMinecraft::ScriptItemUseOnBeforeEvent,
            1,
            ::ScriptModuleMinecraft::EmptyFilter>>>
        mBeforeItemUseOnEventSignal;
    ::ll::TypedStorage<
        8,
        32,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptFilteredEventSignal<
            ::ScriptModuleMinecraft::ScriptPlayerBreakBlockBeforeEvent,
            1,
            ::ScriptModuleMinecraft::EventFilters::ScriptBlockEventFilter>>>
        mBeforePlayerBreakBlockEventSignal;
    ::ll::TypedStorage<
        8,
        32,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptFilteredEventSignal<
            ::ScriptModuleMinecraft::ScriptPlayerPlaceBlockBeforeEvent,
            1,
            ::ScriptModuleMinecraft::EventFilters::ScriptBlockEventFilter>>>
        mBeforePlayerPlaceBlockEventSignal;
    ::ll::TypedStorage<
        8,
        32,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptFilteredEventSignal<
            ::ScriptModuleMinecraft::ScriptActorHealBeforeEvent,
            1,
            ::ScriptModuleMinecraft::EventFilters::ScriptActorHealEventFilter>>>
        mBeforeActorHealEventSignal;
    ::ll::TypedStorage<
        8,
        32,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptFilteredEventSignal<
            ::ScriptModuleMinecraft::ScriptActorHurtBeforeEvent,
            1,
            ::ScriptModuleMinecraft::EventFilters::ScriptActorHurtBeforeEventFilter>>>
        mBeforeActorHurtEventSignal;
    ::ll::TypedStorage<
        8,
        32,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptFilteredEventSignal<
            ::ScriptModuleMinecraft::ScriptActorRemoveBeforeEvent,
            1,
            ::ScriptModuleMinecraft::EmptyFilter>>>
        mBeforeActorRemoveEventSignal;
    ::ll::TypedStorage<
        8,
        32,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptFilteredEventSignal<
            ::ScriptModuleMinecraft::ScriptActorItemPickupBeforeEvent,
            1,
            ::ScriptModuleMinecraft::EventFilters::ScriptActorItemPickupEventFilter>>>
        mBeforeActorItemPickupEventSignal;
    ::ll::TypedStorage<
        8,
        32,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptFilteredEventSignal<
            ::ScriptModuleMinecraft::ScriptPlayerInteractWithBlockBeforeEvent,
            1,
            ::ScriptModuleMinecraft::EmptyFilter>>>
        mBeforePlayerInteractWithBlockEventSignal;
    ::ll::TypedStorage<
        8,
        32,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptFilteredEventSignal<
            ::ScriptModuleMinecraft::ScriptPlayerInteractWithEntityBeforeEvent,
            1,
            ::ScriptModuleMinecraft::EmptyFilter>>>
        mBeforePlayerInteractWithEntityEventSignal;
    ::ll::TypedStorage<
        8,
        32,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptFilteredEventSignal<
            ::ScriptModuleMinecraft::ScriptPlayerLeaveBeforeEvent,
            1,
            ::ScriptModuleMinecraft::EmptyFilter>>>
        mBeforePlayerLeaveEventSignal;
    ::ll::TypedStorage<
        8,
        32,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptFilteredEventSignal<
            ::ScriptModuleMinecraft::ScriptPlayerGameModeChangeBeforeEvent,
            1,
            ::ScriptModuleMinecraft::EmptyFilter>>>
        mBeforePlayerGameModeChangeEventSignal;
    ::ll::TypedStorage<
        8,
        32,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptFilteredEventSignal<
            ::ScriptModuleMinecraft::ScriptActorAddEffectBeforeEvent,
            1,
            ::ScriptModuleMinecraft::EmptyFilter>>>
        mBeforeEffectAddEventSignal;
    ::ll::TypedStorage<
        8,
        32,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptFilteredEventSignal<
            ::ScriptModuleMinecraft::ScriptWeatherChangedBeforeEvent,
            1,
            ::ScriptModuleMinecraft::EmptyFilter>>>
        mBeforeWeatherChangedEventSignal;
    ::ll::TypedStorage<
        8,
        32,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptFilteredEventSignal<
            ::ScriptModuleMinecraft::ScriptWorldInitializeBeforeEvent,
            1,
            ::ScriptModuleMinecraft::EmptyFilter>>>
        mBeforeWorldInitializeEventSignal;
    ::ll::TypedStorage<
        8,
        32,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptFilteredEventSignal<
            ::ScriptModuleMinecraft::ScriptActorTamedBeforeEvent,
            1,
            ::ScriptModuleMinecraft::EventFilters::ScriptActorTamedEventFilter>>>
        mBeforeActorTamedEventSignal;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWorldBeforeEvents& operator=(ScriptWorldBeforeEvents const&);
    ScriptWorldBeforeEvents(ScriptWorldBeforeEvents const&);
    ScriptWorldBeforeEvents();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ScriptWorldBeforeEvents();
#else // @header-generator platform
    virtual ~ScriptWorldBeforeEvents() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptChatSendBeforeEvent>> onBeforeChat(::ChatEvent const&, ::Player const&);
#else // @header-generator platform
    virtual ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorHealBeforeEvent>>
    onBeforeActorHeal(::Actor const& actor, ::ActorBeforeHealEvent const& eventData) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onBeforeWorldInitialize(::ScriptingWorldInitializeEvent const&);
#else // @header-generator platform
    virtual ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorHurtBeforeEvent>>
    onBeforeActorHurt(::Actor const& actor, ::ActorBeforeHurtEvent const& eventData) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptWeatherChangedBeforeEvent>> onBeforeWeatherChangedEvent(::ScriptModuleMinecraft::ScriptWeatherType, ::ScriptModuleMinecraft::ScriptWeatherType, int);
#else // @header-generator platform
    virtual ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorTamedBeforeEvent>>
    onBeforeActorTamed(::Actor const& actor, ::Actor const& tamingActor) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptPlayerInteractWithEntityBeforeEvent>> onBeforePlayerInteractWithEntity(::Player&, ::Actor&, ::PlayerInteractWithEntityBeforeEvent const&);
#else // @header-generator platform
    virtual void onBeforeActorRemove(::Actor const& actor) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptPlayerInteractWithBlockBeforeEvent>> onBeforePlayerInteractWithBlock(::Player&, ::PlayerInteractWithBlockBeforeEvent const&);
#else // @header-generator platform
    virtual ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptChatSendBeforeEvent>>
    onBeforeChat(::ChatEvent const& chatEvent, ::Player const& player) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptPlayerGameModeChangeBeforeEvent>> onBeforePlayerGameModeChange(::Player const&, ::GameType, ::GameType);
#else // @header-generator platform
    virtual ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptExplosionStartedBeforeEvent>>
    onBeforeExplosion(::ExplosionStartedEvent const& event) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onBeforePlayerLeave(::Player const&);
#else // @header-generator platform
    virtual ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemUseBeforeEvent>>
    onBeforeItemUse(::Player const& player, ::ItemUseEvent const& itemEvent) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActorHealBeforeEvent>> onBeforeActorHeal(::Actor const&, ::ActorBeforeHealEvent const&);
#else // @header-generator platform
    virtual ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemUseOnBeforeEvent>>
    onBeforeItemUseOn(::Player const& player, ::ItemUseOnEvent const& itemEvent) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActorHurtBeforeEvent>> onBeforeActorHurt(::Actor const&, ::ActorBeforeHurtEvent const&);
#else // @header-generator platform
    virtual ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerBreakBlockBeforeEvent>>
    onBeforePlayerBreakBlock(::Player const& player, ::BlockTryDestroyByPlayerEvent const& eventData) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onBeforeActorRemove(::Actor const&);
#else // @header-generator platform
    virtual ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerPlaceBlockBeforeEvent>>
    onBeforePlayerPlaceBlock(::Player const& player, ::BlockTryPlaceByPlayerEvent const& eventData) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActorAddEffectBeforeEvent>> onBeforeEffectAddedEventSend(::ActorAddEffectEvent&, ::Actor const&);
#else // @header-generator platform
    virtual ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerInteractWithBlockBeforeEvent>>
    onBeforePlayerInteractWithBlock(
        ::Player&                                   player,
        ::PlayerInteractWithBlockBeforeEvent const& eventData
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActorItemPickupBeforeEvent>> onBeforeActorItemPickup(::ActorBeforeAcquireItemEvent&);
#else // @header-generator platform
    virtual ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerInteractWithEntityBeforeEvent>>
    onBeforePlayerInteractWithEntity(
        ::Player&                                    player,
        ::Actor&                                     target,
        ::PlayerInteractWithEntityBeforeEvent const& eventData
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActorTamedBeforeEvent>> onBeforeActorTamed(::Actor const&, ::Actor const&);
#else // @header-generator platform
    virtual ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerGameModeChangeBeforeEvent>>
    onBeforePlayerGameModeChange(::Player const& player, ::GameType fromGameMode, ::GameType toGameMode) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptExplosionStartedBeforeEvent>> onBeforeExplosion(::ExplosionStartedEvent const&);
#else // @header-generator platform
    virtual void onBeforeWorldInitialize(::ScriptingWorldInitializeEvent const& eventData) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptPlayerBreakBlockBeforeEvent>> onBeforePlayerBreakBlock(::Player const&, ::BlockTryDestroyByPlayerEvent const&);
#else // @header-generator platform
    virtual void onBeforePlayerLeave(::Player const& player) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptPlayerPlaceBlockBeforeEvent>> onBeforePlayerPlaceBlock(::Player const&, ::BlockTryPlaceByPlayerEvent const&);
#else // @header-generator platform
    virtual ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorAddEffectBeforeEvent>>
    onBeforeEffectAddedEventSend(::ActorAddEffectEvent& actorEffectAddedEvent, ::Actor const& actor) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptItemUseBeforeEvent>> onBeforeItemUse(::Player const&, ::ItemUseEvent const&);
#else // @header-generator platform
    virtual ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorItemPickupBeforeEvent>>
    onBeforeActorItemPickup(::ActorBeforeAcquireItemEvent& actorItemPickupEvent) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptItemUseOnBeforeEvent>> onBeforeItemUseOn(::Player const&, ::ItemUseOnEvent const&);
    // clang-format on
#else // @header-generator platform
    virtual ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptWeatherChangedBeforeEvent>>
    onBeforeWeatherChangedEvent(
        ::ScriptModuleMinecraft::ScriptWeatherType previousWeatherType,
        ::ScriptModuleMinecraft::ScriptWeatherType newWeatherType,
        int                                        duration
    ) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptWorldBeforeEvents(::ScriptModuleMinecraft::ScriptWorldBeforeEvents&&);
#else // @header-generator platform
    MCAPI ScriptWorldBeforeEvents(::ScriptModuleMinecraft::ScriptWorldBeforeEvents&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptWorldBeforeEvents(::Scripting::WeakLifetimeScope, ::Level*, ::Scripting::Version);
#else // @header-generator platform
    MCAPI ScriptWorldBeforeEvents(
        ::Scripting::WeakLifetimeScope scope,
        ::Level*                       level,
        ::Scripting::Version           serverModuleVersion
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<ScriptModuleMinecraft::SignalNameSubscriberCount> getFineGrainedSignalSubscriberStats() const;
#else // @header-generator platform
    MCAPI ::std::vector<::ScriptModuleMinecraft::SignalNameSubscriberCount> getFineGrainedSignalSubscriberStats() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ScriptModuleMinecraft::ScriptWorldBeforeEvents&
#else // @header-generator platform
    MCAPI ::ScriptModuleMinecraft::ScriptWorldBeforeEvents&
#endif // @header-generator platform
    operator=(::ScriptModuleMinecraft::ScriptWorldBeforeEvents&&);

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void registerListeners();
#else // @header-generator platform
    MCAPI void registerListeners();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bind(::Scripting::ModuleBindingBuilder&);
#else // @header-generator platform
    MCAPI static void bind(::Scripting::ModuleBindingBuilder& moduleBuilder);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptWorldBeforeEvents&&);
#else // @header-generator platform
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptWorldBeforeEvents&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Scripting::WeakLifetimeScope, ::Level*, ::Scripting::Version);
#else // @header-generator platform
    MCAPI void* $ctor(::Scripting::WeakLifetimeScope scope, ::Level* level, ::Scripting::Version serverModuleVersion);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptChatSendBeforeEvent>>
           $onBeforeChat(::ChatEvent const&, ::Player const&);
#else // @header-generator platform
    MCAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorHealBeforeEvent>>
    $onBeforeActorHeal(::Actor const& actor, ::ActorBeforeHealEvent const& eventData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onBeforeWorldInitialize(::ScriptingWorldInitializeEvent const&);
#else // @header-generator platform
    MCAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorHurtBeforeEvent>>
    $onBeforeActorHurt(::Actor const& actor, ::ActorBeforeHurtEvent const& eventData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptWeatherChangedBeforeEvent>>
           $onBeforeWeatherChangedEvent(
               ::ScriptModuleMinecraft::ScriptWeatherType,
               ::ScriptModuleMinecraft::ScriptWeatherType,
               int
           );
#else // @header-generator platform
    MCAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorTamedBeforeEvent>>
    $onBeforeActorTamed(::Actor const& actor, ::Actor const& tamingActor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<
        Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptPlayerInteractWithEntityBeforeEvent>>
    $onBeforePlayerInteractWithEntity(::Player&, ::Actor&, ::PlayerInteractWithEntityBeforeEvent const&);
#else // @header-generator platform
    MCAPI void $onBeforeActorRemove(::Actor const& actor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<
        Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptPlayerInteractWithBlockBeforeEvent>>
    $onBeforePlayerInteractWithBlock(::Player&, ::PlayerInteractWithBlockBeforeEvent const&);
#else // @header-generator platform
    MCAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptChatSendBeforeEvent>>
    $onBeforeChat(::ChatEvent const& chatEvent, ::Player const& player);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI
        std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptPlayerGameModeChangeBeforeEvent>>
        $onBeforePlayerGameModeChange(::Player const&, ::GameType, ::GameType);
#else // @header-generator platform
    MCAPI ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptExplosionStartedBeforeEvent>>
    $onBeforeExplosion(::ExplosionStartedEvent const& event);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onBeforePlayerLeave(::Player const&);
#else // @header-generator platform
    MCAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemUseBeforeEvent>>
    $onBeforeItemUse(::Player const& player, ::ItemUseEvent const& itemEvent);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActorHealBeforeEvent>>
           $onBeforeActorHeal(::Actor const&, ::ActorBeforeHealEvent const&);
#else // @header-generator platform
    MCAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemUseOnBeforeEvent>>
    $onBeforeItemUseOn(::Player const& player, ::ItemUseOnEvent const& itemEvent);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActorHurtBeforeEvent>>
           $onBeforeActorHurt(::Actor const&, ::ActorBeforeHurtEvent const&);
#else // @header-generator platform
    MCAPI ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerBreakBlockBeforeEvent>>
    $onBeforePlayerBreakBlock(::Player const& player, ::BlockTryDestroyByPlayerEvent const& eventData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onBeforeActorRemove(::Actor const&);
#else // @header-generator platform
    MCAPI ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerPlaceBlockBeforeEvent>>
    $onBeforePlayerPlaceBlock(::Player const& player, ::BlockTryPlaceByPlayerEvent const& eventData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActorAddEffectBeforeEvent>>
           $onBeforeEffectAddedEventSend(::ActorAddEffectEvent&, ::Actor const&);
#else // @header-generator platform
    MCAPI ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerInteractWithBlockBeforeEvent>>
    $onBeforePlayerInteractWithBlock(::Player& player, ::PlayerInteractWithBlockBeforeEvent const& eventData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActorItemPickupBeforeEvent>>
           $onBeforeActorItemPickup(::ActorBeforeAcquireItemEvent&);
#else // @header-generator platform
    MCAPI ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerInteractWithEntityBeforeEvent>>
    $onBeforePlayerInteractWithEntity(
        ::Player&                                    player,
        ::Actor&                                     target,
        ::PlayerInteractWithEntityBeforeEvent const& eventData
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActorTamedBeforeEvent>>
           $onBeforeActorTamed(::Actor const&, ::Actor const&);
#else // @header-generator platform
    MCAPI ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerGameModeChangeBeforeEvent>>
    $onBeforePlayerGameModeChange(::Player const& player, ::GameType fromGameMode, ::GameType toGameMode);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptExplosionStartedBeforeEvent>>
           $onBeforeExplosion(::ExplosionStartedEvent const&);
#else // @header-generator platform
    MCAPI void $onBeforeWorldInitialize(::ScriptingWorldInitializeEvent const& eventData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptPlayerBreakBlockBeforeEvent>>
           $onBeforePlayerBreakBlock(::Player const&, ::BlockTryDestroyByPlayerEvent const&);
#else // @header-generator platform
    MCAPI void $onBeforePlayerLeave(::Player const& player);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptPlayerPlaceBlockBeforeEvent>>
           $onBeforePlayerPlaceBlock(::Player const&, ::BlockTryPlaceByPlayerEvent const&);
#else // @header-generator platform
    MCAPI ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorAddEffectBeforeEvent>>
    $onBeforeEffectAddedEventSend(::ActorAddEffectEvent& actorEffectAddedEvent, ::Actor const& actor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptItemUseBeforeEvent>>
           $onBeforeItemUse(::Player const&, ::ItemUseEvent const&);
#else // @header-generator platform
    MCAPI ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorItemPickupBeforeEvent>>
    $onBeforeActorItemPickup(::ActorBeforeAcquireItemEvent& actorItemPickupEvent);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptItemUseOnBeforeEvent>>
           $onBeforeItemUseOn(::Player const&, ::ItemUseOnEvent const&);
#else // @header-generator platform
    MCAPI ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptWeatherChangedBeforeEvent>>
    $onBeforeWeatherChangedEvent(
        ::ScriptModuleMinecraft::ScriptWeatherType previousWeatherType,
        ::ScriptModuleMinecraft::ScriptWeatherType newWeatherType,
        int                                        duration
    );


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
