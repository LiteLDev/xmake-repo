#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
template<typename... T0> class Include;
struct InterpolateMovementNeededComponent;
struct NeedSetPreviousPositionFlagComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
// clang-format on

class SetPreviousPositionSystem {
public:
    // SetPreviousPositionSystem inner types define
    using SystemView = ::ViewT<
        StrictEntityContext,
        Include<InterpolateMovementNeededComponent, NeedSetPreviousPositionFlagComponent>,
        StateVectorComponent>;

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
