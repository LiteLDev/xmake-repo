#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ItemStackRequestCereal {

struct BeaconPaymentActionData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mPrimaryEffectId;
    ::ll::TypedStorage<4, 4, int> mSecondaryEffectId;
    // NOLINTEND
};

} // namespace ItemStackRequestCereal
#endif // @header-generator platform
