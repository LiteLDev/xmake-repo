#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/actor/ActorType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class IRandom;
// clang-format on

class ImitateMobSoundsComponent {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::SharedTypes::Legacy::LevelSoundEvent getRandomImitatedSound(::IRandom&);

    MCNAPI static bool imitateNearbyMobs(::Actor&, ::IRandom&);
#else // @header-generator platform
    MCAPI static bool imitateNearbyMobs(::Actor& actor, ::IRandom& random);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unordered_map<ActorType, SharedTypes::Legacy::LevelSoundEvent> const& imitateMobMap();
#else // @header-generator platform
    MCAPI static ::std::unordered_map<::ActorType, ::SharedTypes::Legacy::LevelSoundEvent> const& imitateMobMap();
#endif // @header-generator platform
    // NOLINTEND
};
