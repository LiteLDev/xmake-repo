#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
template<typename... T0> class Exclude;
template<typename... T0> class Include;
struct ActorMovementTickNeededComponent;
struct IsDeadFlagComponent;
struct MobFlagComponent;
struct MobIsImmobileFlagComponent;
struct NoActionTimeComponent;
struct OnGroundFlagComponent;
struct TickingSystemWithInfo;
struct WasOnGroundFlagComponent;
// clang-format on

class PostAIUpdateSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::TickingSystemWithInfo createSystem();

    MCNAPI static void doPostAiUpdate(
        ::StrictEntityContext&,
        ::Optional<const OnGroundFlagComponent>,
        ::NoActionTimeComponent&,
        ::EntityModifier<WasOnGroundFlagComponent>
    );
    // NOLINTEND
};
