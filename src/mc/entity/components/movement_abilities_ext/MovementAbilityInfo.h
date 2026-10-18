#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/vanilla_components/MovementAbilities.h"
#include "mc/world/actor/player/AbilitiesIndex.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace MovementAbilitiesExt {

struct MovementAbilityInfo {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, ::AbilitiesIndex>          mAbility;
    ::ll::TypedStorage<4, 4, ::MovementAbilities>       mMovementAbility;
    ::ll::TypedStorage<4, 8, std::variant<bool, float>> mType;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1> mUnk8112cd;
    ::ll::UntypedStorage<4, 4> mUnkf32451;
    ::ll::UntypedStorage<4, 8> mUnk6f70a8;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    MovementAbilityInfo& operator=(MovementAbilityInfo const&);
    MovementAbilityInfo(MovementAbilityInfo const&);
    MovementAbilityInfo();
#endif // @header-generator platform
};

} // namespace MovementAbilitiesExt
