#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/events/ActorInsideBlockEvent.h"
#include "mc/world/events/ActorStandOnBlockEvent.h"
#include "mc/world/events/BlockPatternPostEvent.h"
#include "mc/world/events/BlockPatternPreEvent.h"
#include "mc/world/events/BlockRandomTickEvent.h"
#include "mc/world/events/BlockTryDestroyByPlayerEvent.h"
#include "mc/world/events/BlockTryPlaceByPlayerEvent.h"
#include "mc/world/events/ButtonPushEvent.h"
#include "mc/world/events/ChestBlockTryPairEvent.h"
#include "mc/world/events/CraftUISetResultNameEvent.h"
#include "mc/world/events/ExplosionStartedEvent.h"
#include "mc/world/events/LeverActionEvent.h"
#include "mc/world/events/PistonActionEvent.h"
#include "mc/world/events/PressurePlatePopEvent.h"
#include "mc/world/events/PressurePlatePushEvent.h"
#include "mc/world/events/TargetBlockHitEvent.h"
#include "mc/world/events/TripWireTripEvent.h"
#endif // @header-generator platform

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/world/events/BlockGameplayEvent.h"
#include "mc/world/events/MutableBlockGameplayEvent.h"
#else // @header-generator platform
#include "mc/world/events/EventVariantImpl.h"
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
namespace brstd { template<typename T0> class optional; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
struct BlockNotificationEvent : public ::NotificationEventVariant<
                                    BlockGameplayEvent<void>,
                                    BlockGameplayEvent<CoordinatorResult>,
                                    BlockGameplayEvent<brstd::optional<std::string>>,
                                    MutableBlockGameplayEvent<CoordinatorResult>> {};
#else // @header-generator platform
struct BlockNotificationEvent : public ::EventVariantImpl<
                                    ::BlockPatternPostEvent const,
                                    ::ActorInsideBlockEvent const,
                                    ::ActorStandOnBlockEvent const,
                                    ::BlockPatternPreEvent const,
                                    ::BlockRandomTickEvent const,
                                    ::ChestBlockTryPairEvent const,
                                    ::PistonActionEvent const,
                                    ::LeverActionEvent const,
                                    ::ButtonPushEvent const,
                                    ::PressurePlatePushEvent const,
                                    ::PressurePlatePopEvent const,
                                    ::TargetBlockHitEvent const,
                                    ::TripWireTripEvent const,
                                    ::BlockTryPlaceByPlayerEvent const,
                                    ::CraftUISetResultNameEvent const,
                                    ::ExplosionStartedEvent const,
                                    ::BlockTryDestroyByPlayerEvent const> {};
#endif // @header-generator platform
