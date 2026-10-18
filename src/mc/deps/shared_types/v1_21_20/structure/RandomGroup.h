#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_20/structure/Direct.h"
#include "mc/deps/shared_types/v1_21_20/structure/Random.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_20 { template<typename T0> class WeightedRandomItem; }
// clang-format on
#else // @header-generator platform
#include "mc/deps/shared_types/v1_21_20/structure/WeightedRandomItem.h"
#endif // @header-generator platform

namespace SharedTypes::v1_21_20::PoolAliases {

struct RandomGroup {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24> mGroups;
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::SharedTypes::v1_21_20::WeightedRandomItem<::std::vector<::std::variant<
            ::SharedTypes::v1_21_20::PoolAliases::Direct,
            ::SharedTypes::v1_21_20::PoolAliases::Random>>>>>
        mGroups;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20::PoolAliases
