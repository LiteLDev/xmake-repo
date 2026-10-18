#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_10/scatter_params/ScatterParamsData.h"
#include "mc/deps/shared_types/v1_21_20/feature_rules/AutomaticFeatureRuleConditions.h"
#include "mc/deps/shared_types/v1_21_20/feature_rules/AutomaticFeatureRuleDescription.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_20 {

struct AutomaticFeatureRulesData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 48, ::SharedTypes::v1_21_20::AutomaticFeatureRuleDescription> mDescription;
    ::ll::TypedStorage<8, 224, ::SharedTypes::v1_21_20::AutomaticFeatureRuleConditions> mConditions;
    ::ll::TypedStorage<8, 576, std::optional<SharedTypes::v1_21_10::ScatterParamsData>> mDistribution;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::SharedTypes::v1_21_20::AutomaticFeatureRuleDescription>     mDescription;
    ::ll::TypedStorage<8, 272, ::SharedTypes::v1_21_20::AutomaticFeatureRuleConditions>     mConditions;
    ::ll::TypedStorage<8, 664, ::std::optional<::SharedTypes::v1_21_10::ScatterParamsData>> mDistribution;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    AutomaticFeatureRulesData(AutomaticFeatureRulesData const&);
    AutomaticFeatureRulesData();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI AutomaticFeatureRulesData(::SharedTypes::v1_21_20::AutomaticFeatureRulesData const&);
#else // @header-generator platform
    MCAPI ::SharedTypes::v1_21_20::AutomaticFeatureRulesData&
    operator=(::SharedTypes::v1_21_20::AutomaticFeatureRulesData const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::v1_21_20::AutomaticFeatureRulesData&
    operator=(::SharedTypes::v1_21_20::AutomaticFeatureRulesData&&);

    MCNAPI ~AutomaticFeatureRulesData();
#else // @header-generator platform
    MCAPI ~AutomaticFeatureRulesData();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_21_20::AutomaticFeatureRulesData const&);
#else // @header-generator platform
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
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
