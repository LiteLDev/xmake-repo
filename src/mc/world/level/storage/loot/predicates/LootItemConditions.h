#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class LootItemCondition;
#if defined(LL_PLAT_A) // @header-generator platform
class LootTableContext;
class Random;
#else // @header-generator platform
#endif // @header-generator platform
namespace Json { class Value; }
// clang-format on

class LootItemConditions {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool allApply(std::vector<std::unique_ptr<LootItemCondition>> const&, ::Random&, ::LootTableContext&);

    MCNAPI static std::vector<std::unique_ptr<LootItemCondition>> deserialize(::Json::Value, bool);
#else // @header-generator platform
    MCNAPI static ::std::vector<::std::unique_ptr<::LootItemCondition>>
    deserialize(::Json::Value object, bool usingUpcomingCreatorFeaturesExperiment);
#endif // @header-generator platform
    // NOLINTEND
};
