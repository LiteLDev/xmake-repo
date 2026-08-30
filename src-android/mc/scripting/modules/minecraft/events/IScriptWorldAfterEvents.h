#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Level;
namespace ScriptModuleMinecraft { struct ScriptActorAddEffectAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptActorContainerAccessAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptActorDieAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptActorHealAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptActorHealthChangedAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptActorHitBlockAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptActorHitEntityAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptActorHurtAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptActorItemDropAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptActorItemPickupAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptActorRemoveAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptActorSneakingStateAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptActorSpawnAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptActorTamedAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptActorUpgradeAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptBlockContainerAccessAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptBlockExplodedAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptButtonPushAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptChatSendIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptDataDrivenActorTriggerAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptExplosionStartedAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptGameRuleChangeAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptItemCompleteUseIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptItemReleaseUseIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptItemStartUseIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptItemStartUseOnIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptItemStopUseIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptItemStopUseOnIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptItemUseIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptItemUseOnIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptLeverActionAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptPackSettingChangeIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptPistonActionAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptPlayerBreakBlockAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptPlayerBreakingBlockAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptPlayerButtonInputIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptPlayerDimensionChangeIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptPlayerEmoteIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptPlayerGameModeChangeIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptPlayerHotbarSelectedSlotChangeIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptPlayerInputModeChangeIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptPlayerInputPermissionCategoryChangeIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptPlayerInteractWithBlockIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptPlayerInteractWithEntityIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptPlayerInventoryItemChangeIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptPlayerJoinAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptPlayerLeaveAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptPlayerPlaceBlockAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptPlayerSpawnIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptPlayerSwingStartIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptPlayerUseNameTagIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptPressurePlatePopAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptPressurePlatePushAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptProjectileHitIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptServerMessageIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptSoundCompletedAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptTargetBlockHitAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptTripWireTripAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptWeatherChangedAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptWorldInitializeAfterEventIntermediateData; }
// clang-format on

namespace ScriptModuleMinecraft {

class IScriptWorldAfterEvents {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IScriptWorldAfterEvents() = default;

    virtual ::Level& getLevel() const = 0;

    virtual void onChat(std::shared_ptr<ScriptModuleMinecraft::ScriptChatSendIntermediateData>&);

    virtual void onGameRuleChange(std::shared_ptr<ScriptModuleMinecraft::ScriptGameRuleChangeAfterEventIntermediateData>&);

    virtual void onPackSettingChange(std::shared_ptr<ScriptModuleMinecraft::ScriptPackSettingChangeIntermediateData>&);

    virtual void onServerMessage(std::shared_ptr<ScriptModuleMinecraft::ScriptServerMessageIntermediateData>&);

    virtual void onSoundCompleted(std::shared_ptr<ScriptModuleMinecraft::ScriptSoundCompletedAfterEventIntermediateData>&);

    virtual void onWeatherChanged(std::shared_ptr<ScriptModuleMinecraft::ScriptWeatherChangedAfterEventIntermediateData>&);

    virtual void onWorldInitialize(std::shared_ptr<ScriptModuleMinecraft::ScriptWorldInitializeAfterEventIntermediateData>&);

    virtual void onActorAddEffect(std::shared_ptr<ScriptModuleMinecraft::ScriptActorAddEffectAfterEventIntermediateData>&);

    virtual void onActorContainerClosed(std::shared_ptr<ScriptModuleMinecraft::ScriptActorContainerAccessAfterEventIntermediateData>&);

    virtual void onActorContainerOpened(std::shared_ptr<ScriptModuleMinecraft::ScriptActorContainerAccessAfterEventIntermediateData>&);

    virtual void onActorDie(std::shared_ptr<ScriptModuleMinecraft::ScriptActorDieAfterEventIntermediateData>&);

    virtual void onActorHeal(std::shared_ptr<ScriptModuleMinecraft::ScriptActorHealAfterEventIntermediateData>&);

    virtual void onActorHealthChanged(std::shared_ptr<ScriptModuleMinecraft::ScriptActorHealthChangedAfterEventIntermediateData>&);

    virtual void onActorHitBlock(std::shared_ptr<ScriptModuleMinecraft::ScriptActorHitBlockAfterEventIntermediateData>&);

    virtual void onActorHitEntity(std::shared_ptr<ScriptModuleMinecraft::ScriptActorHitEntityAfterEventIntermediateData>&);

    virtual void onActorHurt(std::shared_ptr<ScriptModuleMinecraft::ScriptActorHurtAfterEventIntermediateData>&);

