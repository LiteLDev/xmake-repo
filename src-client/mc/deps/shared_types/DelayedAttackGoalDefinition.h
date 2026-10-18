#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/MeleeAttackGoalDefinition.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"

namespace SharedTypes::v1_26_40 {

struct DelayedAttackGoalDefinition : public ::SharedTypes::v1_26_40::MeleeAttackGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                  mAttackDuration;
    ::ll::TypedStorage<4, 4, float>                                  mHitDelayPercent;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent> mSound;
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_40
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
