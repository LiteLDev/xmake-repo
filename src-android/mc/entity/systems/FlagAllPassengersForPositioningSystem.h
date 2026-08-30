#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
template<typename... T0> class Include;
struct InterpolateMovementNeededComponent;
struct PassengerComponent;
struct PositionPassengerRequestComponent;
struct TickingSystemWithInfo;
// clang-format on

struct FlagAllPassengersForPositioningSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
