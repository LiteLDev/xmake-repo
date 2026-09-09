#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#include "mc/deps/shared_types/v1_21_120/actor/ActorDefinitionTrigger.h"
#include "mc/deps/shared_types/v1_21_20/filter_groups/FilterGroupData.h"

namespace SharedTypes::v1_26_40 {

struct KnockbackRoarGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                              mDuration;
    ::ll::TypedStorage<4, 4, float>                                              mAttackTime;
    ::ll::TypedStorage<4, 4, int>                                                mKnockbackDamage;
    ::ll::TypedStorage<4, 4, int>                                                mKnockbackHorizontalStrength;
    ::ll::TypedStorage<4, 4, int>                                                mKnockbackVerticalStrength;
    ::ll::TypedStorage<4, 4, float>                                              mHeightCap;
    ::ll::TypedStorage<4, 4, int>                                                mKnockbackEffectRange;
    ::ll::TypedStorage<4, 4, float>                                              mCooldownTime;
    ::ll::TypedStorage<8, 192, ::SharedTypes::v1_21_20::FilterGroupData>         mKnockbackFilters;
    ::ll::TypedStorage<8, 192, ::SharedTypes::v1_21_20::FilterGroupData>         mDamageFilters;
    ::ll::TypedStorage<8, 224, ::SharedTypes::v1_21_120::ActorDefinitionTrigger> mOnRoarEnd;
    ::ll::TypedStorage<1, 1, bool>                                               mFilterEvaluateFix;
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_40
