#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MobEffectImmunityComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<uint>> mMobEffects;
    // NOLINTEND

public:
    // prevent constructor by default
    MobEffectImmunityComponent& operator=(MobEffectImmunityComponent const&);
};
