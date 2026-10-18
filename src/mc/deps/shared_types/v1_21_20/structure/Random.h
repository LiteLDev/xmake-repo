#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/util/AssetType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/shared_types/util/Reference.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_20 { template<typename T0> class WeightedRandomItem; }
// clang-format on
#else // @header-generator platform
#include "mc/deps/shared_types/v1_21_20/structure/WeightedRandomItem.h"
#endif // @header-generator platform

namespace SharedTypes::v1_21_20::PoolAliases {

struct Random {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mAlias;
    ::ll::UntypedStorage<8, 24>            mTargets;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string> mAlias;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_20::WeightedRandomItem<::SharedTypes::Reference<15>>>>
        mTargets;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20::PoolAliases
