#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/world/events/BlockGameplayEvent.h"
#include "mc/world/events/MutableBlockGameplayEvent.h"

// auto generated forward declare list
// clang-format off
struct ActorInsideBlockEvent;
struct ActorStandOnBlockEvent;
struct BlockPatternPostEvent;
struct BlockPatternPreEvent;
struct BlockRandomTickEvent;
struct BlockTryDestroyByPlayerEvent;
struct BlockTryPlaceByPlayerEvent;
struct ButtonPushEvent;
struct ChestBlockTryPairEvent;
struct CraftUISetResultNameEvent;
struct ExplosionStartedEvent;
struct LeverActionEvent;
struct PistonActionEvent;
struct PressurePlatePopEvent;
struct PressurePlatePushEvent;
struct TargetBlockHitEvent;
struct TripWireTripEvent;
namespace brstd { template<typename T0> class optional; }
// clang-format on

struct BlockNotificationEvent : public ::NotificationEventVariant<
                                    BlockGameplayEvent<void>,
                                    BlockGameplayEvent<CoordinatorResult>,
                                    BlockGameplayEvent<brstd::optional<std::string>>,
                                    MutableBlockGameplayEvent<CoordinatorResult>> {};
