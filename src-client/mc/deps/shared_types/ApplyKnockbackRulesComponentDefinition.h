#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/ExtraKnockbackApproach.h"
#include "mc/deps/shared_types/KnockbackMode.h"
#include "mc/deps/shared_types/v1_21_20/filter_groups/FilterGroupData.h"

namespace SharedTypes::v1_26_30 {

struct ApplyKnockbackRulesComponentDefinition {
public:
    // ApplyKnockbackRulesComponentDefinition inner types declare
    // clang-format off
    struct ApplyKnockbackRulesPreset;
    // clang-format on

    // ApplyKnockbackRulesComponentDefinition inner types define
    struct ApplyKnockbackRulesPreset {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 192, ::SharedTypes::v1_21_20::FilterGroupData> mFilter;
        ::ll::TypedStorage<4, 4, float>                                      mHorizontalPower;
        ::ll::TypedStorage<4, 4, float>                                      mVerticalPower;
        ::ll::TypedStorage<4, 4, float>                                      mVerticalVelocityCap;
        ::ll::TypedStorage<1, 1, bool>                                       mCheckIfTargetIsImmersedInWater;
        ::ll::TypedStorage<4, 4, float>                                      mSlowdownScale;
        ::ll::TypedStorage<1, 1, bool>                                       mScaleWithDamage;
        ::ll::TypedStorage<1, 1, ::SharedTypes::KnockbackMode>               mKnockbackMode;
        ::ll::TypedStorage<1, 1, ::SharedTypes::ExtraKnockbackApproach>      mExtraKnockbackApproach;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_26_30::ApplyKnockbackRulesComponentDefinition::ApplyKnockbackRulesPreset>> mPresets;
    // clang-format on
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_30
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