    virtual void onActorItemDrop(std::shared_ptr<ScriptModuleMinecraft::ScriptActorItemDropAfterEventIntermediateData>&);

    virtual void onActorItemPickup(std::shared_ptr<ScriptModuleMinecraft::ScriptActorItemPickupAfterEventIntermediateData>&);

    virtual void onActorLoad(std::shared_ptr<ScriptModuleMinecraft::ScriptActorSpawnAfterEventIntermediateData>&);

    virtual void onActorRemoved(std::shared_ptr<ScriptModuleMinecraft::ScriptActorRemoveAfterEventIntermediateData>&);

    virtual void onActorSpawn(std::shared_ptr<ScriptModuleMinecraft::ScriptActorSpawnAfterEventIntermediateData>&);

    virtual void onActorStartSneaking(std::shared_ptr<ScriptModuleMinecraft::ScriptActorSneakingStateAfterEventIntermediateData>&);

    virtual void onActorStopSneaking(std::shared_ptr<ScriptModuleMinecraft::ScriptActorSneakingStateAfterEventIntermediateData>&);

    virtual void onActorTamed(std::shared_ptr<ScriptModuleMinecraft::ScriptActorTamedAfterEventIntermediateData>&);

    virtual void onDataDrivenActorEventSend(std::shared_ptr<ScriptModuleMinecraft::ScriptDataDrivenActorTriggerAfterEventIntermediateData>&);

    virtual void onActorUpgrade(std::shared_ptr<ScriptModuleMinecraft::ScriptActorUpgradeAfterEventIntermediateData>&);

    virtual void onPlayerButtonInput(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerButtonInputIntermediateData>&);

    virtual void onPlayerDimensionChange(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerDimensionChangeIntermediateData>&);

    virtual void onPlayerEmote(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerEmoteIntermediateData>&);

    virtual void onPlayerGameModeChange(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerGameModeChangeIntermediateData>&);

    virtual void onPlayerHotbarSelectedSlotChange(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerHotbarSelectedSlotChangeIntermediateData>&);

    virtual void onPlayerInputModeChange(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerInputModeChangeIntermediateData>&);

    virtual void onPlayerInputPermissionCategoryChange(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerInputPermissionCategoryChangeIntermediateData>&);

    virtual void onPlayerInteractWithBlock(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerInteractWithBlockIntermediateData>&);

    virtual void onPlayerInteractWithEntity(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerInteractWithEntityIntermediateData>&);

    virtual void onPlayerInventoryItemChange(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerInventoryItemChangeIntermediateData>&);

    virtual void onPlayerJoin(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerJoinAfterEventIntermediateData>&);

    virtual void onPlayerLeave(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerLeaveAfterEventIntermediateData>&);

    virtual void onPlayerSpawn(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerSpawnIntermediateData>&);

    virtual void onPlayerSwingStart(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerSwingStartIntermediateData>&);

    virtual void onPlayerUseNameTag(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerUseNameTagIntermediateData>&);

    virtual void onActivateLever(std::shared_ptr<ScriptModuleMinecraft::ScriptLeverActionAfterEventIntermediateData>&);

    virtual void onActivatePiston(std::shared_ptr<ScriptModuleMinecraft::ScriptPistonActionAfterEventIntermediateData>&);

    virtual void onBlockContainerClosed(std::shared_ptr<ScriptModuleMinecraft::ScriptBlockContainerAccessAfterEventIntermediateData>&);

    virtual void onBlockContainerOpened(std::shared_ptr<ScriptModuleMinecraft::ScriptBlockContainerAccessAfterEventIntermediateData>&);

    virtual void onExplodeBlock(std::shared_ptr<ScriptModuleMinecraft::ScriptBlockExplodedAfterEventIntermediateData>&);

    virtual void onExplosion(std::shared_ptr<ScriptModuleMinecraft::ScriptExplosionStartedAfterEventIntermediateData>&);

    virtual void onHitTargetBlock(std::shared_ptr<ScriptModuleMinecraft::ScriptTargetBlockHitAfterEventIntermediateData>&);

    virtual void onPlayerBreakBlock(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerBreakBlockAfterEventIntermediateData>&);

    virtual void onPlayerCancelBreakingBlock(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerBreakingBlockAfterEventIntermediateData>&);

    virtual void onPlayerPlaceBlock(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerPlaceBlockAfterEventIntermediateData>&);

    virtual void onPlayerStartBreakingBlock(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerBreakingBlockAfterEventIntermediateData>&);

    virtual void onPopPressurePlate(std::shared_ptr<ScriptModuleMinecraft::ScriptPressurePlatePopAfterEventIntermediateData>&);

    virtual void onPushButton(std::shared_ptr<ScriptModuleMinecraft::ScriptButtonPushAfterEventIntermediateData>&);

