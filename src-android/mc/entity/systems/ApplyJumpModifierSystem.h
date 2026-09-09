#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"

// auto generated forward declare list
// clang-format off
class MobEffectInstance;
class StrictEntityContext;
class Vec3;
template<typename... T0> class Exclude;
template<typename... T0> class Include;
struct ActorRotationComponent;
struct JumpPendingScaleComponent;
struct JumpPreventionResult;
struct MobEffectsComponent;
struct MobIsJumpingFlagComponent;
struct MobTravelComponent;
struct MovementAttributesComponent;
struct OnGroundFlagComponent;
struct PowerJumpFlagComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
struct TriggerJumpRequestComponent;
// clang-format on

struct ApplyJumpModifierSystem {
public:
    // ApplyJumpModifierSystem inner types define
    using ViewType = ::ViewT<
        StrictEntityContext,
        Include<OnGroundFlagComponent, PowerJumpFlagComponent>,
        Exclude<MobIsJumpingFlagComponent>,
        const TriggerJumpRequestComponent,
        const ActorRotationComponent,
        const MovementAttributesComponent,
        const MobEffectsComponent,
        const MobTravelComponent,
        JumpPendingScaleComponent,
        StateVectorComponent>;

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::TickingSystemWithInfo createApplyJumpModifierSystem();

    MCNAPI static void tickApplyJumpModifierSystem(
        ::StrictEntityContext const&,
        ::TriggerJumpRequestComponent const&,
        ::ActorRotationComponent const&,
        ::MovementAttributesComponent const&,
        ::MobEffectsComponent const&,
        ::MobTravelComponent const&,
        ::JumpPendingScaleComponent&,
        ::StateVectorComponent&
    );
    // NOLINTEND
};
