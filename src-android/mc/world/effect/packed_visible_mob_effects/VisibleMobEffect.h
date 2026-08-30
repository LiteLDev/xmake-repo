#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PackedVisibleMobEffects {

struct VisibleMobEffect {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mEffectId;
    ::ll::TypedStorage<1, 1, bool> mIsAmbient;
    // NOLINTEND
};

} // namespace PackedVisibleMobEffects
