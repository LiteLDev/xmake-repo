#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/world/events/MutablePlayerGameplayEvent.h"
#include "mc/world/events/PlayerGameplayEvent.h"

// auto generated forward declare list
// clang-format off
struct PlayerAddEvent;
struct PlayerAddExpEvent;
struct PlayerAddLevelEvent;
struct PlayerArmorExchangeEvent;
struct PlayerCloseContainerEvent;
struct PlayerClosedContainerEvent;
struct PlayerDamageEvent;
struct PlayerDataDrivenScreenClosedEvent;
struct PlayerDestroyBlockEvent;
struct PlayerDimensionChangeAfterEvent;
struct PlayerDimensionChangeBeforeEvent;
struct PlayerDisconnectEvent;
struct PlayerDropItemEvent;
struct PlayerEatFoodEvent;
struct PlayerEmoteEvent;
struct PlayerFormCloseEvent;
struct PlayerFormResponseEvent;
struct PlayerGameModeChangeEvent;
struct PlayerGetExperienceOrbEvent;
struct PlayerHasInvalidContainerEvent;
struct PlayerHotbarSelectedSlotChangeEvent;
struct PlayerInitialSpawnEvent;
struct PlayerInputModeChangeEvent;
struct PlayerInputPermissionCategoryChangeEvent;
struct PlayerInteractEvent;
struct PlayerInteractWithBlockAfterEvent;
struct PlayerInteractWithBlockBeforeEvent;
struct PlayerInteractWithEntityAfterEvent;
struct PlayerInteractWithEntityBeforeEvent;
struct PlayerInventoryItemChangeEvent;
struct PlayerMeCommandEvent;
struct PlayerOpenContainerEvent;
struct PlayerOpenedContainerEvent;
struct PlayerRespawnEvent;
struct PlayerSayCommandEvent;
struct PlayerScriptInputEvent;
struct PlayerSelectedItemChangedEvent;
struct PlayerShootArrowEvent;
struct PlayerSkinLoadedClientEvent;
struct PlayerSleepStateChangeEvent;
struct PlayerStopLoadingEvent;
struct PlayerSwingStartEvent;
struct PlayerTellCommandEvent;
struct PlayerTellRawCommandEvent;
struct PlayerTitleCommandEvent;
struct PlayerTitleRawCommandEvent;
struct PlayerUpdateInteractionEvent;
struct PlayerUseNameTagEvent;
// clang-format on

struct PlayerNotificationEvent : public ::NotificationEventVariant<
                                     PlayerGameplayEvent<void>,
                                     PlayerGameplayEvent<CoordinatorResult>,
                                     MutablePlayerGameplayEvent<CoordinatorResult>> {};
