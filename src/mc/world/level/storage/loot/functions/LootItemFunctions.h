#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class LootItemFunction;
namespace Json { class Value; }
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
class LootItemFunctions {};
#else // @header-generator platform
class LootItemFunctions {
public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static ::std::vector<::std::unique_ptr<::LootItemFunction>>
    deserialize(::Json::Value object, bool usingUpcomingCreatorFeaturesExperiment);
#endif
    // NOLINTEND
};
#endif // @header-generator platform
