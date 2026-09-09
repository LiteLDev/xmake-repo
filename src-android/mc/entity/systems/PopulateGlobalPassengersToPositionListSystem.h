#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/OptionalGlobal.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
template<typename... T0> class Exclude;
template<typename... T0> class Include;
struct PassengerComponent;
struct PassengersToPositionComponent;
struct PositionPassengerRequestComponent;
struct TickingSystemWithInfo;
struct VehicleComponent;
// clang-format on

struct PopulateGlobalPassengersToPositionListSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
