#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct AABBShapeComponent;
struct CollidableMobNearFlagComponent;
struct CollisionFlagComponent;
struct HorizontalCollisionFlagComponent;
struct MoveRequestComponent;
struct MovementAbilitiesComponent;
struct OffsetsComponent;
struct OnGroundFlagComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
struct VerticalCollisionFlagComponent;
// clang-format on

struct FinalizeMoveSystem {
public:
    // FinalizeMoveSystem inner types define
    using FinalizeMoveView = ::ViewT<
        StrictEntityContext,
        const AABBShapeComponent,
        const MoveRequestComponent,
        const OffsetsComponent,
        StateVectorComponent,
        Optional<const OnGroundFlagComponent>,
        Optional<const MovementAbilitiesComponent>>;

    using FinalizeMoveModifer = ::EntityModifier<
        OnGroundFlagComponent,
        CollisionFlagComponent,
        HorizontalCollisionFlagComponent,
        VerticalCollisionFlagComponent,
        CollidableMobNearFlagComponent>;

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::TickingSystemWithInfo create();
    // NOLINTEND
};
