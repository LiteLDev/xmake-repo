#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_20/filter_groups/FilterGroupData.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace SharedTypes::Legacy {

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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 192, ::SharedTypes::v1_21_20::FilterGroupData> mFilter;
#else // @header-generator platform
        ::ll::TypedStorage<8, 232, ::SharedTypes::v1_21_20::FilterGroupData> mFilter;
#endif // @header-generator platform
        ::ll::TypedStorage<4, 4, float>                                      mHorizontalPower;
        ::ll::TypedStorage<4, 4, float>                                      mVerticalPower;
        ::ll::TypedStorage<4, 4, float>                                      mVerticalVelocityCap;
        ::ll::TypedStorage<1, 1, bool>                                       mCheckIfTargetIsImmersedInWater;
        // NOLINTEND

    public:
#if defined(LL_PLAT_A) // @header-generator platform
        // static variables
#else // @header-generator platform
        // member functions
#endif // @header-generator platform
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI static std::string_view const& DESCRIPTION();

        MCNAPI static std::string_view const& NAME();
#else // @header-generator platform
        MCAPI bool operator==(
            ::SharedTypes::Legacy::ApplyKnockbackRulesComponentDefinition::ApplyKnockbackRulesPreset const& other
        ) const;
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::Legacy::ApplyKnockbackRulesComponentDefinition::ApplyKnockbackRulesPreset>> mPresets;
    // clang-format on
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string_view const& DESCRIPTION();

    MCNAPI static std::string_view const& NAME();
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::SharedTypes::Legacy::ApplyKnockbackRulesComponentDefinition::ApplyKnockbackRulesPreset>>
        mPresets;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::Legacy
