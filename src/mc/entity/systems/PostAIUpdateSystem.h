#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/ecs/ViewT.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
#if defined(LL_PLAT_A) // @header-generator platform
template<typename... T0> class Exclude;
template<typename... T0> class Include;
struct ActorMovementTickNeededComponent;
struct IsDeadFlagComponent;
struct MobFlagComponent;
struct MobIsImmobileFlagComponent;
#else // @header-generator platform
#endif // @header-generator platform
struct NoActionTimeComponent;
struct OnGroundFlagComponent;
struct TickingSystemWithInfo;
struct WasOnGroundFlagComponent;
// clang-format on

class PostAIUpdateSystem {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createSystem();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createSystem();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void doPostAiUpdate(
        ::StrictEntityContext&,
        ::Optional<const OnGroundFlagComponent>,
        ::NoActionTimeComponent&,
        ::EntityModifier<WasOnGroundFlagComponent>
#else // @header-generator platform
    MCAPI static void doPostAiUpdate(
        ::StrictEntityContext&                       entity,
        ::Optional<::OnGroundFlagComponent const>    onGround,
        ::NoActionTimeComponent&                     noActionTime,
        ::EntityModifier<::WasOnGroundFlagComponent> mod
#endif // @header-generator platform
    );
    // NOLINTEND
};
