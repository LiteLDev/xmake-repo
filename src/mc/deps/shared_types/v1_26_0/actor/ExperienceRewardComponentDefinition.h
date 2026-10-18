#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_110/actor/ExperienceRewardComponentDefinition.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace SharedTypes::v1_26_0 {

struct ExperienceRewardComponentDefinition : public ::SharedTypes::v1_21_110::ExperienceRewardComponentDefinition {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void upgrade(
        ::SharedTypes::v1_21_110::ExperienceRewardComponentDefinition,
        ::SharedTypes::v1_26_0::ExperienceRewardComponentDefinition&
#else // @header-generator platform
    MCAPI static void upgrade(
        ::SharedTypes::v1_21_110::ExperienceRewardComponentDefinition oldDef,
        ::SharedTypes::v1_26_0::ExperienceRewardComponentDefinition&  newDef
#endif // @header-generator platform
    );
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_0