    virtual void onPushPressurePlate(std::shared_ptr<ScriptModuleMinecraft::ScriptPressurePlatePushAfterEventIntermediateData>&);

    virtual void onTripTripWire(std::shared_ptr<ScriptModuleMinecraft::ScriptTripWireTripAfterEventIntermediateData>&);

    virtual void onItemCompleteUse(std::shared_ptr<ScriptModuleMinecraft::ScriptItemCompleteUseIntermediateData>&);

    virtual void onItemReleaseUse(std::shared_ptr<ScriptModuleMinecraft::ScriptItemReleaseUseIntermediateData>&);

    virtual void onItemStartUse(std::shared_ptr<ScriptModuleMinecraft::ScriptItemStartUseIntermediateData>&);

    virtual void onItemStartUseOn(std::shared_ptr<ScriptModuleMinecraft::ScriptItemStartUseOnIntermediateData>&);

    virtual void onItemStopUse(std::shared_ptr<ScriptModuleMinecraft::ScriptItemStopUseIntermediateData>&);

    virtual void onItemStopUseOn(std::shared_ptr<ScriptModuleMinecraft::ScriptItemStopUseOnIntermediateData>&);

    virtual void onItemUse(std::shared_ptr<ScriptModuleMinecraft::ScriptItemUseIntermediateData>&);

    virtual void onItemUseOn(std::shared_ptr<ScriptModuleMinecraft::ScriptItemUseOnIntermediateData>&);

    virtual void onProjectileHitBlock(std::shared_ptr<ScriptModuleMinecraft::ScriptProjectileHitIntermediateData>&);

    virtual void onProjectileHitEntity(std::shared_ptr<ScriptModuleMinecraft::ScriptProjectileHitIntermediateData>&);
    // clang-format on
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onChat(std::shared_ptr<ScriptModuleMinecraft::ScriptChatSendIntermediateData>&);

    MCNAPI void
    $onGameRuleChange(std::shared_ptr<ScriptModuleMinecraft::ScriptGameRuleChangeAfterEventIntermediateData>&);

    MCNAPI void $onPackSettingChange(std::shared_ptr<ScriptModuleMinecraft::ScriptPackSettingChangeIntermediateData>&);

    MCNAPI void $onServerMessage(std::shared_ptr<ScriptModuleMinecraft::ScriptServerMessageIntermediateData>&);

    MCNAPI void
    $onSoundCompleted(std::shared_ptr<ScriptModuleMinecraft::ScriptSoundCompletedAfterEventIntermediateData>&);

    MCNAPI void
    $onActorAddEffect(std::shared_ptr<ScriptModuleMinecraft::ScriptActorAddEffectAfterEventIntermediateData>&);

    MCNAPI void $onActorContainerClosed(
        std::shared_ptr<ScriptModuleMinecraft::ScriptActorContainerAccessAfterEventIntermediateData>&
    );

    MCNAPI void $onActorContainerOpened(
        std::shared_ptr<ScriptModuleMinecraft::ScriptActorContainerAccessAfterEventIntermediateData>&
    );

    MCNAPI void $onActorDie(std::shared_ptr<ScriptModuleMinecraft::ScriptActorDieAfterEventIntermediateData>&);

    MCNAPI void $onActorHeal(std::shared_ptr<ScriptModuleMinecraft::ScriptActorHealAfterEventIntermediateData>&);

    MCNAPI void
    $onActorHealthChanged(std::shared_ptr<ScriptModuleMinecraft::ScriptActorHealthChangedAfterEventIntermediateData>&);

    MCNAPI void
    $onActorItemDrop(std::shared_ptr<ScriptModuleMinecraft::ScriptActorItemDropAfterEventIntermediateData>&);

    MCNAPI void
    $onActorItemPickup(std::shared_ptr<ScriptModuleMinecraft::ScriptActorItemPickupAfterEventIntermediateData>&);

    MCNAPI void $onActorLoad(std::shared_ptr<ScriptModuleMinecraft::ScriptActorSpawnAfterEventIntermediateData>&);

    MCNAPI void $onActorSpawn(std::shared_ptr<ScriptModuleMinecraft::ScriptActorSpawnAfterEventIntermediateData>&);

    MCNAPI void
    $onActorStartSneaking(std::shared_ptr<ScriptModuleMinecraft::ScriptActorSneakingStateAfterEventIntermediateData>&);

    MCNAPI void
    $onActorStopSneaking(std::shared_ptr<ScriptModuleMinecraft::ScriptActorSneakingStateAfterEventIntermediateData>&);

    MCNAPI void $onActorTamed(std::shared_ptr<ScriptModuleMinecraft::ScriptActorTamedAfterEventIntermediateData>&);

