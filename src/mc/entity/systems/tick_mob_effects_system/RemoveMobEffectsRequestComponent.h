#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace TickMobEffectsSystem {

struct RemoveMobEffectsRequestComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<int>> mEffectIds;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<int>> mEffectIds;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace TickMobEffectsSystem
