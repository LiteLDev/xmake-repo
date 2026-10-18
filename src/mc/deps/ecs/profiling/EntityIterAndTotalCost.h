#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/container/small_vector.h"
#include "mc/deps/ecs/EntityId.h"

// auto generated forward declare list
// clang-format off
template<typename T0, typename T1, typename T2> class iterator_impl;
namespace brstd { template<typename T0, typename T1, typename T2, typename T3, typename T4> class associative_adapter; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace ECS::Profiling::Analysis {

struct EntityIterAndTotalCost {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 16>                                                               mIter;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long, std::ratio<1, 1000000000000000000>>> mTotalCost;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnk827a51;
    ::ll::UntypedStorage<8, 8>  mUnkd9ad02;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    EntityIterAndTotalCost& operator=(EntityIterAndTotalCost const&);
    EntityIterAndTotalCost(EntityIterAndTotalCost const&);
    EntityIterAndTotalCost();
#endif // @header-generator platform
};

} // namespace ECS::Profiling::Analysis
