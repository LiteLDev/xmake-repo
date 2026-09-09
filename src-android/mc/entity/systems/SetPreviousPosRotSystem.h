#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class StrictEntityContext;
struct ActorRotationComponent;
struct PrevPosRotSetThisTickFlagComponent;
struct StateVectorComponent;
// clang-format on

struct SetPreviousPosRotSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _setPreviousPosRot(
        ::StrictEntityContext&,
        ::StateVectorComponent&,
        ::ActorRotationComponent&,
        ::EntityModifier<PrevPosRotSetThisTickFlagComponent>
    );

    MCNAPI static void _setPreviousPosRotSystem(::EntityContext const&);
    // NOLINTEND
};
