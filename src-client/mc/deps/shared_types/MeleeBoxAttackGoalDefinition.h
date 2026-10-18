#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/MeleeAttackBaseGoalDefinition.h"

namespace SharedTypes::v1_26_40 {

struct MeleeBoxAttackGoalDefinition : public ::SharedTypes::v1_26_40::MeleeAttackBaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mHorizontalReach;
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_40
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
