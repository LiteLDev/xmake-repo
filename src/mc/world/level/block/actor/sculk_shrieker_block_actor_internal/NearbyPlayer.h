#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Player;
class WardenSpawnTrackerComponent;
// clang-format on

namespace SculkShriekerBlockActorInternal {

struct NearbyPlayer {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<Player*>>                      mPlayer;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<WardenSpawnTrackerComponent*>> mSpawnTrackerComponent;
    ::ll::TypedStorage<4, 4, float>                                         mDistSq;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::Player*>>                      mPlayer;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::WardenSpawnTrackerComponent*>> mSpawnTrackerComponent;
    ::ll::TypedStorage<4, 4, float>                                           mDistSq;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SculkShriekerBlockActorInternal
