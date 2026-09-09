#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/sim/ContinuousBuildIntent.h"
#include "mc/server/sim/ExecutionResult.h"
#include "mc/server/sim/VoidBuildIntent.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class SimulatedPlayer;
// clang-format on

namespace sim {

struct BuildIntent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, std::variant<sim::VoidBuildIntent, sim::ContinuousBuildIntent>> mType;
    // NOLINTEND
};

} // namespace sim
