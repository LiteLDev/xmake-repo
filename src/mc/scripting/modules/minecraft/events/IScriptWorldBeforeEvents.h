#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptWeatherType.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class Actor;
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
namespace ScriptModuleMinecraft { struct ScriptActorAddEffectBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorHealBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorHurtBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorItemPickupBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptActorTamedBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptChatSendBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptExplosionStartedBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemUseBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptItemUseOnBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerBreakBlockBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerGameModeChangeBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerInteractWithBlockBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerInteractWithEntityBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptPlayerPlaceBlockBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptWeatherChangedBeforeEvent; }
// clang-format on

namespace ScriptModuleMinecraft {

class IScriptWorldBeforeEvents {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    IScriptWorldBeforeEvents& operator=(IScriptWorldBeforeEvents const&);

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~IScriptWorldBeforeEvents();
#else // @header-generator platform
    virtual ~IScriptWorldBeforeEvents() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptChatSendBeforeEvent>> onBeforeChat(::ChatEvent const&, ::Player const&);
#else // @header-generator platform
    virtual ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptChatSendBeforeEvent>>
    onBeforeChat(::ChatEvent const& chatEvent, ::Player const& player);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onBeforeWorldInitialize(::ScriptingWorldInitializeEvent const&);
#else // @header-generator platform
    virtual void onBeforeWorldInitialize(::ScriptingWorldInitializeEvent const& eventData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptWeatherChangedBeforeEvent>> onBeforeWeatherChangedEvent(::ScriptModuleMinecraft::ScriptWeatherType, ::ScriptModuleMinecraft::ScriptWeatherType, int);
#else // @header-generator platform
    virtual ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptWeatherChangedBeforeEvent>>
    onBeforeWeatherChangedEvent(
        ::ScriptModuleMinecraft::ScriptWeatherType previousWeatherType,
        ::ScriptModuleMinecraft::ScriptWeatherType newWeatherType,
        int                                        duration
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptPlayerInteractWithEntityBeforeEvent>> onBeforePlayerInteractWithEntity(::Player&, ::Actor&, ::PlayerInteractWithEntityBeforeEvent const&);
#else // @header-generator platform
    virtual ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerInteractWithEntityBeforeEvent>>
    onBeforePlayerInteractWithEntity(
        ::Player&                                    player,
        ::Actor&                                     target,
        ::PlayerInteractWithEntityBeforeEvent const& eventData
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptPlayerInteractWithBlockBeforeEvent>> onBeforePlayerInteractWithBlock(::Player&, ::PlayerInteractWithBlockBeforeEvent const&);
#else // @header-generator platform
    virtual ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerInteractWithBlockBeforeEvent>>
    onBeforePlayerInteractWithBlock(::Player& player, ::PlayerInteractWithBlockBeforeEvent const& eventData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptPlayerGameModeChangeBeforeEvent>> onBeforePlayerGameModeChange(::Player const&, ::GameType, ::GameType);
#else // @header-generator platform
    virtual ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerGameModeChangeBeforeEvent>>
    onBeforePlayerGameModeChange(::Player const& player, ::GameType fromGameMode, ::GameType toGameMode);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onBeforePlayerLeave(::Player const&);
#else // @header-generator platform
    virtual void onBeforePlayerLeave(::Player const& player);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActorHealBeforeEvent>> onBeforeActorHeal(::Actor const&, ::ActorBeforeHealEvent const&);
#else // @header-generator platform
    virtual ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorHealBeforeEvent>>
    onBeforeActorHeal(::Actor const& actor, ::ActorBeforeHealEvent const& eventData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActorHurtBeforeEvent>> onBeforeActorHurt(::Actor const&, ::ActorBeforeHurtEvent const&);
#else // @header-generator platform
    virtual ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorHurtBeforeEvent>>
    onBeforeActorHurt(::Actor const& actor, ::ActorBeforeHurtEvent const& eventData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onBeforeActorRemove(::Actor const&);
#else // @header-generator platform
    virtual void onBeforeActorRemove(::Actor const& actor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActorAddEffectBeforeEvent>> onBeforeEffectAddedEventSend(::ActorAddEffectEvent&, ::Actor const&);
#else // @header-generator platform
    virtual ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorAddEffectBeforeEvent>>
    onBeforeEffectAddedEventSend(::ActorAddEffectEvent& actorEffectAddedEvent, ::Actor const& actor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActorItemPickupBeforeEvent>> onBeforeActorItemPickup(::ActorBeforeAcquireItemEvent&);
#else // @header-generator platform
    virtual ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorItemPickupBeforeEvent>>
    onBeforeActorItemPickup(::ActorBeforeAcquireItemEvent& actorItemPickupEvent);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActorTamedBeforeEvent>> onBeforeActorTamed(::Actor const&, ::Actor const&);
#else // @header-generator platform
    virtual ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorTamedBeforeEvent>>
    onBeforeActorTamed(::Actor const& actor, ::Actor const& tamingActor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptExplosionStartedBeforeEvent>> onBeforeExplosion(::ExplosionStartedEvent const&);
#else // @header-generator platform
    virtual ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptExplosionStartedBeforeEvent>>
    onBeforeExplosion(::ExplosionStartedEvent const& event);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptPlayerBreakBlockBeforeEvent>> onBeforePlayerBreakBlock(::Player const&, ::BlockTryDestroyByPlayerEvent const&);
#else // @header-generator platform
    virtual ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerBreakBlockBeforeEvent>>
    onBeforePlayerBreakBlock(::Player const& player, ::BlockTryDestroyByPlayerEvent const& eventData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptPlayerPlaceBlockBeforeEvent>> onBeforePlayerPlaceBlock(::Player const&, ::BlockTryPlaceByPlayerEvent const&);
#else // @header-generator platform
    virtual ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerPlaceBlockBeforeEvent>>
    onBeforePlayerPlaceBlock(::Player const& player, ::BlockTryPlaceByPlayerEvent const& eventData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptItemUseBeforeEvent>> onBeforeItemUse(::Player const&, ::ItemUseEvent const&);
#else // @header-generator platform
    virtual ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemUseBeforeEvent>>
    onBeforeItemUse(::Player const& player, ::ItemUseEvent const& itemEvent);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptItemUseOnBeforeEvent>> onBeforeItemUseOn(::Player const&, ::ItemUseOnEvent const&);
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemUseOnBeforeEvent>>
    onBeforeItemUseOn(::Player const& player, ::ItemUseOnEvent const& itemEvent);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptChatSendBeforeEvent>>
           $onBeforeChat(::ChatEvent const&, ::Player const&);
#else // @header-generator platform
    MCFOLD ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptChatSendBeforeEvent>>
    $onBeforeChat(::ChatEvent const& chatEvent, ::Player const& player);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onBeforeWorldInitialize(::ScriptingWorldInitializeEvent const&);
#else // @header-generator platform
    MCFOLD void $onBeforeWorldInitialize(::ScriptingWorldInitializeEvent const& eventData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptWeatherChangedBeforeEvent>>
           $onBeforeWeatherChangedEvent(
               ::ScriptModuleMinecraft::ScriptWeatherType,
               ::ScriptModuleMinecraft::ScriptWeatherType,
               int
           );
#else // @header-generator platform
    MCFOLD ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptWeatherChangedBeforeEvent>>
    $onBeforeWeatherChangedEvent(
        ::ScriptModuleMinecraft::ScriptWeatherType previousWeatherType,
        ::ScriptModuleMinecraft::ScriptWeatherType newWeatherType,
        int                                        duration
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<
        Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptPlayerInteractWithEntityBeforeEvent>>
    $onBeforePlayerInteractWithEntity(::Player&, ::Actor&, ::PlayerInteractWithEntityBeforeEvent const&);
#else // @header-generator platform
    MCFOLD ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerInteractWithEntityBeforeEvent>>
    $onBeforePlayerInteractWithEntity(
        ::Player&                                    player,
        ::Actor&                                     target,
        ::PlayerInteractWithEntityBeforeEvent const& eventData
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<
        Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptPlayerInteractWithBlockBeforeEvent>>
    $onBeforePlayerInteractWithBlock(::Player&, ::PlayerInteractWithBlockBeforeEvent const&);
#else // @header-generator platform
    MCFOLD ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerInteractWithBlockBeforeEvent>>
    $onBeforePlayerInteractWithBlock(::Player& player, ::PlayerInteractWithBlockBeforeEvent const& eventData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI
        std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptPlayerGameModeChangeBeforeEvent>>
        $onBeforePlayerGameModeChange(::Player const&, ::GameType, ::GameType);
#else // @header-generator platform
    MCFOLD ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerGameModeChangeBeforeEvent>>
    $onBeforePlayerGameModeChange(::Player const& player, ::GameType fromGameMode, ::GameType toGameMode);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onBeforePlayerLeave(::Player const&);
#else // @header-generator platform
    MCFOLD void $onBeforePlayerLeave(::Player const& player);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActorHealBeforeEvent>>
           $onBeforeActorHeal(::Actor const&, ::ActorBeforeHealEvent const&);
#else // @header-generator platform
    MCFOLD ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorHealBeforeEvent>>
    $onBeforeActorHeal(::Actor const& actor, ::ActorBeforeHealEvent const& eventData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActorHurtBeforeEvent>>
           $onBeforeActorHurt(::Actor const&, ::ActorBeforeHurtEvent const&);
#else // @header-generator platform
    MCFOLD ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorHurtBeforeEvent>>
    $onBeforeActorHurt(::Actor const& actor, ::ActorBeforeHurtEvent const& eventData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onBeforeActorRemove(::Actor const&);
#else // @header-generator platform
    MCFOLD void $onBeforeActorRemove(::Actor const& actor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActorAddEffectBeforeEvent>>
           $onBeforeEffectAddedEventSend(::ActorAddEffectEvent&, ::Actor const&);
#else // @header-generator platform
    MCFOLD ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorAddEffectBeforeEvent>>
    $onBeforeEffectAddedEventSend(::ActorAddEffectEvent& actorEffectAddedEvent, ::Actor const& actor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActorItemPickupBeforeEvent>>
           $onBeforeActorItemPickup(::ActorBeforeAcquireItemEvent&);
#else // @header-generator platform
    MCFOLD ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorItemPickupBeforeEvent>>
    $onBeforeActorItemPickup(::ActorBeforeAcquireItemEvent& actorItemPickupEvent);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActorTamedBeforeEvent>>
           $onBeforeActorTamed(::Actor const&, ::Actor const&);
#else // @header-generator platform
    MCFOLD ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorTamedBeforeEvent>>
    $onBeforeActorTamed(::Actor const& actor, ::Actor const& tamingActor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptExplosionStartedBeforeEvent>>
           $onBeforeExplosion(::ExplosionStartedEvent const&);
#else // @header-generator platform
    MCFOLD ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptExplosionStartedBeforeEvent>>
    $onBeforeExplosion(::ExplosionStartedEvent const& event);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptPlayerBreakBlockBeforeEvent>>
           $onBeforePlayerBreakBlock(::Player const&, ::BlockTryDestroyByPlayerEvent const&);
#else // @header-generator platform
    MCFOLD ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerBreakBlockBeforeEvent>>
    $onBeforePlayerBreakBlock(::Player const& player, ::BlockTryDestroyByPlayerEvent const& eventData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptPlayerPlaceBlockBeforeEvent>>
           $onBeforePlayerPlaceBlock(::Player const&, ::BlockTryPlaceByPlayerEvent const&);
#else // @header-generator platform
    MCFOLD ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerPlaceBlockBeforeEvent>>
    $onBeforePlayerPlaceBlock(::Player const& player, ::BlockTryPlaceByPlayerEvent const& eventData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptItemUseBeforeEvent>>
           $onBeforeItemUse(::Player const&, ::ItemUseEvent const&);
#else // @header-generator platform
    MCFOLD ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemUseBeforeEvent>>
    $onBeforeItemUse(::Player const& player, ::ItemUseEvent const& itemEvent);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptItemUseOnBeforeEvent>>
           $onBeforeItemUseOn(::Player const&, ::ItemUseOnEvent const&);
#else // @header-generator platform
    MCFOLD ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemUseOnBeforeEvent>>
    $onBeforeItemUseOn(::Player const& player, ::ItemUseOnEvent const& itemEvent);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