    MCNAPI void $onActorUpgrade(std::shared_ptr<ScriptModuleMinecraft::ScriptActorUpgradeAfterEventIntermediateData>&);

    MCNAPI void $onPlayerButtonInput(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerButtonInputIntermediateData>&);

    MCNAPI void
    $onPlayerDimensionChange(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerDimensionChangeIntermediateData>&);

    MCNAPI void $onPlayerEmote(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerEmoteIntermediateData>&);

    MCNAPI void
    $onPlayerGameModeChange(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerGameModeChangeIntermediateData>&);

    MCNAPI void $onPlayerHotbarSelectedSlotChange(
        std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerHotbarSelectedSlotChangeIntermediateData>&
    );

    MCNAPI void
    $onPlayerInputModeChange(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerInputModeChangeIntermediateData>&);

    MCNAPI void $onPlayerInputPermissionCategoryChange(
        std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerInputPermissionCategoryChangeIntermediateData>&
    );

    MCNAPI void
    $onPlayerInteractWithBlock(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerInteractWithBlockIntermediateData>&);

    MCNAPI void $onPlayerInteractWithEntity(
        std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerInteractWithEntityIntermediateData>&
    );

    MCNAPI void $onPlayerInventoryItemChange(
        std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerInventoryItemChangeIntermediateData>&
    );

    MCNAPI void $onPlayerSpawn(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerSpawnIntermediateData>&);

    MCNAPI void $onPlayerSwingStart(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerSwingStartIntermediateData>&);

    MCNAPI void $onPlayerUseNameTag(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerUseNameTagIntermediateData>&);

    MCNAPI void $onActivateLever(std::shared_ptr<ScriptModuleMinecraft::ScriptLeverActionAfterEventIntermediateData>&);

    MCNAPI void
    $onActivatePiston(std::shared_ptr<ScriptModuleMinecraft::ScriptPistonActionAfterEventIntermediateData>&);

    MCNAPI void $onBlockContainerClosed(
        std::shared_ptr<ScriptModuleMinecraft::ScriptBlockContainerAccessAfterEventIntermediateData>&
    );

    MCNAPI void $onBlockContainerOpened(
        std::shared_ptr<ScriptModuleMinecraft::ScriptBlockContainerAccessAfterEventIntermediateData>&
    );

    MCNAPI void $onExplodeBlock(std::shared_ptr<ScriptModuleMinecraft::ScriptBlockExplodedAfterEventIntermediateData>&);

    MCNAPI void $onExplosion(std::shared_ptr<ScriptModuleMinecraft::ScriptExplosionStartedAfterEventIntermediateData>&);

    MCNAPI void
    $onHitTargetBlock(std::shared_ptr<ScriptModuleMinecraft::ScriptTargetBlockHitAfterEventIntermediateData>&);

    MCNAPI void
    $onPlayerBreakBlock(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerBreakBlockAfterEventIntermediateData>&);

    MCNAPI void $onPlayerCancelBreakingBlock(
        std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerBreakingBlockAfterEventIntermediateData>&
    );

    MCNAPI void
    $onPlayerPlaceBlock(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerPlaceBlockAfterEventIntermediateData>&);

    MCNAPI void $onPlayerStartBreakingBlock(
        std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerBreakingBlockAfterEventIntermediateData>&
    );

    MCNAPI void
    $onPopPressurePlate(std::shared_ptr<ScriptModuleMinecraft::ScriptPressurePlatePopAfterEventIntermediateData>&);

    MCNAPI void $onPushButton(std::shared_ptr<ScriptModuleMinecraft::ScriptButtonPushAfterEventIntermediateData>&);

    MCNAPI void
    $onPushPressurePlate(std::shared_ptr<ScriptModuleMinecraft::ScriptPressurePlatePushAfterEventIntermediateData>&);

    MCNAPI void $onTripTripWire(std::shared_ptr<ScriptModuleMinecraft::ScriptTripWireTripAfterEventIntermediateData>&);

    MCNAPI void $onItemStartUseOn(std::shared_ptr<ScriptModuleMinecraft::ScriptItemStartUseOnIntermediateData>&);

    MCNAPI void $onItemStopUseOn(std::shared_ptr<ScriptModuleMinecraft::ScriptItemStopUseOnIntermediateData>&);

    MCNAPI void $onItemUse(std::shared_ptr<ScriptModuleMinecraft::ScriptItemUseIntermediateData>&);

    MCNAPI void $onProjectileHitBlock(std::shared_ptr<ScriptModuleMinecraft::ScriptProjectileHitIntermediateData>&);

    MCNAPI void $onProjectileHitEntity(std::shared_ptr<ScriptModuleMinecraft::ScriptProjectileHitIntermediateData>&);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
