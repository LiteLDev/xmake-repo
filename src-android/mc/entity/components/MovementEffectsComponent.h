#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/effect/MovementEffect.h"
#include "mc/world/effect/MovementEffectType.h"

struct MovementEffectsComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<MovementEffect>> mMovementEffects;
    // NOLINTEND

public:
    // prevent constructor by default
    MovementEffectsComponent& operator=(MovementEffectsComponent const&);
};
