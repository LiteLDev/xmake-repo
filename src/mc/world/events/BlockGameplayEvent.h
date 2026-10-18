#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/world/events/ActorInsideBlockEvent.h"
#include "mc/world/events/ActorStandOnBlockEvent.h"
#include "mc/world/events/BlockPatternPostEvent.h"
#include "mc/world/events/BlockPatternPreEvent.h"
#include "mc/world/events/BlockRandomTickEvent.h"
#include "mc/world/events/BlockTryPlaceByPlayerEvent.h"
#include "mc/world/events/ButtonPushEvent.h"
#include "mc/world/events/ChestBlockTryPairEvent.h"
#include "mc/world/events/CraftUISetResultNameEvent.h"
#include "mc/world/events/EventVariantImpl.h"
#include "mc/world/events/LeverActionEvent.h"
#include "mc/world/events/PistonActionEvent.h"
#include "mc/world/events/PressurePlatePopEvent.h"
#include "mc/world/events/PressurePlatePushEvent.h"
#include "mc/world/events/TargetBlockHitEvent.h"
#include "mc/world/events/TripWireTripEvent.h"
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
template <typename T0>
struct BlockGameplayEvent {};
#else // @header-generator platform
template <typename Result>
struct BlockGameplayEvent;

template <>
struct BlockGameplayEvent<void> : ConstEventVariant<BlockPatternPostEvent> {};

template <>
struct BlockGameplayEvent<CoordinatorResult> : ConstEventVariant<
                                                   ActorInsideBlockEvent,
                                                   ActorStandOnBlockEvent,
                                                   BlockPatternPreEvent,
                                                   BlockRandomTickEvent,
                                                   ChestBlockTryPairEvent,
                                                   PistonActionEvent,
                                                   LeverActionEvent,
                                                   ButtonPushEvent,
                                                   PressurePlatePushEvent,
                                                   PressurePlatePopEvent,
                                                   TargetBlockHitEvent,
                                                   TripWireTripEvent,
                                                   BlockTryPlaceByPlayerEvent> {};

template <>
struct BlockGameplayEvent<std::optional<std::string>> : ConstEventVariant<CraftUISetResultNameEvent> {};
#endif // @header-generator platform
