#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MobEffectImmunityComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<uint>> mMobEffects;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<uint>> mMobEffects;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    MobEffectImmunityComponent& operator=(MobEffectImmunityComponent const&);
#else // @header-generator platform
#endif // @header-generator platform
};
