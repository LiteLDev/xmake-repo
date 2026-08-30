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
    // prevent constructor by default
    IScriptWorldBeforeEvents& operator=(IScriptWorldBeforeEvents const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IScriptWorldBeforeEvents();

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
