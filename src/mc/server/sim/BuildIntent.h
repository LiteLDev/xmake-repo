#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/sim/ContinuousBuildIntent.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/server/sim/ExecutionResult.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/server/sim/VoidBuildIntent.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class BlockSource;
class SimulatedPlayer;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace sim {

struct BuildIntent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 8, std::variant<sim::VoidBuildIntent, sim::ContinuousBuildIntent>> mType;
#else // @header-generator platform
    ::ll::TypedStorage<1, 2, ::std::variant<::sim::VoidBuildIntent, ::sim::ContinuousBuildIntent>> mType;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace sim
