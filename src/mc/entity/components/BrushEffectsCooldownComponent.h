#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/util/ExpiringTick.h"

class BrushEffectsCooldownComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::ExpiringTick> mCooldown;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ExpiringTick const& EXPIRED_TICK();
#else // @header-generator platform
    MCAPI static ::ExpiringTick const& EXPIRED_TICK();
#endif // @header-generator platform
    // NOLINTEND
};
