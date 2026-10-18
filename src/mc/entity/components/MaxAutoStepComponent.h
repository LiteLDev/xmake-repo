#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/FloatComponent.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct MaxAutoStepComponent : public ::FloatComponent {
public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static float const& BASE_MAX_AUTO_STEP();

    MCNAPI static float const& CONTROLLED_MAX_AUTO_STEP();

    MCNAPI static float const& JUMP_PREVENTED_MAX_AUTO_STEP();
    // NOLINTEND
};
#else // @header-generator platform
struct MaxAutoStepComponent : public ::FloatComponent {};
#endif // @header-generator platform
