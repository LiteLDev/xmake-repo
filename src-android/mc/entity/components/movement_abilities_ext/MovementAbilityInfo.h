#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/vanilla_components/MovementAbilities.h"
#include "mc/world/actor/player/AbilitiesIndex.h"

namespace MovementAbilitiesExt {

struct MovementAbilityInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::AbilitiesIndex>          mAbility;
    ::ll::TypedStorage<4, 4, ::MovementAbilities>       mMovementAbility;
    ::ll::TypedStorage<4, 8, std::variant<bool, float>> mType;
    // NOLINTEND
};

} // namespace MovementAbilitiesExt
