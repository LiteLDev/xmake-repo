#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PackedVisibleMobEffects {

struct VisibleMobEffect {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, uint> mEffectId;
    ::ll::TypedStorage<1, 1, bool> mIsAmbient;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnk6dba82;
    ::ll::UntypedStorage<1, 1> mUnk9e3318;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    VisibleMobEffect& operator=(VisibleMobEffect const&);
    VisibleMobEffect(VisibleMobEffect const&);
    VisibleMobEffect();
#endif // @header-generator platform
};

} // namespace PackedVisibleMobEffects
