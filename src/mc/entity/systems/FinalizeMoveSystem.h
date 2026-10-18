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
#if defined(LL_PLAT_A) // @header-generator platform
    using FinalizeMoveView = ::ViewT<
        StrictEntityContext,
        const AABBShapeComponent,
        const MoveRequestComponent,
        const OffsetsComponent,
        StateVectorComponent,
        Optional<const OnGroundFlagComponent>,
        Optional<const MovementAbilitiesComponent>>;

#else // @header-generator platform
#endif // @header-generator platform
    using FinalizeMoveModifer = ::EntityModifier<
#if defined(LL_PLAT_A) // @header-generator platform
        OnGroundFlagComponent,
        CollisionFlagComponent,
        HorizontalCollisionFlagComponent,
        VerticalCollisionFlagComponent,
        CollidableMobNearFlagComponent>;
#else // @header-generator platform
        ::OnGroundFlagComponent,
        ::CollisionFlagComponent,
        ::HorizontalCollisionFlagComponent,
        ::VerticalCollisionFlagComponent,
        ::CollidableMobNearFlagComponent>;

    using FinalizeMoveView = ::ViewT<
        ::StrictEntityContext,
        ::AABBShapeComponent const,
        ::MoveRequestComponent const,
        ::OffsetsComponent const,
        ::StateVectorComponent,
        ::Optional<::OnGroundFlagComponent const>,
        ::Optional<::MovementAbilitiesComponent const>>;
#endif // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo create();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo create();
#endif // @header-generator platform
    // NOLINTEND
};
