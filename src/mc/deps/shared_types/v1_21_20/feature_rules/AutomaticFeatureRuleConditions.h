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
namespace SharedTypes::v1_21_20 {

struct AutomaticFeatureRuleConditions {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 200, std::optional<SharedTypes::v1_21_20::FilterGroupData>> mBiomeFilter;
    ::ll::TypedStorage<8, 24, std::string>                                            mPlacementPass;
#else // @header-generator platform
    ::ll::TypedStorage<8, 240, ::std::optional<::SharedTypes::v1_21_20::FilterGroupData>> mBiomeFilter;
    ::ll::TypedStorage<8, 32, ::std::string>                                              mPlacementPass;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~AutomaticFeatureRuleConditions();
#else // @header-generator platform
    MCAPI ~AutomaticFeatureRuleConditions();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20
