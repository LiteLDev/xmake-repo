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
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    virtual ~IScriptWorldAfterEvents() = default;

    virtual ::Level& getLevel() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onChat(std::shared_ptr<ScriptModuleMinecraft::ScriptChatSendIntermediateData>&);
#else // @header-generator platform
    virtual void onChat(::std::shared_ptr<::ScriptModuleMinecraft::ScriptChatSendIntermediateData>& eventData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onGameRuleChange(std::shared_ptr<ScriptModuleMinecraft::ScriptGameRuleChangeAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void onGameRuleChange(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptGameRuleChangeAfterEventIntermediateData>& eventData
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPackSettingChange(std::shared_ptr<ScriptModuleMinecraft::ScriptPackSettingChangeIntermediateData>&);
#else // @header-generator platform
    virtual void onPackSettingChange(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPackSettingChangeIntermediateData>& packSettingChangeEvent
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onServerMessage(std::shared_ptr<ScriptModuleMinecraft::ScriptServerMessageIntermediateData>&);
#else // @header-generator platform
    virtual void
    onServerMessage(::std::shared_ptr<::ScriptModuleMinecraft::ScriptServerMessageIntermediateData>& eventData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onSoundCompleted(std::shared_ptr<ScriptModuleMinecraft::ScriptSoundCompletedAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void onSoundCompleted(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptSoundCompletedAfterEventIntermediateData>& eventData
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onWeatherChanged(std::shared_ptr<ScriptModuleMinecraft::ScriptWeatherChangedAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void onWeatherChanged(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptWeatherChangedAfterEventIntermediateData>& eventData
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onWorldInitialize(std::shared_ptr<ScriptModuleMinecraft::ScriptWorldInitializeAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void onWorldInitialize(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptWorldInitializeAfterEventIntermediateData>& eventData
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onActorAddEffect(std::shared_ptr<ScriptModuleMinecraft::ScriptActorAddEffectAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void onActorAddEffect(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorAddEffectAfterEventIntermediateData>& eventData
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onActorContainerClosed(std::shared_ptr<ScriptModuleMinecraft::ScriptActorContainerAccessAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void onActorContainerClosed(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorContainerAccessAfterEventIntermediateData>& eventData
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onActorContainerOpened(std::shared_ptr<ScriptModuleMinecraft::ScriptActorContainerAccessAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void onActorContainerOpened(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorContainerAccessAfterEventIntermediateData>& eventData
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onActorDie(std::shared_ptr<ScriptModuleMinecraft::ScriptActorDieAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void
    onActorDie(::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorDieAfterEventIntermediateData>& eventData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onActorHeal(std::shared_ptr<ScriptModuleMinecraft::ScriptActorHealAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void
    onActorHeal(::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorHealAfterEventIntermediateData>& eventData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onActorHealthChanged(std::shared_ptr<ScriptModuleMinecraft::ScriptActorHealthChangedAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void onActorHealthChanged(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorHealthChangedAfterEventIntermediateData>& eventData
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onActorHitBlock(std::shared_ptr<ScriptModuleMinecraft::ScriptActorHitBlockAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void onActorHitBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorHitBlockAfterEventIntermediateData>& eventData
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onActorHitEntity(std::shared_ptr<ScriptModuleMinecraft::ScriptActorHitEntityAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void onActorHitEntity(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorHitEntityAfterEventIntermediateData>& eventData
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onActorHurt(std::shared_ptr<ScriptModuleMinecraft::ScriptActorHurtAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void
    onActorHurt(::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorHurtAfterEventIntermediateData>& eventData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onActorItemDrop(std::shared_ptr<ScriptModuleMinecraft::ScriptActorItemDropAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void onActorItemDrop(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorItemDropAfterEventIntermediateData>& eventData
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onActorItemPickup(std::shared_ptr<ScriptModuleMinecraft::ScriptActorItemPickupAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void onActorItemPickup(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorItemPickupAfterEventIntermediateData>& eventData
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onActorLoad(std::shared_ptr<ScriptModuleMinecraft::ScriptActorSpawnAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void
    onActorLoad(::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorSpawnAfterEventIntermediateData>& eventData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onActorRemoved(std::shared_ptr<ScriptModuleMinecraft::ScriptActorRemoveAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void
    onActorRemoved(::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorRemoveAfterEventIntermediateData>& eventData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onActorSpawn(std::shared_ptr<ScriptModuleMinecraft::ScriptActorSpawnAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void
    onActorSpawn(::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorSpawnAfterEventIntermediateData>& eventData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onActorStartSneaking(std::shared_ptr<ScriptModuleMinecraft::ScriptActorSneakingStateAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void onActorStartSneaking(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorSneakingStateAfterEventIntermediateData>& eventData
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onActorStopSneaking(std::shared_ptr<ScriptModuleMinecraft::ScriptActorSneakingStateAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void onActorStopSneaking(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorSneakingStateAfterEventIntermediateData>& eventData
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onActorTamed(std::shared_ptr<ScriptModuleMinecraft::ScriptActorTamedAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void
    onActorTamed(::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorTamedAfterEventIntermediateData>& eventData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onDataDrivenActorEventSend(std::shared_ptr<ScriptModuleMinecraft::ScriptDataDrivenActorTriggerAfterEventIntermediateData>&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual void onDataDrivenActorEventSend(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptDataDrivenActorTriggerAfterEventIntermediateData>&
            dataDrivenActorEventSend
    );
#else // LL_PLAT_C
    virtual void onDataDrivenActorEventSend(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptDataDrivenActorTriggerAfterEventIntermediateData>& eventData
    );
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onActorUpgrade(std::shared_ptr<ScriptModuleMinecraft::ScriptActorUpgradeAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void
    onActorUpgrade(::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorUpgradeAfterEventIntermediateData>& eventData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPlayerButtonInput(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerButtonInputIntermediateData>&);
#else // @header-generator platform
    virtual void onPlayerButtonInput(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerButtonInputIntermediateData>& inputEvent
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPlayerDimensionChange(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerDimensionChangeIntermediateData>&);
#else // @header-generator platform
    virtual void onPlayerDimensionChange(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerDimensionChangeIntermediateData>& eventData
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPlayerEmote(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerEmoteIntermediateData>&);
#else // @header-generator platform
    virtual void
    onPlayerEmote(::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerEmoteIntermediateData>& emoteEvent);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPlayerGameModeChange(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerGameModeChangeIntermediateData>&);
#else // @header-generator platform
    virtual void onPlayerGameModeChange(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerGameModeChangeIntermediateData>& eventData
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPlayerHotbarSelectedSlotChange(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerHotbarSelectedSlotChangeIntermediateData>&);
#else // @header-generator platform
    virtual void onPlayerHotbarSelectedSlotChange(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerHotbarSelectedSlotChangeIntermediateData>& hotbarEvent
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPlayerInputModeChange(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerInputModeChangeIntermediateData>&);
#else // @header-generator platform
    virtual void onPlayerInputModeChange(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerInputModeChangeIntermediateData>& eventData
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPlayerInputPermissionCategoryChange(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerInputPermissionCategoryChangeIntermediateData>&);
#else // @header-generator platform
    virtual void onPlayerInputPermissionCategoryChange(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerInputPermissionCategoryChangeIntermediateData>& eventData
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPlayerInteractWithBlock(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerInteractWithBlockIntermediateData>&);
#else // @header-generator platform
    virtual void onPlayerInteractWithBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerInteractWithBlockIntermediateData>& eventData
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPlayerInteractWithEntity(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerInteractWithEntityIntermediateData>&);
#else // @header-generator platform
    virtual void onPlayerInteractWithEntity(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerInteractWithEntityIntermediateData>& eventData
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPlayerInventoryItemChange(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerInventoryItemChangeIntermediateData>&);
#else // @header-generator platform
    virtual void onPlayerInventoryItemChange(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerInventoryItemChangeIntermediateData>& inventoryEvent
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPlayerJoin(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerJoinAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void
    onPlayerJoin(::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerJoinAfterEventIntermediateData>& eventData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPlayerLeave(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerLeaveAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void
    onPlayerLeave(::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerLeaveAfterEventIntermediateData>& eventData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPlayerSpawn(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerSpawnIntermediateData>&);
#else // @header-generator platform
    virtual void
    onPlayerSpawn(::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerSpawnIntermediateData>& eventData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPlayerSwingStart(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerSwingStartIntermediateData>&);
#else // @header-generator platform
    virtual void onPlayerSwingStart(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerSwingStartIntermediateData>& playerSwingStartEvent
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPlayerUseNameTag(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerUseNameTagIntermediateData>&);
#else // @header-generator platform
    virtual void onPlayerUseNameTag(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerUseNameTagIntermediateData>& useNameTagEvent
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onActivateLever(std::shared_ptr<ScriptModuleMinecraft::ScriptLeverActionAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void onActivateLever(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptLeverActionAfterEventIntermediateData>& leverEvent
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onActivatePiston(std::shared_ptr<ScriptModuleMinecraft::ScriptPistonActionAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void onActivatePiston(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPistonActionAfterEventIntermediateData>& eventData
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onBlockContainerClosed(std::shared_ptr<ScriptModuleMinecraft::ScriptBlockContainerAccessAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void onBlockContainerClosed(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptBlockContainerAccessAfterEventIntermediateData>& eventData
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onBlockContainerOpened(std::shared_ptr<ScriptModuleMinecraft::ScriptBlockContainerAccessAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void onBlockContainerOpened(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptBlockContainerAccessAfterEventIntermediateData>& eventData
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onExplodeBlock(std::shared_ptr<ScriptModuleMinecraft::ScriptBlockExplodedAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void onExplodeBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptBlockExplodedAfterEventIntermediateData>& eventData
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onExplosion(std::shared_ptr<ScriptModuleMinecraft::ScriptExplosionStartedAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void onExplosion(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptExplosionStartedAfterEventIntermediateData>& eventData
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onHitTargetBlock(std::shared_ptr<ScriptModuleMinecraft::ScriptTargetBlockHitAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void onHitTargetBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptTargetBlockHitAfterEventIntermediateData>& eventData
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPlayerBreakBlock(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerBreakBlockAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void onPlayerBreakBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerBreakBlockAfterEventIntermediateData>& eventData
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPlayerCancelBreakingBlock(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerBreakingBlockAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void onPlayerCancelBreakingBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerBreakingBlockAfterEventIntermediateData>& eventData
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPlayerPlaceBlock(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerPlaceBlockAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void onPlayerPlaceBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerPlaceBlockAfterEventIntermediateData>& eventData
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPlayerStartBreakingBlock(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerBreakingBlockAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void onPlayerStartBreakingBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerBreakingBlockAfterEventIntermediateData>& eventData
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPopPressurePlate(std::shared_ptr<ScriptModuleMinecraft::ScriptPressurePlatePopAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void onPopPressurePlate(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPressurePlatePopAfterEventIntermediateData>& eventData
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPushButton(std::shared_ptr<ScriptModuleMinecraft::ScriptButtonPushAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void
    onPushButton(::std::shared_ptr<::ScriptModuleMinecraft::ScriptButtonPushAfterEventIntermediateData>& eventData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPushPressurePlate(std::shared_ptr<ScriptModuleMinecraft::ScriptPressurePlatePushAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void onPushPressurePlate(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPressurePlatePushAfterEventIntermediateData>& eventData
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onTripTripWire(std::shared_ptr<ScriptModuleMinecraft::ScriptTripWireTripAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void
    onTripTripWire(::std::shared_ptr<::ScriptModuleMinecraft::ScriptTripWireTripAfterEventIntermediateData>& eventData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onItemCompleteUse(std::shared_ptr<ScriptModuleMinecraft::ScriptItemCompleteUseIntermediateData>&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual void
    onItemCompleteUse(::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemCompleteUseIntermediateData>& itemEvent);
#else // LL_PLAT_C
    virtual void
    onItemCompleteUse(::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemCompleteUseIntermediateData>& eventData);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onItemReleaseUse(std::shared_ptr<ScriptModuleMinecraft::ScriptItemReleaseUseIntermediateData>&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual void
    onItemReleaseUse(::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemReleaseUseIntermediateData>& itemEvent);
#else // LL_PLAT_C
    virtual void
    onItemReleaseUse(::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemReleaseUseIntermediateData>& eventData);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onItemStartUse(std::shared_ptr<ScriptModuleMinecraft::ScriptItemStartUseIntermediateData>&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual void
    onItemStartUse(::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemStartUseIntermediateData>& itemEvent);
#else // LL_PLAT_C
    virtual void
    onItemStartUse(::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemStartUseIntermediateData>& eventData);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onItemStartUseOn(std::shared_ptr<ScriptModuleMinecraft::ScriptItemStartUseOnIntermediateData>&);
#else // @header-generator platform
    virtual void
    onItemStartUseOn(::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemStartUseOnIntermediateData>& eventData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onItemStopUse(std::shared_ptr<ScriptModuleMinecraft::ScriptItemStopUseIntermediateData>&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual void
    onItemStopUse(::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemStopUseIntermediateData>& itemEvent);
#else // LL_PLAT_C
    virtual void
    onItemStopUse(::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemStopUseIntermediateData>& eventData);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onItemStopUseOn(std::shared_ptr<ScriptModuleMinecraft::ScriptItemStopUseOnIntermediateData>&);
#else // @header-generator platform
    virtual void
    onItemStopUseOn(::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemStopUseOnIntermediateData>& eventData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onItemUse(std::shared_ptr<ScriptModuleMinecraft::ScriptItemUseIntermediateData>&);
#else // @header-generator platform
    virtual void onItemUse(::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemUseIntermediateData>& eventData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onItemUseOn(std::shared_ptr<ScriptModuleMinecraft::ScriptItemUseOnIntermediateData>&);
#else // @header-generator platform
    virtual void onItemUseOn(::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemUseOnIntermediateData>& eventData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onProjectileHitBlock(std::shared_ptr<ScriptModuleMinecraft::ScriptProjectileHitIntermediateData>&);
#else // @header-generator platform
    virtual void
    onProjectileHitBlock(::std::shared_ptr<::ScriptModuleMinecraft::ScriptProjectileHitIntermediateData>& eventData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onProjectileHitEntity(std::shared_ptr<ScriptModuleMinecraft::ScriptProjectileHitIntermediateData>&);
    // clang-format on
#else // @header-generator platform
    virtual void
    onProjectileHitEntity(::std::shared_ptr<::ScriptModuleMinecraft::ScriptProjectileHitIntermediateData>& eventData);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onChat(std::shared_ptr<ScriptModuleMinecraft::ScriptChatSendIntermediateData>&);
#else // @header-generator platform
    MCFOLD void $onChat(::std::shared_ptr<::ScriptModuleMinecraft::ScriptChatSendIntermediateData>& eventData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCFOLD void $onGameRuleChange(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptGameRuleChangeAfterEventIntermediateData>& eventData
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onActorContainerOpened(
        std::shared_ptr<ScriptModuleMinecraft::ScriptActorContainerAccessAfterEventIntermediateData>&
#else // @header-generator platform
    MCFOLD void $onPackSettingChange(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPackSettingChangeIntermediateData>& packSettingChangeEvent
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onActorDie(std::shared_ptr<ScriptModuleMinecraft::ScriptActorDieAfterEventIntermediateData>&);
#else // @header-generator platform
    MCFOLD void
    $onServerMessage(::std::shared_ptr<::ScriptModuleMinecraft::ScriptServerMessageIntermediateData>& eventData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCFOLD void $onSoundCompleted(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptSoundCompletedAfterEventIntermediateData>& eventData
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    $onPlayerInputModeChange(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerInputModeChangeIntermediateData>&);

    MCNAPI void $onPlayerInputPermissionCategoryChange(
        std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerInputPermissionCategoryChangeIntermediateData>&
#else // @header-generator platform
    MCFOLD void $onActorAddEffect(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorAddEffectAfterEventIntermediateData>& eventData
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    $onPlayerInteractWithBlock(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerInteractWithBlockIntermediateData>&);

    MCNAPI void $onPlayerInteractWithEntity(
        std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerInteractWithEntityIntermediateData>&
#else // @header-generator platform
    MCFOLD void $onActorContainerClosed(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorContainerAccessAfterEventIntermediateData>& eventData
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onPlayerInventoryItemChange(
        std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerInventoryItemChangeIntermediateData>&
#else // @header-generator platform
    MCFOLD void $onActorContainerOpened(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorContainerAccessAfterEventIntermediateData>& eventData
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onPlayerSpawn(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerSpawnIntermediateData>&);
#else // @header-generator platform
    MCFOLD void
    $onActorDie(::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorDieAfterEventIntermediateData>& eventData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onPlayerSwingStart(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerSwingStartIntermediateData>&);
#else // @header-generator platform
    MCFOLD void
    $onActorHeal(::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorHealAfterEventIntermediateData>& eventData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onPlayerUseNameTag(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerUseNameTagIntermediateData>&);

    MCNAPI void $onActivateLever(std::shared_ptr<ScriptModuleMinecraft::ScriptLeverActionAfterEventIntermediateData>&);

    MCNAPI void
    $onActivatePiston(std::shared_ptr<ScriptModuleMinecraft::ScriptPistonActionAfterEventIntermediateData>&);

    MCNAPI void $onBlockContainerClosed(
        std::shared_ptr<ScriptModuleMinecraft::ScriptBlockContainerAccessAfterEventIntermediateData>&
#else // @header-generator platform
    MCFOLD void $onActorHealthChanged(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorHealthChangedAfterEventIntermediateData>& eventData
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onBlockContainerOpened(
        std::shared_ptr<ScriptModuleMinecraft::ScriptBlockContainerAccessAfterEventIntermediateData>&
#else // @header-generator platform
    MCFOLD void $onActorItemDrop(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorItemDropAfterEventIntermediateData>& eventData
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onExplodeBlock(std::shared_ptr<ScriptModuleMinecraft::ScriptBlockExplodedAfterEventIntermediateData>&);

    MCNAPI void $onExplosion(std::shared_ptr<ScriptModuleMinecraft::ScriptExplosionStartedAfterEventIntermediateData>&);

    MCNAPI void
    $onHitTargetBlock(std::shared_ptr<ScriptModuleMinecraft::ScriptTargetBlockHitAfterEventIntermediateData>&);

    MCNAPI void
    $onPlayerBreakBlock(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerBreakBlockAfterEventIntermediateData>&);

    MCNAPI void $onPlayerCancelBreakingBlock(
        std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerBreakingBlockAfterEventIntermediateData>&
#else // @header-generator platform
    MCFOLD void $onActorItemPickup(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorItemPickupAfterEventIntermediateData>& eventData
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    $onPlayerPlaceBlock(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerPlaceBlockAfterEventIntermediateData>&);
#else // @header-generator platform
    MCFOLD void
    $onActorLoad(::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorSpawnAfterEventIntermediateData>& eventData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onPlayerStartBreakingBlock(
        std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerBreakingBlockAfterEventIntermediateData>&
#else // @header-generator platform
    MCFOLD void
    $onActorSpawn(::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorSpawnAfterEventIntermediateData>& eventData);

    MCFOLD void $onActorStartSneaking(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorSneakingStateAfterEventIntermediateData>& eventData
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    $onPopPressurePlate(std::shared_ptr<ScriptModuleMinecraft::ScriptPressurePlatePopAfterEventIntermediateData>&);
#else // @header-generator platform
    MCFOLD void $onActorStopSneaking(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorSneakingStateAfterEventIntermediateData>& eventData
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onPushButton(std::shared_ptr<ScriptModuleMinecraft::ScriptButtonPushAfterEventIntermediateData>&);
#else // @header-generator platform
    MCFOLD void
    $onActorTamed(::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorTamedAfterEventIntermediateData>& eventData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    $onPushPressurePlate(std::shared_ptr<ScriptModuleMinecraft::ScriptPressurePlatePushAfterEventIntermediateData>&);
#else // @header-generator platform
    MCFOLD void $onActorUpgrade(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorUpgradeAfterEventIntermediateData>& eventData
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onTripTripWire(std::shared_ptr<ScriptModuleMinecraft::ScriptTripWireTripAfterEventIntermediateData>&);
#else // @header-generator platform
    MCFOLD void $onPlayerButtonInput(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerButtonInputIntermediateData>& inputEvent
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onItemStartUseOn(std::shared_ptr<ScriptModuleMinecraft::ScriptItemStartUseOnIntermediateData>&);
#else // @header-generator platform
    MCFOLD void $onPlayerDimensionChange(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerDimensionChangeIntermediateData>& eventData
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onItemStopUseOn(std::shared_ptr<ScriptModuleMinecraft::ScriptItemStopUseOnIntermediateData>&);
#else // @header-generator platform
    MCFOLD void
    $onPlayerEmote(::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerEmoteIntermediateData>& emoteEvent);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onItemUse(std::shared_ptr<ScriptModuleMinecraft::ScriptItemUseIntermediateData>&);
#else // @header-generator platform
    MCFOLD void $onPlayerGameModeChange(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerGameModeChangeIntermediateData>& eventData
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onProjectileHitBlock(std::shared_ptr<ScriptModuleMinecraft::ScriptProjectileHitIntermediateData>&);
#else // @header-generator platform
    MCFOLD void $onPlayerHotbarSelectedSlotChange(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerHotbarSelectedSlotChangeIntermediateData>& hotbarEvent
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onProjectileHitEntity(std::shared_ptr<ScriptModuleMinecraft::ScriptProjectileHitIntermediateData>&);
#else // @header-generator platform
    MCFOLD void $onPlayerInputModeChange(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerInputModeChangeIntermediateData>& eventData
    );

    MCFOLD void $onPlayerInputPermissionCategoryChange(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerInputPermissionCategoryChangeIntermediateData>& eventData
    );

    MCFOLD void $onPlayerInteractWithBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerInteractWithBlockIntermediateData>& eventData
    );

    MCFOLD void $onPlayerInteractWithEntity(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerInteractWithEntityIntermediateData>& eventData
    );

    MCFOLD void $onPlayerInventoryItemChange(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerInventoryItemChangeIntermediateData>& inventoryEvent
    );

    MCFOLD void
    $onPlayerSpawn(::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerSpawnIntermediateData>& eventData);

    MCFOLD void $onPlayerSwingStart(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerSwingStartIntermediateData>& playerSwingStartEvent
    );

    MCFOLD void $onPlayerUseNameTag(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerUseNameTagIntermediateData>& useNameTagEvent
    );

    MCFOLD void $onActivateLever(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptLeverActionAfterEventIntermediateData>& leverEvent
    );

    MCFOLD void $onActivatePiston(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPistonActionAfterEventIntermediateData>& eventData
    );

    MCFOLD void $onBlockContainerClosed(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptBlockContainerAccessAfterEventIntermediateData>& eventData
    );

    MCFOLD void $onBlockContainerOpened(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptBlockContainerAccessAfterEventIntermediateData>& eventData
    );

    MCFOLD void $onExplodeBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptBlockExplodedAfterEventIntermediateData>& eventData
    );

    MCFOLD void $onExplosion(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptExplosionStartedAfterEventIntermediateData>& eventData
    );

    MCFOLD void $onHitTargetBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptTargetBlockHitAfterEventIntermediateData>& eventData
    );

    MCFOLD void $onPlayerBreakBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerBreakBlockAfterEventIntermediateData>& eventData
    );

    MCFOLD void $onPlayerCancelBreakingBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerBreakingBlockAfterEventIntermediateData>& eventData
    );

    MCFOLD void $onPlayerPlaceBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerPlaceBlockAfterEventIntermediateData>& eventData
    );

    MCFOLD void $onPlayerStartBreakingBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerBreakingBlockAfterEventIntermediateData>& eventData
    );

    MCFOLD void $onPopPressurePlate(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPressurePlatePopAfterEventIntermediateData>& eventData
    );

    MCFOLD void
    $onPushButton(::std::shared_ptr<::ScriptModuleMinecraft::ScriptButtonPushAfterEventIntermediateData>& eventData);

    MCFOLD void $onPushPressurePlate(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPressurePlatePushAfterEventIntermediateData>& eventData
    );

    MCFOLD void $onTripTripWire(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptTripWireTripAfterEventIntermediateData>& eventData
    );

    MCFOLD void
    $onItemStartUseOn(::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemStartUseOnIntermediateData>& eventData);

    MCFOLD void
    $onItemStopUseOn(::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemStopUseOnIntermediateData>& eventData);

    MCFOLD void $onItemUse(::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemUseIntermediateData>& eventData);

    MCFOLD void
    $onProjectileHitBlock(::std::shared_ptr<::ScriptModuleMinecraft::ScriptProjectileHitIntermediateData>& eventData);

    MCFOLD void
    $onProjectileHitEntity(::std::shared_ptr<::ScriptModuleMinecraft::ScriptProjectileHitIntermediateData>& eventData);


#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
