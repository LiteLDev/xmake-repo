#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/effect/MobEffectInstance.h"

struct MobEffectsComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<MobEffectInstance>> mMobEffects;
    // NOLINTEND

public:
    // prevent constructor by default
    MobEffectsComponent& operator=(MobEffectsComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~MobEffectsComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::MobEffectInstance>> mMobEffects;
#endif // @header-generator platform
    // NOLINTEND
};
