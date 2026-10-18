#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/sim/ExecutionResult.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class SimulatedPlayer;
// clang-format on

namespace sim {

#if defined(LL_PLAT_A) // @header-generator platform
struct ContinuousBuildIntent {};
#else // @header-generator platform
struct ContinuousBuildIntent {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::sim::ExecutionResult execute(::SimulatedPlayer& player, ::BlockSource& region);
    // NOLINTEND
};
#endif // @header-generator platform

} // namespace sim
