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
#if defined(LL_PLAT_A) // @header-generator platform
class IClientInstance;
#else // @header-generator platform
#endif // @header-generator platform
class ItemDescriptor;
class ItemEnchants;
class ItemInstance;
class ItemStack;
#if defined(LL_PLAT_A) // @header-generator platform
class LocalPlayer;
#else // @header-generator platform
#endif // @header-generator platform
class Player;
class Vec2;
struct ActorUniqueID;
struct DealKineticDamageComponent;
struct DimensionType;
struct PlayerNotificationEvent;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class IClientInstance;
class LocalPlayer;
#endif // @header-generator platform
// clang-format on

class PlayerEventListener {
public:
    // PlayerEventListener inner types define
    using EventType = ::PlayerNotificationEvent;

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~PlayerEventListener();
#else // @header-generator platform
    virtual ~PlayerEventListener() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onPlayerAwardAchievement(::Player&, ::MinecraftEventing::AchievementIds);
#else // @header-generator platform
    virtual ::EventResult onPlayerAwardAchievement(::Player& player, ::MinecraftEventing::AchievementIds achievement);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onPlayerPortalBuilt(::Player&, ::DimensionType);
#else // @header-generator platform
    virtual ::EventResult onPlayerPortalBuilt(::Player& player, ::DimensionType dimensionBuiltIn);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onPlayerPortalUsed(::Player&, ::DimensionType, ::DimensionType);
#else // @header-generator platform
    virtual ::EventResult
    onPlayerPortalUsed(::Player& player, ::DimensionType fromDimension, ::DimensionType toDimension);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onPlayerPoweredBeacon(::Player const&, int const);
#else // @header-generator platform
    virtual ::EventResult onPlayerPoweredBeacon(::Player const& player, int const level);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onPlayerCaravanChanged(::Actor const&, int);
#else // @header-generator platform
    virtual ::EventResult onPlayerCaravanChanged(::Actor const& mob, int caravanCount);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onPlayerSaved(::Player&);
#else // @header-generator platform
    virtual ::EventResult onPlayerSaved(::Player& player);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onPlayerInput(::EntityContext&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual ::EventResult onPlayerInput(::EntityContext&);
#else // LL_PLAT_C
    virtual ::EventResult onPlayerInput(::EntityContext& entity);
#endif
#endif // @header-generator platform

    virtual ::EventResult onPlayerAuthInputReceived(::Player&);

    virtual ::EventResult onPlayerAuthInputApplied(::Player&);

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onPlayerTurn(::Player&, ::Vec2&);
#else // @header-generator platform
    virtual ::EventResult onPlayerTurn(::Player& player, ::Vec2& turnDelta);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onCameraSetPlayerRot(::Player&, ::Vec2 const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual ::EventResult onCameraSetPlayerRot(::Player&, ::Vec2 const&);
#else // LL_PLAT_C
    virtual ::EventResult onCameraSetPlayerRot(::Player& player, ::Vec2 const& rotation);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onStartDestroyBlock(::Player&, ::BlockPos const&, uchar&);
#else // @header-generator platform
    virtual ::EventResult onStartDestroyBlock(::Player& player, ::BlockPos const& pos, uchar& face);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onPlayerAction(::Player&, ::PlayerActionType, ::BlockPos const&, int);
#else // @header-generator platform
    virtual ::EventResult onPlayerAction(::Player& player, ::PlayerActionType type, ::BlockPos const& pos, int data);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onLocalPlayerDeath(::IClientInstance&, ::LocalPlayer&);
#else // @header-generator platform
    virtual ::EventResult onLocalPlayerDeath(::IClientInstance& client, ::LocalPlayer& player);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onLocalPlayerRespawn(::IClientInstance&, ::LocalPlayer&);
#else // @header-generator platform
    virtual ::EventResult onLocalPlayerRespawn(::IClientInstance& client, ::LocalPlayer& player);
#endif // @header-generator platform

    virtual ::EventResult onLocalPlayerOpenInventory(::IClientInstance&, ::LocalPlayer&);

    virtual ::EventResult onLocalPlayerOpenTrading(::IClientInstance&, ::LocalPlayer&, ::ActorUniqueID const&, bool);

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onPlayerMove(::Player&);
#else // @header-generator platform
    virtual ::EventResult onPlayerMove(::Player& player);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onPlayerSlide(::Player&);
#else // @header-generator platform
    virtual ::EventResult onPlayerSlide(::Player& player);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onPlayerTargetBlockHit(::Player&, int const);
#else // @header-generator platform
    virtual ::EventResult onPlayerTargetBlockHit(::Player& player, int const signalStrength);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onPlayerTick(::Player&);
#else // @header-generator platform
    virtual ::EventResult onPlayerTick(::Player& player);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onPlayerStartRiding(::Player&, ::Actor&);
#else // @header-generator platform
    virtual ::EventResult onPlayerStartRiding(::Player& player, ::Actor& vehicle);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onPlayerStopRiding(::Player&, bool, bool, bool);
#else // @header-generator platform
    virtual ::EventResult
    onPlayerStopRiding(::Player& player, bool exitFromPassenger, bool entityIsBeingDestroyed, bool switchingVehicles);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onPlayerCreated(::LocalPlayer&, ::persona::ProfileType const, std::string const&, bool, ::NetworkType);
#else // @header-generator platform
    virtual ::EventResult onPlayerCreated(
        ::LocalPlayer&               player,
        ::persona::ProfileType const personaSlot,
        ::std::string const&         classicSkinId,
        bool                         usingClassicSkin,
        ::NetworkType                networkType
    );

    virtual ::EventResult onPlayerTeleported(::Player& player);
#endif // @header-generator platform

    virtual ::EventResult onPlayerTeleported(::Player&, float);

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onPlayerTeleported(::Player&);
#else // @header-generator platform
    virtual ::EventResult onPlayerAttackedActor(::Player& player, ::Actor& target);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onPlayerAttackedActor(::Player&, ::Actor&);
#else // @header-generator platform
    virtual ::EventResult onPlayerDestroyedBlock(::Player& player, int x, int y, int z);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onPlayerDestroyedBlock(::Player&, ::Block const&);
#else // @header-generator platform
    virtual ::EventResult onPlayerDestroyedBlock(::Player& player, ::Block const& block);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onPlayerDestroyedBlock(::Player&, int, int, int);
#else // @header-generator platform
    virtual ::EventResult onPlayerEquippedArmor(::Player& player, ::ItemDescriptor const& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onPlayerEquippedArmor(::Player&, ::ItemDescriptor const&);
#else // @header-generator platform
    virtual ::EventResult
    onPlayerEnchantedItem(::Player& player, ::ItemStack const& item, ::ItemEnchants const& enchants);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onPlayerEnchantedItem(::Player&, ::ItemStack const&, ::ItemEnchants const&);
#else // @header-generator platform
    virtual ::EventResult onPlayerNamedItem(::Player& player, ::ItemDescriptor const& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onPlayerNamedItem(::Player&, ::ItemDescriptor const&);
#else // @header-generator platform
    virtual ::EventResult onPlayerItemUseInteraction(::Player& player, ::ItemInstance const& itemBeforeUse);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onPlayerItemUseInteraction(::Player&, ::ItemInstance const&);
#else // @header-generator platform
    virtual ::EventResult onPlayerItemPlaceInteraction(::Player& player, ::ItemInstance const& itemBeforeUse);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onPlayerItemPlaceInteraction(::Player&, ::ItemInstance const&);

    virtual ::EventResult onPlayerCraftedItem(::Player&, ::ItemInstance const&, bool, bool, bool, int, int, int, bool, bool, std::vector<short> const&);
#else // @header-generator platform
    virtual ::EventResult onPlayerCraftedItem(
        ::Player&                   player,
        ::ItemInstance const&       craftedItem,
        bool                        recipeBook,
        bool                        hadSearchString,
        bool                        craftedAutomatically,
        int                         startingTabId,
        int                         endingTabId,
        int                         numTabsChanged,
        bool                        filterOn,
        bool                        recipeBookShown,
        ::std::vector<short> const& ingredientItemIDs
    );
#endif // @header-generator platform

    virtual ::EventResult onPlayerSmithiedItem(::Player&, ::ItemDescriptor const&);

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onPlayerItemEquipped(::Player&, ::ItemInstance const&, int);
#else // @header-generator platform
    virtual ::EventResult
    onPlayerItemEquipped(::Player& player, ::ItemInstance const& equippedItem, int equipmentSlotId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onPlayerPiglinBarter(::Player&, std::string const&, bool);
#else // @header-generator platform
    virtual ::EventResult
    onPlayerPiglinBarter(::Player& player, ::std::string const& item, bool wasTargetingBarteringPlayer);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onPlayerWaxOnWaxOff(::Player&, int const);
#else // @header-generator platform
    virtual ::EventResult onPlayerWaxOnWaxOff(::Player& player, int const blockID);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onPlayerKineticDamageDealt(::Player&, ::ActorUniqueID const&, ::DealKineticDamageComponent const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual ::EventResult
    onPlayerKineticDamageDealt(::Player&, ::ActorUniqueID const&, ::DealKineticDamageComponent const&);
#else // LL_PLAT_C
    virtual ::EventResult onPlayerKineticDamageDealt(
        ::Player&                           player,
        ::ActorUniqueID const&              target,
        ::DealKineticDamageComponent const& dealKinematicDamageComponent
    );
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onEvent(::PlayerNotificationEvent const&);
#else // @header-generator platform
    virtual ::EventResult onEvent(::PlayerNotificationEvent const& event);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onShowDataDrivenScreen(::LocalPlayer&, std::string const&, uint, std::optional<uint>);
#else // @header-generator platform
    virtual ::EventResult onShowDataDrivenScreen(::LocalPlayer&, ::std::string const&, uint, ::std::optional<uint>);
#endif // @header-generator platform

    virtual ::EventResult onCloseDataDrivenScreen(::LocalPlayer&, uint);

    virtual ::EventResult onCloseAllDataDrivenScreens(::LocalPlayer&);
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onPlayerAwardAchievement(::Player&, ::MinecraftEventing::AchievementIds);
#else // @header-generator platform
    MCFOLD ::EventResult $onPlayerAwardAchievement(::Player& player, ::MinecraftEventing::AchievementIds achievement);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onPlayerPortalBuilt(::Player&, ::DimensionType);
#else // @header-generator platform
    MCFOLD ::EventResult $onPlayerPortalBuilt(::Player& player, ::DimensionType dimensionBuiltIn);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onPlayerPortalUsed(::Player&, ::DimensionType, ::DimensionType);
#else // @header-generator platform
    MCFOLD ::EventResult
    $onPlayerPortalUsed(::Player& player, ::DimensionType fromDimension, ::DimensionType toDimension);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onPlayerPoweredBeacon(::Player const&, int const);
#else // @header-generator platform
    MCFOLD ::EventResult $onPlayerPoweredBeacon(::Player const& player, int const level);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onPlayerCaravanChanged(::Actor const&, int);
#else // @header-generator platform
    MCFOLD ::EventResult $onPlayerCaravanChanged(::Actor const& mob, int caravanCount);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onPlayerSaved(::Player&);
#else // @header-generator platform
    MCFOLD ::EventResult $onPlayerSaved(::Player& player);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onPlayerInput(::EntityContext&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD ::EventResult $onPlayerInput(::EntityContext&);
#else // LL_PLAT_C
    MCFOLD ::EventResult $onPlayerInput(::EntityContext& entity);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onPlayerAuthInputReceived(::Player&);
#else // @header-generator platform
    MCFOLD ::EventResult $onPlayerAuthInputReceived(::Player&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onPlayerAuthInputApplied(::Player&);
#else // @header-generator platform
    MCFOLD ::EventResult $onPlayerAuthInputApplied(::Player&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onPlayerTurn(::Player&, ::Vec2&);
#else // @header-generator platform
    MCFOLD ::EventResult $onPlayerTurn(::Player& player, ::Vec2& turnDelta);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onCameraSetPlayerRot(::Player&, ::Vec2 const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD ::EventResult $onCameraSetPlayerRot(::Player&, ::Vec2 const&);
#else // LL_PLAT_C
    MCFOLD ::EventResult $onCameraSetPlayerRot(::Player& player, ::Vec2 const& rotation);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onStartDestroyBlock(::Player&, ::BlockPos const&, uchar&);
#else // @header-generator platform
    MCFOLD ::EventResult $onStartDestroyBlock(::Player& player, ::BlockPos const& pos, uchar& face);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onPlayerAction(::Player&, ::PlayerActionType, ::BlockPos const&, int);
#else // @header-generator platform
    MCFOLD ::EventResult $onPlayerAction(::Player& player, ::PlayerActionType type, ::BlockPos const& pos, int data);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onLocalPlayerDeath(::IClientInstance&, ::LocalPlayer&);
#else // @header-generator platform
    MCFOLD ::EventResult $onLocalPlayerDeath(::IClientInstance& client, ::LocalPlayer& player);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onLocalPlayerRespawn(::IClientInstance&, ::LocalPlayer&);
#else // @header-generator platform
    MCFOLD ::EventResult $onLocalPlayerRespawn(::IClientInstance& client, ::LocalPlayer& player);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onLocalPlayerOpenInventory(::IClientInstance&, ::LocalPlayer&);
#else // @header-generator platform
    MCFOLD ::EventResult $onLocalPlayerOpenInventory(::IClientInstance&, ::LocalPlayer&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onLocalPlayerOpenTrading(::IClientInstance&, ::LocalPlayer&, ::ActorUniqueID const&, bool);
#else // @header-generator platform
    MCFOLD ::EventResult $onLocalPlayerOpenTrading(::IClientInstance&, ::LocalPlayer&, ::ActorUniqueID const&, bool);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onPlayerMove(::Player&);
#else // @header-generator platform
    MCFOLD ::EventResult $onPlayerMove(::Player& player);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onPlayerSlide(::Player&);
#else // @header-generator platform
    MCFOLD ::EventResult $onPlayerSlide(::Player& player);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onPlayerTargetBlockHit(::Player&, int const);
#else // @header-generator platform
    MCFOLD ::EventResult $onPlayerTargetBlockHit(::Player& player, int const signalStrength);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onPlayerTick(::Player&);
#else // @header-generator platform
    MCFOLD ::EventResult $onPlayerTick(::Player& player);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onPlayerStartRiding(::Player&, ::Actor&);
#else // @header-generator platform
    MCFOLD ::EventResult $onPlayerStartRiding(::Player& player, ::Actor& vehicle);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onPlayerStopRiding(::Player&, bool, bool, bool);
#else // @header-generator platform
    MCFOLD ::EventResult
    $onPlayerStopRiding(::Player& player, bool exitFromPassenger, bool entityIsBeingDestroyed, bool switchingVehicles);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCFOLD ::EventResult $onPlayerCreated(
        ::LocalPlayer&               player,
        ::persona::ProfileType const personaSlot,
        ::std::string const&         classicSkinId,
        bool                         usingClassicSkin,
        ::NetworkType                networkType
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onPlayerSmithiedItem(::Player&, ::ItemDescriptor const&);
#else // @header-generator platform
    MCFOLD ::EventResult $onPlayerTeleported(::Player& player);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onPlayerItemEquipped(::Player&, ::ItemInstance const&, int);
#else // @header-generator platform
    MCFOLD ::EventResult $onPlayerTeleported(::Player&, float);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onPlayerPiglinBarter(::Player&, std::string const&, bool);
#else // @header-generator platform
    MCFOLD ::EventResult $onPlayerAttackedActor(::Player& player, ::Actor& target);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onPlayerWaxOnWaxOff(::Player&, int const);
#else // @header-generator platform
    MCFOLD ::EventResult $onPlayerDestroyedBlock(::Player& player, int x, int y, int z);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult
    $onPlayerKineticDamageDealt(::Player&, ::ActorUniqueID const&, ::DealKineticDamageComponent const&);
#else // @header-generator platform
    MCFOLD ::EventResult $onPlayerDestroyedBlock(::Player& player, ::Block const& block);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onEvent(::PlayerNotificationEvent const&);
#else // @header-generator platform
    MCFOLD ::EventResult $onPlayerEquippedArmor(::Player& player, ::ItemDescriptor const& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onShowDataDrivenScreen(::LocalPlayer&, std::string const&, uint, std::optional<uint>);
#else // @header-generator platform
    MCFOLD ::EventResult
    $onPlayerEnchantedItem(::Player& player, ::ItemStack const& item, ::ItemEnchants const& enchants);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onCloseDataDrivenScreen(::LocalPlayer&, uint);
#else // @header-generator platform
    MCFOLD ::EventResult $onPlayerNamedItem(::Player& player, ::ItemDescriptor const& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onCloseAllDataDrivenScreens(::LocalPlayer&);
#else // @header-generator platform
    MCFOLD ::EventResult $onPlayerItemUseInteraction(::Player& player, ::ItemInstance const& itemBeforeUse);

    MCFOLD ::EventResult $onPlayerItemPlaceInteraction(::Player& player, ::ItemInstance const& itemBeforeUse);

    MCFOLD ::EventResult $onPlayerCraftedItem(
        ::Player&                   player,
        ::ItemInstance const&       craftedItem,
        bool                        recipeBook,
        bool                        hadSearchString,
        bool                        craftedAutomatically,
        int                         startingTabId,
        int                         endingTabId,
        int                         numTabsChanged,
        bool                        filterOn,
        bool                        recipeBookShown,
        ::std::vector<short> const& ingredientItemIDs
    );

    MCFOLD ::EventResult $onPlayerSmithiedItem(::Player&, ::ItemDescriptor const&);

    MCFOLD ::EventResult
    $onPlayerItemEquipped(::Player& player, ::ItemInstance const& equippedItem, int equipmentSlotId);

    MCFOLD ::EventResult
    $onPlayerPiglinBarter(::Player& player, ::std::string const& item, bool wasTargetingBarteringPlayer);

    MCFOLD ::EventResult $onPlayerWaxOnWaxOff(::Player& player, int const blockID);

#ifdef LL_PLAT_S
    MCFOLD ::EventResult
    $onPlayerKineticDamageDealt(::Player&, ::ActorUniqueID const&, ::DealKineticDamageComponent const&);
#else // LL_PLAT_C
    MCFOLD ::EventResult $onPlayerKineticDamageDealt(
        ::Player&                           player,
        ::ActorUniqueID const&              target,
        ::DealKineticDamageComponent const& dealKinematicDamageComponent
    );
#endif

    MCFOLD ::EventResult $onShowDataDrivenScreen(::LocalPlayer&, ::std::string const&, uint, ::std::optional<uint>);

    MCFOLD ::EventResult $onCloseDataDrivenScreen(::LocalPlayer&, uint);

    MCFOLD ::EventResult $onCloseAllDataDrivenScreens(::LocalPlayer&);

#ifdef LL_PLAT_C
    MCFOLD ::EventResult $onEvent(::PlayerNotificationEvent const& event);
#endif


#endif // @header-generator platform
    // NOLINTEND
};
