#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
class Vec3;
template<typename... T0> class Include;
struct IllagerBeastFlagComponent;
struct InterpolateMovementNeededComponent;
struct StateVectorComponent;
struct SubBBsComponent;
struct TickingSystemWithInfo;
// clang-format on

class IllagerBeastPostAIStepSystem {
public:
    // IllagerBeastPostAIStepSystem inner types define
    using ViewType = ::ViewT<
        StrictEntityContext,
        Include<InterpolateMovementNeededComponent, IllagerBeastFlagComponent>,
        const StateVectorComponent,
        SubBBsComponent>;

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    _doIllagerBeastPostAIStepSystem(::StrictEntityContext const&, ::StateVectorComponent const&, ::SubBBsComponent&);

    MCNAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Vec3 const& ILLAGERBEAST_POSITION_OFFSET();
    // NOLINTEND
};
