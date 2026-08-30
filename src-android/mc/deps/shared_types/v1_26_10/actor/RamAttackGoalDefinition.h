#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/deps/shared_types/shared_types/FloatRange.h"
#include "mc/deps/shared_types/v1_21_120/actor/ActorDefinitionTrigger.h"

namespace SharedTypes::v1_26_10 {

struct RamAttackGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                                          mRamDistance;
    ::ll::TypedStorage<4, 4, int>                                                          mMinRamDistance;
    ::ll::TypedStorage<4, 4, float>                                                        mKnockbackForce;
    ::ll::TypedStorage<4, 4, float>                                                        mKnockbackHeight;
    ::ll::TypedStorage<4, 4, float>                                                        mBabyKnockbackModifier;
    ::ll::TypedStorage<4, 4, float>                                                        mRunSpeed;
    ::ll::TypedStorage<4, 4, float>                                                        mRamSpeed;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_21_120::ActorDefinitionTrigger>> mOnStartTriggers;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent>                       mPreRamSound;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent>                       mRamImpactSound;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange>                                    mCooldownTime;
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_10
