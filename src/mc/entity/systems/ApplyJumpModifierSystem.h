#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/ecs/strict/Exclude.h"
#include "mc/deps/ecs/strict/Include.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class MobEffectInstance;
#else // @header-generator platform
#endif // @header-generator platform
class StrictEntityContext;
#if defined(LL_PLAT_A) // @header-generator platform
class Vec3;
template<typename... T0> class Exclude;
template<typename... T0> class Include;
#else // @header-generator platform
#endif // @header-generator platform
struct ActorRotationComponent;
struct JumpPendingScaleComponent;
#if defined(LL_PLAT_A) // @header-generator platform
struct JumpPreventionResult;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
        ::StrictEntityContext,
        ::Include<::OnGroundFlagComponent, ::PowerJumpFlagComponent>,
        ::Exclude<::MobIsJumpingFlagComponent>,
        ::TriggerJumpRequestComponent const,
        ::ActorRotationComponent const,
        ::MovementAttributesComponent const,
        ::MobEffectsComponent const,
        ::MobTravelComponent const,
        ::JumpPendingScaleComponent,
        ::StateVectorComponent>;
#endif // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createApplyJumpModifierSystem();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createApplyJumpModifierSystem();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void tickApplyJumpModifierSystem(
#else // @header-generator platform
    MCAPI static void tickApplyJumpModifierSystem(
#endif // @header-generator platform
        ::StrictEntityContext const&,
#if defined(LL_PLAT_A) // @header-generator platform
        ::TriggerJumpRequestComponent const&,
        ::ActorRotationComponent const&,
        ::MovementAttributesComponent const&,
        ::MobEffectsComponent const&,
        ::MobTravelComponent const&,
        ::JumpPendingScaleComponent&,
        ::StateVectorComponent&
#else // @header-generator platform
        ::TriggerJumpRequestComponent const& triggerJumpRequestComponent,
        ::ActorRotationComponent const&      actorRotationComponent,
        ::MovementAttributesComponent const& attributesComponent,
        ::MobEffectsComponent const&         mobEffectsComponent,
        ::MobTravelComponent const&          mobTravelComponent,
        ::JumpPendingScaleComponent&         jumpPendingScaleComponent,
        ::StateVectorComponent&              stateVectorComponent
#endif // @header-generator platform
    );
    // NOLINTEND
};
