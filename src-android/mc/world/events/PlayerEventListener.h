#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/MinecraftEventing.h"
#include "mc/events/NetworkType.h"
#include "mc/network/packet/PlayerActionType.h"
#include "mc/world/actor/player/persona/ProfileType.h"
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class EntityContext;
class IClientInstance;
class ItemDescriptor;
class ItemEnchants;
class ItemInstance;
class ItemStack;
class LocalPlayer;
class Player;
class Vec2;
struct ActorUniqueID;
struct DealKineticDamageComponent;
struct DimensionType;
struct PlayerNotificationEvent;
// clang-format on

class PlayerEventListener {
public:
    // PlayerEventListener inner types define
    using EventType = ::PlayerNotificationEvent;

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~PlayerEventListener();

    virtual ::EventResult onPlayerAwardAchievement(::Player&, ::MinecraftEventing::AchievementIds);

    virtual ::EventResult onPlayerPortalBuilt(::Player&, ::DimensionType);

    virtual ::EventResult onPlayerPortalUsed(::Player&, ::DimensionType, ::DimensionType);

    virtual ::EventResult onPlayerPoweredBeacon(::Player const&, int const);

    virtual ::EventResult onPlayerCaravanChanged(::Actor const&, int);

    virtual ::EventResult onPlayerSaved(::Player&);

    virtual ::EventResult onPlayerInput(::EntityContext&);

    virtual ::EventResult onPlayerAuthInputReceived(::Player&);

    virtual ::EventResult onPlayerAuthInputApplied(::Player&);

    virtual ::EventResult onPlayerTurn(::Player&, ::Vec2&);

    virtual ::EventResult onCameraSetPlayerRot(::Player&, ::Vec2 const&);

    virtual ::EventResult onStartDestroyBlock(::Player&, ::BlockPos const&, uchar&);

    virtual ::EventResult onPlayerAction(::Player&, ::PlayerActionType, ::BlockPos const&, int);

    virtual ::EventResult onLocalPlayerDeath(::IClientInstance&, ::LocalPlayer&);

    virtual ::EventResult onLocalPlayerRespawn(::IClientInstance&, ::LocalPlayer&);

    virtual ::EventResult onLocalPlayerOpenInventory(::IClientInstance&, ::LocalPlayer&);

    virtual ::EventResult onLocalPlayerOpenTrading(::IClientInstance&, ::LocalPlayer&, ::ActorUniqueID const&, bool);

    virtual ::EventResult onPlayerMove(::Player&);

    virtual ::EventResult onPlayerSlide(::Player&);

    virtual ::EventResult onPlayerTargetBlockHit(::Player&, int const);

    virtual ::EventResult onPlayerTick(::Player&);

    virtual ::EventResult onPlayerStartRiding(::Player&, ::Actor&);

    virtual ::EventResult onPlayerStopRiding(::Player&, bool, bool, bool);

    virtual ::EventResult onPlayerCreated(::LocalPlayer&, ::persona::ProfileType const, std::string const&, bool, ::NetworkType);

    virtual ::EventResult onPlayerTeleported(::Player&, float);

    virtual ::EventResult onPlayerTeleported(::Player&);

    virtual ::EventResult onPlayerAttackedActor(::Player&, ::Actor&);

    virtual ::EventResult onPlayerDestroyedBlock(::Player&, ::Block const&);

    virtual ::EventResult onPlayerDestroyedBlock(::Player&, int, int, int);

    virtual ::EventResult onPlayerEquippedArmor(::Player&, ::ItemDescriptor const&);

    virtual ::EventResult onPlayerEnchantedItem(::Player&, ::ItemStack const&, ::ItemEnchants const&);

    virtual ::EventResult onPlayerNamedItem(::Player&, ::ItemDescriptor const&);

    virtual ::EventResult onPlayerItemUseInteraction(::Player&, ::ItemInstance const&);

    virtual ::EventResult onPlayerItemPlaceInteraction(::Player&, ::ItemInstance const&);

    virtual ::EventResult onPlayerCraftedItem(::Player&, ::ItemInstance const&, bool, bool, bool, int, int, int, bool, bool, std::vector<short> const&);

    virtual ::EventResult onPlayerSmithiedItem(::Player&, ::ItemDescriptor const&);

    virtual ::EventResult onPlayerItemEquipped(::Player&, ::ItemInstance const&, int);

    virtual ::EventResult onPlayerPiglinBarter(::Player&, std::string const&, bool);

    virtual ::EventResult onPlayerWaxOnWaxOff(::Player&, int const);

    virtual ::EventResult onPlayerKineticDamageDealt(::Player&, ::ActorUniqueID const&, ::DealKineticDamageComponent const&);

    virtual ::EventResult onEvent(::PlayerNotificationEvent const&);

    virtual ::EventResult onShowDataDrivenScreen(::LocalPlayer&, std::string const&, uint, std::optional<uint>);

    virtual ::EventResult onCloseDataDrivenScreen(::LocalPlayer&, uint);

