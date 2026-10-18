#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/shared_types/actor/ApplyKnockbackRulesPreset.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
struct ApplyKnockbackRulesPreset;
// clang-format on
#endif // @header-generator platform

struct ApplyKnockbackRulesComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<ApplyKnockbackRulesPreset>> mPresets;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::ApplyKnockbackRulesPreset>> mPresets;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ApplyKnockbackRulesComponent& operator=(ApplyKnockbackRulesComponent const&);
#else // @header-generator platform
#endif // @header-generator platform
};
