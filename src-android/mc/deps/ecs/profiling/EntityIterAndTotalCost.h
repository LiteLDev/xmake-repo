#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/small_vector.h"
#include "mc/deps/ecs/EntityId.h"

// auto generated forward declare list
// clang-format off
template<typename T0, typename T1, typename T2> class iterator_impl;
namespace brstd { template<typename T0, typename T1, typename T2, typename T3, typename T4> class associative_adapter; }
// clang-format on

namespace ECS::Profiling::Analysis {

struct EntityIterAndTotalCost {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>                                                               mIter;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long, std::ratio<1, 1000000000000000000>>> mTotalCost;
    // NOLINTEND
};

} // namespace ECS::Profiling::Analysis