    virtual ::EventResult onCloseAllDataDrivenScreens(::LocalPlayer&);
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
    MCNAPI ::EventResult $onPlayerAwardAchievement(::Player&, ::MinecraftEventing::AchievementIds);

    MCNAPI ::EventResult $onPlayerPortalBuilt(::Player&, ::DimensionType);

    MCNAPI ::EventResult $onPlayerPortalUsed(::Player&, ::DimensionType, ::DimensionType);

    MCNAPI ::EventResult $onPlayerPoweredBeacon(::Player const&, int const);

    MCNAPI ::EventResult $onPlayerCaravanChanged(::Actor const&, int);

    MCNAPI ::EventResult $onPlayerSaved(::Player&);

    MCNAPI ::EventResult $onPlayerInput(::EntityContext&);

    MCNAPI ::EventResult $onPlayerAuthInputReceived(::Player&);

    MCNAPI ::EventResult $onPlayerAuthInputApplied(::Player&);

    MCNAPI ::EventResult $onPlayerTurn(::Player&, ::Vec2&);

    MCNAPI ::EventResult $onCameraSetPlayerRot(::Player&, ::Vec2 const&);

    MCNAPI ::EventResult $onStartDestroyBlock(::Player&, ::BlockPos const&, uchar&);

    MCNAPI ::EventResult $onPlayerAction(::Player&, ::PlayerActionType, ::BlockPos const&, int);

    MCNAPI ::EventResult $onLocalPlayerDeath(::IClientInstance&, ::LocalPlayer&);

    MCNAPI ::EventResult $onLocalPlayerRespawn(::IClientInstance&, ::LocalPlayer&);

    MCNAPI ::EventResult $onLocalPlayerOpenInventory(::IClientInstance&, ::LocalPlayer&);

    MCNAPI ::EventResult $onLocalPlayerOpenTrading(::IClientInstance&, ::LocalPlayer&, ::ActorUniqueID const&, bool);

    MCNAPI ::EventResult $onPlayerMove(::Player&);

    MCNAPI ::EventResult $onPlayerSlide(::Player&);

    MCNAPI ::EventResult $onPlayerTargetBlockHit(::Player&, int const);

    MCNAPI ::EventResult $onPlayerTick(::Player&);

    MCNAPI ::EventResult $onPlayerStartRiding(::Player&, ::Actor&);

    MCNAPI ::EventResult $onPlayerStopRiding(::Player&, bool, bool, bool);

    MCNAPI ::EventResult
    $onPlayerCreated(::LocalPlayer&, ::persona::ProfileType const, std::string const&, bool, ::NetworkType);

    MCNAPI ::EventResult $onPlayerTeleported(::Player&, float);

    MCNAPI ::EventResult $onPlayerTeleported(::Player&);

    MCNAPI ::EventResult $onPlayerAttackedActor(::Player&, ::Actor&);

    MCNAPI ::EventResult $onPlayerDestroyedBlock(::Player&, ::Block const&);

    MCNAPI ::EventResult $onPlayerDestroyedBlock(::Player&, int, int, int);

    MCNAPI ::EventResult $onPlayerEquippedArmor(::Player&, ::ItemDescriptor const&);

    MCNAPI ::EventResult $onPlayerEnchantedItem(::Player&, ::ItemStack const&, ::ItemEnchants const&);

    MCNAPI ::EventResult $onPlayerNamedItem(::Player&, ::ItemDescriptor const&);

    MCNAPI ::EventResult $onPlayerItemUseInteraction(::Player&, ::ItemInstance const&);

    MCNAPI ::EventResult $onPlayerItemPlaceInteraction(::Player&, ::ItemInstance const&);

    MCNAPI ::EventResult $onPlayerCraftedItem(
        ::Player&,
        ::ItemInstance const&,
        bool,
        bool,
        bool,
        int,
        int,
        int,
        bool,
        bool,
        std::vector<short> const&
    );

    MCNAPI ::EventResult $onPlayerSmithiedItem(::Player&, ::ItemDescriptor const&);

    MCNAPI ::EventResult $onPlayerItemEquipped(::Player&, ::ItemInstance const&, int);

    MCNAPI ::EventResult $onPlayerPiglinBarter(::Player&, std::string const&, bool);

    MCNAPI ::EventResult $onPlayerWaxOnWaxOff(::Player&, int const);

    MCNAPI ::EventResult
    $onPlayerKineticDamageDealt(::Player&, ::ActorUniqueID const&, ::DealKineticDamageComponent const&);

    MCNAPI ::EventResult $onEvent(::PlayerNotificationEvent const&);

    MCNAPI ::EventResult $onShowDataDrivenScreen(::LocalPlayer&, std::string const&, uint, std::optional<uint>);

    MCNAPI ::EventResult $onCloseDataDrivenScreen(::LocalPlayer&, uint);

    MCNAPI ::EventResult $onCloseAllDataDrivenScreens(::LocalPlayer&);
    // NOLINTEND
};
