#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/server/sim/ExecutionResult.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class SimulatedPlayer;
// clang-format on

namespace sim {

struct NavigateToPositionsIntent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                                               mSpeed;
    ::ll::TypedStorage<8, 24, std::vector<glm::vec<3, float, (glm::qualifier)0>>> mTargets;
    ::ll::TypedStorage<8, 8, ulong>                                               mNextTarget;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                       mSpeed;
    ::ll::TypedStorage<8, 24, ::std::vector<::glm::vec3>> mTargets;
    ::ll::TypedStorage<8, 8, uint64>                      mNextTarget;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    NavigateToPositionsIntent& operator=(NavigateToPositionsIntent const&);
    NavigateToPositionsIntent();
#else // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCFOLD void finalize(::SimulatedPlayer& player);
    // NOLINTEND
#endif // @header-generator platform
};

} // namespace sim
