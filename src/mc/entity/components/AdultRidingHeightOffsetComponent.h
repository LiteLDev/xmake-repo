#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/FloatComponent.h"

struct AdultRidingHeightOffsetComponent : public ::FloatComponent {
public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static float const& SITTING_ANIMATION_OFFSET();
#else // @header-generator platform
    MCAPI static float const& SITTING_ANIMATION_OFFSET();
#endif // @header-generator platform
    // NOLINTEND
};
