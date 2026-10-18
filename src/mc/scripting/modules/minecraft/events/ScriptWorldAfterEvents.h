#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/TypedObjectHandle.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/deps/script_core/scripting/Version.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/scripting/modules/minecraft/events/IScriptScriptDeferredEventListener.h"
#include "mc/scripting/modules/minecraft/events/IScriptWorldAfterEvents.h"

// auto generated forward declare list
// clang-format off
class Level;
class ScriptDeferredFlushTracker;
namespace Json { class Value; }
namespace ScriptModuleMinecraft { class ScriptAfterEventList; }
namespace ScriptModuleMinecraft { class ScriptGlobalEventListeners; }
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
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptAfterEventMetadata; }
#else // @header-generator platform
#endif // @header-generator platform
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
namespace Scripting { class DependencyLocator; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct ModuleDescriptor; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptWorldAfterEvents : public ::ScriptModuleMinecraft::IScriptWorldAfterEvents,
#if defined(LL_PLAT_A) // @header-generator platform
                               public ::Scripting::WeakHandleFromThis<ScriptModuleMinecraft::ScriptWorldAfterEvents> {
#else // @header-generator platform
                               public ::Scripting::WeakHandleFromThis<::ScriptModuleMinecraft::ScriptWorldAfterEvents> {
#endif // @header-generator platform
public:
    // ScriptWorldAfterEvents inner types declare
    // clang-format off
    class ScriptWorldAfterEventsDeferredEventListener;
    struct SignalNameSubscriberCount;
    // clang-format on

    // ScriptWorldAfterEvents inner types define
    class ScriptWorldAfterEventsDeferredEventListener
    : public ::ScriptModuleMinecraft::IScriptScriptDeferredEventListener<
#if defined(LL_PLAT_A) // @header-generator platform
          ScriptModuleMinecraft::ScriptWorldAfterEvents> {
    public:
        // prevent constructor by default
        ScriptWorldAfterEventsDeferredEventListener();

#else // @header-generator platform
          ::ScriptModuleMinecraft::ScriptWorldAfterEvents> {
#endif // @header-generator platform
    public:
        // virtual functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        virtual ~ScriptWorldAfterEventsDeferredEventListener();

        virtual void onFlushWorldAfterEvents(::ScriptDeferredFlushTracker&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
#else // @header-generator platform
        virtual void onFlushWorldAfterEvents(::ScriptDeferredFlushTracker& deferredTracker) /*override*/;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void $onFlushWorldAfterEvents(::ScriptDeferredFlushTracker&);
        // NOLINTEND
#else // @header-generator platform
        MCAPI void $onFlushWorldAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);
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

    struct SignalNameSubscriberCount {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string> name;
        ::ll::TypedStorage<8, 8, ulong>        count;
#else // @header-generator platform
        ::ll::TypedStorage<8, 32, ::std::string> name;
        ::ll::TypedStorage<8, 8, uint64>         count;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        SignalNameSubscriberCount& operator=(SignalNameSubscriberCount const&);
        SignalNameSubscriberCount(SignalNameSubscriberCount const&);
        SignalNameSubscriberCount();
#else // @header-generator platform
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::TypedStorage<8, 32, ::Scripting::Version> mServerModuleVersion;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<Level*>> mLevel;
    ::ll::TypedStorage<8, 8, ::ScriptModuleMinecraft::ScriptGlobalEventListeners*> mGlobalEventListeners;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnActorEntityAdded;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnPackSettingChange;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnTrackedSoundCompleted;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptModuleMinecraft::ScriptAfterEventList>> mEvents;
    ::ll::TypedStorage<8, 40, std::unordered_map<ActorUniqueID, std::shared_ptr<ScriptModuleMinecraft::ScriptActorItemDropAfterEventIntermediateData>>> mActorItemDropEventDataMap;
    ::ll::TypedStorage<8, 40, std::unordered_map<ActorUniqueID, std::shared_ptr<ScriptModuleMinecraft::ScriptActorItemPickupAfterEventIntermediateData>>> mActorItemPickupEventDataMap;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptModuleMinecraft::ScriptWorldAfterEvents::ScriptWorldAfterEventsDeferredEventListener>> mScriptDeferredEventListener;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope>                                  mScope;
    ::ll::TypedStorage<8, 40, ::Scripting::Version>                                            mServerModuleVersion;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::Level*>>                                        mLevel;
    ::ll::TypedStorage<8, 8, ::ScriptModuleMinecraft::ScriptGlobalEventListeners*>             mGlobalEventListeners;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                                 mOnActorEntityAdded;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                                 mOnPackSettingChange;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                                 mOnTrackedSoundCompleted;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptModuleMinecraft::ScriptAfterEventList>> mEvents;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::ActorUniqueID,
            ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorItemDropAfterEventIntermediateData>>>
        mActorItemDropEventDataMap;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::ActorUniqueID,
            ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorItemPickupAfterEventIntermediateData>>>
        mActorItemPickupEventDataMap;
    ::ll::TypedStorage<
        8,
        8,
        ::std::unique_ptr<::ScriptModuleMinecraft::ScriptWorldAfterEvents::ScriptWorldAfterEventsDeferredEventListener>>
        mScriptDeferredEventListener;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWorldAfterEvents();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ScriptWorldAfterEvents();
#else // @header-generator platform
    virtual ~ScriptWorldAfterEvents() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Level& getLevel() const;
#else // @header-generator platform
    virtual ::Level& getLevel() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onChat(std::shared_ptr<ScriptModuleMinecraft::ScriptChatSendIntermediateData>&);
#else // @header-generator platform
    virtual void
    onChat(::std::shared_ptr<::ScriptModuleMinecraft::ScriptChatSendIntermediateData>& eventData) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onGameRuleChange(std::shared_ptr<ScriptModuleMinecraft::ScriptGameRuleChangeAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void onGameRuleChange(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptGameRuleChangeAfterEventIntermediateData>& eventData
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPackSettingChange(std::shared_ptr<ScriptModuleMinecraft::ScriptPackSettingChangeIntermediateData>&);
#else // @header-generator platform
    virtual void onPackSettingChange(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPackSettingChangeIntermediateData>& packSettingChangeEvent
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onServerMessage(std::shared_ptr<ScriptModuleMinecraft::ScriptServerMessageIntermediateData>&);
#else // @header-generator platform
    virtual void onServerMessage(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptServerMessageIntermediateData>& eventData
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onSoundCompleted(std::shared_ptr<ScriptModuleMinecraft::ScriptSoundCompletedAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void onSoundCompleted(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptSoundCompletedAfterEventIntermediateData>& eventData
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onWeatherChanged(std::shared_ptr<ScriptModuleMinecraft::ScriptWeatherChangedAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void onWeatherChanged(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptWeatherChangedAfterEventIntermediateData>& eventData
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onWorldInitialize(std::shared_ptr<ScriptModuleMinecraft::ScriptWorldInitializeAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void onWorldInitialize(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptWorldInitializeAfterEventIntermediateData>& eventData
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onActorAddEffect(std::shared_ptr<ScriptModuleMinecraft::ScriptActorAddEffectAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void onActorAddEffect(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorAddEffectAfterEventIntermediateData>& eventData
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onActorContainerClosed(std::shared_ptr<ScriptModuleMinecraft::ScriptActorContainerAccessAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void onActorContainerClosed(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorContainerAccessAfterEventIntermediateData>& eventData
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onActorContainerOpened(std::shared_ptr<ScriptModuleMinecraft::ScriptActorContainerAccessAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void onActorContainerOpened(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorContainerAccessAfterEventIntermediateData>& eventData
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onActorDie(std::shared_ptr<ScriptModuleMinecraft::ScriptActorDieAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void onActorDie(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorDieAfterEventIntermediateData>& eventData
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onActorHeal(std::shared_ptr<ScriptModuleMinecraft::ScriptActorHealAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void onActorHeal(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorHealAfterEventIntermediateData>& eventData
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onActorHealthChanged(std::shared_ptr<ScriptModuleMinecraft::ScriptActorHealthChangedAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void onActorHealthChanged(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorHealthChangedAfterEventIntermediateData>& eventData
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onActorHitBlock(std::shared_ptr<ScriptModuleMinecraft::ScriptActorHitBlockAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void onActorHitBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorHitBlockAfterEventIntermediateData>& eventData
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onActorHitEntity(std::shared_ptr<ScriptModuleMinecraft::ScriptActorHitEntityAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void onActorHitEntity(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorHitEntityAfterEventIntermediateData>& eventData
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onActorHurt(std::shared_ptr<ScriptModuleMinecraft::ScriptActorHurtAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void onActorHurt(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorHurtAfterEventIntermediateData>& eventData
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onActorItemDrop(std::shared_ptr<ScriptModuleMinecraft::ScriptActorItemDropAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void onActorItemDrop(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorItemDropAfterEventIntermediateData>& eventData
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onActorItemPickup(std::shared_ptr<ScriptModuleMinecraft::ScriptActorItemPickupAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void onActorItemPickup(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorItemPickupAfterEventIntermediateData>& eventData
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onActorLoad(std::shared_ptr<ScriptModuleMinecraft::ScriptActorSpawnAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void onActorLoad(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorSpawnAfterEventIntermediateData>& eventData
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onActorRemoved(std::shared_ptr<ScriptModuleMinecraft::ScriptActorRemoveAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void onActorRemoved(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorRemoveAfterEventIntermediateData>& eventData
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onActorSpawn(std::shared_ptr<ScriptModuleMinecraft::ScriptActorSpawnAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void onActorSpawn(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorSpawnAfterEventIntermediateData>& eventData
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onActorStartSneaking(std::shared_ptr<ScriptModuleMinecraft::ScriptActorSneakingStateAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void onActorStartSneaking(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorSneakingStateAfterEventIntermediateData>& eventData
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onActorStopSneaking(std::shared_ptr<ScriptModuleMinecraft::ScriptActorSneakingStateAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void onActorStopSneaking(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorSneakingStateAfterEventIntermediateData>& eventData
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onActorTamed(std::shared_ptr<ScriptModuleMinecraft::ScriptActorTamedAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void onActorTamed(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorTamedAfterEventIntermediateData>& eventData
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onDataDrivenActorEventSend(std::shared_ptr<ScriptModuleMinecraft::ScriptDataDrivenActorTriggerAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void onDataDrivenActorEventSend(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptDataDrivenActorTriggerAfterEventIntermediateData>& eventData
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onActorUpgrade(std::shared_ptr<ScriptModuleMinecraft::ScriptActorUpgradeAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void onActorUpgrade(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorUpgradeAfterEventIntermediateData>& eventData
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPlayerButtonInput(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerButtonInputIntermediateData>&);
#else // @header-generator platform
    virtual void onPlayerButtonInput(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerButtonInputIntermediateData>& inputEvent
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPlayerDimensionChange(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerDimensionChangeIntermediateData>&);
#else // @header-generator platform
    virtual void onPlayerDimensionChange(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerDimensionChangeIntermediateData>& eventData
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPlayerEmote(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerEmoteIntermediateData>&);
#else // @header-generator platform
    virtual void onPlayerEmote(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerEmoteIntermediateData>& emoteEvent
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPlayerGameModeChange(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerGameModeChangeIntermediateData>&);
#else // @header-generator platform
    virtual void onPlayerGameModeChange(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerGameModeChangeIntermediateData>& eventData
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPlayerHotbarSelectedSlotChange(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerHotbarSelectedSlotChangeIntermediateData>&);
#else // @header-generator platform
    virtual void onPlayerHotbarSelectedSlotChange(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerHotbarSelectedSlotChangeIntermediateData>& hotbarEvent
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPlayerInputModeChange(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerInputModeChangeIntermediateData>&);
#else // @header-generator platform
    virtual void onPlayerInputModeChange(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerInputModeChangeIntermediateData>& eventData
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPlayerInputPermissionCategoryChange(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerInputPermissionCategoryChangeIntermediateData>&);
#else // @header-generator platform
    virtual void onPlayerInputPermissionCategoryChange(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerInputPermissionCategoryChangeIntermediateData>& eventData
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPlayerInteractWithBlock(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerInteractWithBlockIntermediateData>&);
#else // @header-generator platform
    virtual void onPlayerInteractWithBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerInteractWithBlockIntermediateData>& eventData
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPlayerInteractWithEntity(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerInteractWithEntityIntermediateData>&);
#else // @header-generator platform
    virtual void onPlayerInteractWithEntity(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerInteractWithEntityIntermediateData>& eventData
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPlayerInventoryItemChange(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerInventoryItemChangeIntermediateData>&);
#else // @header-generator platform
    virtual void onPlayerInventoryItemChange(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerInventoryItemChangeIntermediateData>& inventoryEvent
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPlayerJoin(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerJoinAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void onPlayerJoin(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerJoinAfterEventIntermediateData>& eventData
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPlayerLeave(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerLeaveAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void onPlayerLeave(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerLeaveAfterEventIntermediateData>& eventData
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPlayerSpawn(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerSpawnIntermediateData>&);
#else // @header-generator platform
    virtual void onPlayerStartBreakingBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerBreakingBlockAfterEventIntermediateData>& eventData
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPlayerSwingStart(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerSwingStartIntermediateData>&);
#else // @header-generator platform
    virtual void onPlayerCancelBreakingBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerBreakingBlockAfterEventIntermediateData>& eventData
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPlayerUseNameTag(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerUseNameTagIntermediateData>&);
#else // @header-generator platform
    virtual void onPlayerSpawn(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerSpawnIntermediateData>& eventData
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onActivateLever(std::shared_ptr<ScriptModuleMinecraft::ScriptLeverActionAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void onPlayerSwingStart(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerSwingStartIntermediateData>& playerSwingStartEvent
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onActivatePiston(std::shared_ptr<ScriptModuleMinecraft::ScriptPistonActionAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void onPlayerUseNameTag(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerUseNameTagIntermediateData>& useNameTagEvent
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onBlockContainerClosed(std::shared_ptr<ScriptModuleMinecraft::ScriptBlockContainerAccessAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void onActivateLever(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptLeverActionAfterEventIntermediateData>& leverEvent
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onBlockContainerOpened(std::shared_ptr<ScriptModuleMinecraft::ScriptBlockContainerAccessAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void onActivatePiston(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPistonActionAfterEventIntermediateData>& eventData
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onExplodeBlock(std::shared_ptr<ScriptModuleMinecraft::ScriptBlockExplodedAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void onBlockContainerClosed(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptBlockContainerAccessAfterEventIntermediateData>& eventData
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onExplosion(std::shared_ptr<ScriptModuleMinecraft::ScriptExplosionStartedAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void onBlockContainerOpened(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptBlockContainerAccessAfterEventIntermediateData>& eventData
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onHitTargetBlock(std::shared_ptr<ScriptModuleMinecraft::ScriptTargetBlockHitAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void onExplodeBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptBlockExplodedAfterEventIntermediateData>& eventData
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPlayerBreakBlock(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerBreakBlockAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void onExplosion(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptExplosionStartedAfterEventIntermediateData>& eventData
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPlayerCancelBreakingBlock(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerBreakingBlockAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void onHitTargetBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptTargetBlockHitAfterEventIntermediateData>& eventData
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPlayerPlaceBlock(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerPlaceBlockAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void onPlayerBreakBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerBreakBlockAfterEventIntermediateData>& eventData
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPlayerStartBreakingBlock(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerBreakingBlockAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void onPlayerPlaceBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerPlaceBlockAfterEventIntermediateData>& eventData
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPopPressurePlate(std::shared_ptr<ScriptModuleMinecraft::ScriptPressurePlatePopAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void onPopPressurePlate(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPressurePlatePopAfterEventIntermediateData>& eventData
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPushButton(std::shared_ptr<ScriptModuleMinecraft::ScriptButtonPushAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void onPushButton(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptButtonPushAfterEventIntermediateData>& eventData
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPushPressurePlate(std::shared_ptr<ScriptModuleMinecraft::ScriptPressurePlatePushAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void onPushPressurePlate(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPressurePlatePushAfterEventIntermediateData>& eventData
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onTripTripWire(std::shared_ptr<ScriptModuleMinecraft::ScriptTripWireTripAfterEventIntermediateData>&);
#else // @header-generator platform
    virtual void onTripTripWire(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptTripWireTripAfterEventIntermediateData>& eventData
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onItemCompleteUse(std::shared_ptr<ScriptModuleMinecraft::ScriptItemCompleteUseIntermediateData>&);
#else // @header-generator platform
    virtual void onItemCompleteUse(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemCompleteUseIntermediateData>& eventData
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onItemReleaseUse(std::shared_ptr<ScriptModuleMinecraft::ScriptItemReleaseUseIntermediateData>&);
#else // @header-generator platform
    virtual void onItemReleaseUse(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemReleaseUseIntermediateData>& eventData
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onItemStartUse(std::shared_ptr<ScriptModuleMinecraft::ScriptItemStartUseIntermediateData>&);
#else // @header-generator platform
    virtual void onItemStartUse(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemStartUseIntermediateData>& eventData
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onItemStartUseOn(std::shared_ptr<ScriptModuleMinecraft::ScriptItemStartUseOnIntermediateData>&);
#else // @header-generator platform
    virtual void onItemStartUseOn(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemStartUseOnIntermediateData>& eventData
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onItemStopUse(std::shared_ptr<ScriptModuleMinecraft::ScriptItemStopUseIntermediateData>&);
#else // @header-generator platform
    virtual void onItemStopUse(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemStopUseIntermediateData>& eventData
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onItemStopUseOn(std::shared_ptr<ScriptModuleMinecraft::ScriptItemStopUseOnIntermediateData>&);
#else // @header-generator platform
    virtual void onItemStopUseOn(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemStopUseOnIntermediateData>& eventData
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onItemUse(std::shared_ptr<ScriptModuleMinecraft::ScriptItemUseIntermediateData>&);
#else // @header-generator platform
    virtual void
    onItemUse(::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemUseIntermediateData>& eventData) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onItemUseOn(std::shared_ptr<ScriptModuleMinecraft::ScriptItemUseOnIntermediateData>&);
#else // @header-generator platform
    virtual void
    onItemUseOn(::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemUseOnIntermediateData>& eventData) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onProjectileHitBlock(std::shared_ptr<ScriptModuleMinecraft::ScriptProjectileHitIntermediateData>&);
#else // @header-generator platform
    virtual void onProjectileHitBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptProjectileHitIntermediateData>& eventData
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onProjectileHitEntity(std::shared_ptr<ScriptModuleMinecraft::ScriptProjectileHitIntermediateData>&);
    // clang-format on
#else // @header-generator platform
    virtual void onProjectileHitEntity(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptProjectileHitIntermediateData>& eventData
    ) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptWorldAfterEvents(
        ::Scripting::WeakLifetimeScope const&,
        ::gsl::not_null<Level*>,
        ::Scripting::DependencyLocator&,
        ::Scripting::ContextConfig const&,
        ::Scripting::Version
#else // @header-generator platform
    MCAPI ScriptWorldAfterEvents(
        ::Scripting::WeakLifetimeScope const& scope,
        ::gsl::not_null<::Level*>             level,
        ::Scripting::DependencyLocator&       locator,
        ::Scripting::ContextConfig const&     config,
        ::Scripting::Version                  serverModuleVersion
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<ScriptModuleMinecraft::ScriptWorldAfterEvents::SignalNameSubscriberCount>
           getFineGrainedSignalSubscriberStats() const;
#else // @header-generator platform
    MCAPI ::std::vector<::ScriptModuleMinecraft::ScriptWorldAfterEvents::SignalNameSubscriberCount>
    getFineGrainedSignalSubscriberStats() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void registerListeners(::ScriptModuleMinecraft::ScriptGlobalEventListeners&);
#else // @header-generator platform
    MCAPI void registerListeners(::ScriptModuleMinecraft::ScriptGlobalEventListeners& globalEventListeners);
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

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void generateOrderDocumentationForVersion(::Scripting::ModuleDescriptor const&, ::Json::Value&);

    MCNAPI static ::ScriptModuleMinecraft::ScriptAfterEventMetadata const& getMetadata();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static char const*& bindingName();
#else // @header-generator platform
    MCAPI static void generateOrderDocumentationForVersion(
        ::Scripting::ModuleDescriptor const& moduleToDocumentFor,
        ::Json::Value&                       eventOrderArray
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        ::Scripting::WeakLifetimeScope const&,
        ::gsl::not_null<Level*>,
        ::Scripting::DependencyLocator&,
        ::Scripting::ContextConfig const&,
        ::Scripting::Version
#else // @header-generator platform
    MCAPI void* $ctor(
        ::Scripting::WeakLifetimeScope const& scope,
        ::gsl::not_null<::Level*>             level,
        ::Scripting::DependencyLocator&       locator,
        ::Scripting::ContextConfig const&     config,
        ::Scripting::Version                  serverModuleVersion
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform
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
    MCNAPI ::Level& $getLevel() const;
#else // @header-generator platform
    MCFOLD ::Level& $getLevel() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onChat(std::shared_ptr<ScriptModuleMinecraft::ScriptChatSendIntermediateData>&);
#else // @header-generator platform
    MCAPI void $onChat(::std::shared_ptr<::ScriptModuleMinecraft::ScriptChatSendIntermediateData>& eventData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    $onGameRuleChange(std::shared_ptr<ScriptModuleMinecraft::ScriptGameRuleChangeAfterEventIntermediateData>&);

    MCNAPI void $onPackSettingChange(std::shared_ptr<ScriptModuleMinecraft::ScriptPackSettingChangeIntermediateData>&);

    MCNAPI void $onServerMessage(std::shared_ptr<ScriptModuleMinecraft::ScriptServerMessageIntermediateData>&);

    MCNAPI void
    $onSoundCompleted(std::shared_ptr<ScriptModuleMinecraft::ScriptSoundCompletedAfterEventIntermediateData>&);

    MCNAPI void
    $onWeatherChanged(std::shared_ptr<ScriptModuleMinecraft::ScriptWeatherChangedAfterEventIntermediateData>&);

    MCNAPI void
    $onWorldInitialize(std::shared_ptr<ScriptModuleMinecraft::ScriptWorldInitializeAfterEventIntermediateData>&);

    MCNAPI void
    $onActorAddEffect(std::shared_ptr<ScriptModuleMinecraft::ScriptActorAddEffectAfterEventIntermediateData>&);

    MCNAPI void $onActorContainerClosed(
        std::shared_ptr<ScriptModuleMinecraft::ScriptActorContainerAccessAfterEventIntermediateData>&
#else // @header-generator platform
    MCAPI void $onGameRuleChange(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptGameRuleChangeAfterEventIntermediateData>& eventData
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onActorContainerOpened(
        std::shared_ptr<ScriptModuleMinecraft::ScriptActorContainerAccessAfterEventIntermediateData>&
#else // @header-generator platform
    MCAPI void $onPackSettingChange(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPackSettingChangeIntermediateData>& packSettingChangeEvent
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onActorDie(std::shared_ptr<ScriptModuleMinecraft::ScriptActorDieAfterEventIntermediateData>&);
#else // @header-generator platform
    MCAPI void
    $onServerMessage(::std::shared_ptr<::ScriptModuleMinecraft::ScriptServerMessageIntermediateData>& eventData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onActorHeal(std::shared_ptr<ScriptModuleMinecraft::ScriptActorHealAfterEventIntermediateData>&);

    MCNAPI void
    $onActorHealthChanged(std::shared_ptr<ScriptModuleMinecraft::ScriptActorHealthChangedAfterEventIntermediateData>&);

    MCNAPI void
    $onActorHitBlock(std::shared_ptr<ScriptModuleMinecraft::ScriptActorHitBlockAfterEventIntermediateData>&);

    MCNAPI void
    $onActorHitEntity(std::shared_ptr<ScriptModuleMinecraft::ScriptActorHitEntityAfterEventIntermediateData>&);

    MCNAPI void $onActorHurt(std::shared_ptr<ScriptModuleMinecraft::ScriptActorHurtAfterEventIntermediateData>&);

    MCNAPI void
    $onActorItemDrop(std::shared_ptr<ScriptModuleMinecraft::ScriptActorItemDropAfterEventIntermediateData>&);

    MCNAPI void
    $onActorItemPickup(std::shared_ptr<ScriptModuleMinecraft::ScriptActorItemPickupAfterEventIntermediateData>&);

    MCNAPI void $onActorLoad(std::shared_ptr<ScriptModuleMinecraft::ScriptActorSpawnAfterEventIntermediateData>&);

    MCNAPI void $onActorRemoved(std::shared_ptr<ScriptModuleMinecraft::ScriptActorRemoveAfterEventIntermediateData>&);

    MCNAPI void $onActorSpawn(std::shared_ptr<ScriptModuleMinecraft::ScriptActorSpawnAfterEventIntermediateData>&);

    MCNAPI void
    $onActorStartSneaking(std::shared_ptr<ScriptModuleMinecraft::ScriptActorSneakingStateAfterEventIntermediateData>&);

    MCNAPI void
    $onActorStopSneaking(std::shared_ptr<ScriptModuleMinecraft::ScriptActorSneakingStateAfterEventIntermediateData>&);

    MCNAPI void $onActorTamed(std::shared_ptr<ScriptModuleMinecraft::ScriptActorTamedAfterEventIntermediateData>&);

    MCNAPI void $onDataDrivenActorEventSend(
        std::shared_ptr<ScriptModuleMinecraft::ScriptDataDrivenActorTriggerAfterEventIntermediateData>&
#else // @header-generator platform
    MCAPI void $onSoundCompleted(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptSoundCompletedAfterEventIntermediateData>& eventData
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
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
    MCAPI void $onWeatherChanged(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptWeatherChangedAfterEventIntermediateData>& eventData
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    $onPlayerInputModeChange(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerInputModeChangeIntermediateData>&);

    MCNAPI void $onPlayerInputPermissionCategoryChange(
        std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerInputPermissionCategoryChangeIntermediateData>&
#else // @header-generator platform
    MCAPI void $onWorldInitialize(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptWorldInitializeAfterEventIntermediateData>& eventData
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    $onPlayerInteractWithBlock(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerInteractWithBlockIntermediateData>&);

    MCNAPI void $onPlayerInteractWithEntity(
        std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerInteractWithEntityIntermediateData>&
#else // @header-generator platform
    MCAPI void $onActorAddEffect(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorAddEffectAfterEventIntermediateData>& eventData
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onPlayerInventoryItemChange(
        std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerInventoryItemChangeIntermediateData>&
#else // @header-generator platform
    MCAPI void $onActorContainerClosed(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorContainerAccessAfterEventIntermediateData>& eventData
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onPlayerJoin(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerJoinAfterEventIntermediateData>&);

    MCNAPI void $onPlayerLeave(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerLeaveAfterEventIntermediateData>&);

    MCNAPI void $onPlayerSpawn(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerSpawnIntermediateData>&);

    MCNAPI void $onPlayerSwingStart(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerSwingStartIntermediateData>&);

    MCNAPI void $onPlayerUseNameTag(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerUseNameTagIntermediateData>&);

    MCNAPI void $onActivateLever(std::shared_ptr<ScriptModuleMinecraft::ScriptLeverActionAfterEventIntermediateData>&);

    MCNAPI void
    $onActivatePiston(std::shared_ptr<ScriptModuleMinecraft::ScriptPistonActionAfterEventIntermediateData>&);

    MCNAPI void $onBlockContainerClosed(
        std::shared_ptr<ScriptModuleMinecraft::ScriptBlockContainerAccessAfterEventIntermediateData>&
#else // @header-generator platform
    MCAPI void $onActorContainerOpened(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorContainerAccessAfterEventIntermediateData>& eventData
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onBlockContainerOpened(
        std::shared_ptr<ScriptModuleMinecraft::ScriptBlockContainerAccessAfterEventIntermediateData>&
#else // @header-generator platform
    MCAPI void
    $onActorDie(::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorDieAfterEventIntermediateData>& eventData);

    MCAPI void
    $onActorHeal(::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorHealAfterEventIntermediateData>& eventData);

    MCAPI void $onActorHealthChanged(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorHealthChangedAfterEventIntermediateData>& eventData
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
    MCAPI void $onActorHitBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorHitBlockAfterEventIntermediateData>& eventData
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    $onPlayerPlaceBlock(std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerPlaceBlockAfterEventIntermediateData>&);

    MCNAPI void $onPlayerStartBreakingBlock(
        std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerBreakingBlockAfterEventIntermediateData>&
#else // @header-generator platform
    MCAPI void $onActorHitEntity(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorHitEntityAfterEventIntermediateData>& eventData
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    $onPopPressurePlate(std::shared_ptr<ScriptModuleMinecraft::ScriptPressurePlatePopAfterEventIntermediateData>&);
#else // @header-generator platform
    MCAPI void
    $onActorHurt(::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorHurtAfterEventIntermediateData>& eventData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onPushButton(std::shared_ptr<ScriptModuleMinecraft::ScriptButtonPushAfterEventIntermediateData>&);
#else // @header-generator platform
    MCAPI void $onActorItemDrop(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorItemDropAfterEventIntermediateData>& eventData
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    $onPushPressurePlate(std::shared_ptr<ScriptModuleMinecraft::ScriptPressurePlatePushAfterEventIntermediateData>&);
#else // @header-generator platform
    MCAPI void $onActorItemPickup(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorItemPickupAfterEventIntermediateData>& eventData
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onTripTripWire(std::shared_ptr<ScriptModuleMinecraft::ScriptTripWireTripAfterEventIntermediateData>&);
#else // @header-generator platform
    MCAPI void
    $onActorLoad(::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorSpawnAfterEventIntermediateData>& eventData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onItemCompleteUse(std::shared_ptr<ScriptModuleMinecraft::ScriptItemCompleteUseIntermediateData>&);
#else // @header-generator platform
    MCAPI void
    $onActorRemoved(::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorRemoveAfterEventIntermediateData>& eventData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onItemReleaseUse(std::shared_ptr<ScriptModuleMinecraft::ScriptItemReleaseUseIntermediateData>&);
#else // @header-generator platform
    MCAPI void
    $onActorSpawn(::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorSpawnAfterEventIntermediateData>& eventData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onItemStartUse(std::shared_ptr<ScriptModuleMinecraft::ScriptItemStartUseIntermediateData>&);
#else // @header-generator platform
    MCAPI void $onActorStartSneaking(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorSneakingStateAfterEventIntermediateData>& eventData
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onItemStartUseOn(std::shared_ptr<ScriptModuleMinecraft::ScriptItemStartUseOnIntermediateData>&);
#else // @header-generator platform
    MCAPI void $onActorStopSneaking(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorSneakingStateAfterEventIntermediateData>& eventData
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onItemStopUse(std::shared_ptr<ScriptModuleMinecraft::ScriptItemStopUseIntermediateData>&);
#else // @header-generator platform
    MCAPI void
    $onActorTamed(::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorTamedAfterEventIntermediateData>& eventData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onItemStopUseOn(std::shared_ptr<ScriptModuleMinecraft::ScriptItemStopUseOnIntermediateData>&);
#else // @header-generator platform
    MCAPI void $onDataDrivenActorEventSend(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptDataDrivenActorTriggerAfterEventIntermediateData>& eventData
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onItemUse(std::shared_ptr<ScriptModuleMinecraft::ScriptItemUseIntermediateData>&);
#else // @header-generator platform
    MCAPI void $onActorUpgrade(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorUpgradeAfterEventIntermediateData>& eventData
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onItemUseOn(std::shared_ptr<ScriptModuleMinecraft::ScriptItemUseOnIntermediateData>&);
#else // @header-generator platform
    MCAPI void $onPlayerButtonInput(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerButtonInputIntermediateData>& inputEvent
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onProjectileHitBlock(std::shared_ptr<ScriptModuleMinecraft::ScriptProjectileHitIntermediateData>&);
#else // @header-generator platform
    MCAPI void $onPlayerDimensionChange(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerDimensionChangeIntermediateData>& eventData
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onProjectileHitEntity(std::shared_ptr<ScriptModuleMinecraft::ScriptProjectileHitIntermediateData>&);
    // NOLINTEND
#else // @header-generator platform
    MCAPI void
    $onPlayerEmote(::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerEmoteIntermediateData>& emoteEvent);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI void $onPlayerGameModeChange(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerGameModeChangeIntermediateData>& eventData
    );

    MCAPI void $onPlayerHotbarSelectedSlotChange(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerHotbarSelectedSlotChangeIntermediateData>& hotbarEvent
    );

    MCAPI void $onPlayerInputModeChange(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerInputModeChangeIntermediateData>& eventData
    );

    MCAPI void $onPlayerInputPermissionCategoryChange(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerInputPermissionCategoryChangeIntermediateData>& eventData
    );

    MCAPI void $onPlayerInteractWithBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerInteractWithBlockIntermediateData>& eventData
    );

    MCAPI void $onPlayerInteractWithEntity(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerInteractWithEntityIntermediateData>& eventData
    );

    MCAPI void $onPlayerInventoryItemChange(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerInventoryItemChangeIntermediateData>& inventoryEvent
    );

    MCAPI void
    $onPlayerJoin(::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerJoinAfterEventIntermediateData>& eventData);

    MCAPI void
    $onPlayerLeave(::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerLeaveAfterEventIntermediateData>& eventData);

    MCAPI void $onPlayerStartBreakingBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerBreakingBlockAfterEventIntermediateData>& eventData
    );

    MCAPI void $onPlayerCancelBreakingBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerBreakingBlockAfterEventIntermediateData>& eventData
    );

    MCAPI void $onPlayerSpawn(::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerSpawnIntermediateData>& eventData);

    MCAPI void $onPlayerSwingStart(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerSwingStartIntermediateData>& playerSwingStartEvent
    );

    MCAPI void $onPlayerUseNameTag(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerUseNameTagIntermediateData>& useNameTagEvent
    );

    MCAPI void $onActivateLever(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptLeverActionAfterEventIntermediateData>& leverEvent
    );

    MCAPI void $onActivatePiston(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPistonActionAfterEventIntermediateData>& eventData
    );

    MCAPI void $onBlockContainerClosed(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptBlockContainerAccessAfterEventIntermediateData>& eventData
    );

    MCAPI void $onBlockContainerOpened(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptBlockContainerAccessAfterEventIntermediateData>& eventData
    );

    MCAPI void $onExplodeBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptBlockExplodedAfterEventIntermediateData>& eventData
    );

    MCAPI void $onExplosion(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptExplosionStartedAfterEventIntermediateData>& eventData
    );

    MCAPI void $onHitTargetBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptTargetBlockHitAfterEventIntermediateData>& eventData
    );

    MCAPI void $onPlayerBreakBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerBreakBlockAfterEventIntermediateData>& eventData
    );

    MCAPI void $onPlayerPlaceBlock(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerPlaceBlockAfterEventIntermediateData>& eventData
    );

    MCAPI void $onPopPressurePlate(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPressurePlatePopAfterEventIntermediateData>& eventData
    );

    MCAPI void
    $onPushButton(::std::shared_ptr<::ScriptModuleMinecraft::ScriptButtonPushAfterEventIntermediateData>& eventData);

    MCAPI void $onPushPressurePlate(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPressurePlatePushAfterEventIntermediateData>& eventData
    );

    MCAPI void $onTripTripWire(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptTripWireTripAfterEventIntermediateData>& eventData
    );

    MCAPI void
    $onItemCompleteUse(::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemCompleteUseIntermediateData>& eventData);

    MCAPI void
    $onItemReleaseUse(::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemReleaseUseIntermediateData>& eventData);

    MCAPI void
    $onItemStartUse(::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemStartUseIntermediateData>& eventData);

    MCAPI void
    $onItemStartUseOn(::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemStartUseOnIntermediateData>& eventData);

    MCAPI void $onItemStopUse(::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemStopUseIntermediateData>& eventData);

    MCAPI void
    $onItemStopUseOn(::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemStopUseOnIntermediateData>& eventData);

    MCAPI void $onItemUse(::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemUseIntermediateData>& eventData);

    MCAPI void $onItemUseOn(::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemUseOnIntermediateData>& eventData);

    MCAPI void
    $onProjectileHitBlock(::std::shared_ptr<::ScriptModuleMinecraft::ScriptProjectileHitIntermediateData>& eventData);

    MCAPI void
    $onProjectileHitEntity(::std::shared_ptr<::ScriptModuleMinecraft::ScriptProjectileHitIntermediateData>& eventData);


#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
