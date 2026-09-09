#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class DimensionStateComponent;
class LoadingStateComponent;
class StrictEntityContext;
template<typename... T0> class Include;
struct ActorMovementTickNeededComponent;
struct InterpolateMovementNeededComponent;
struct LocalPlayerComponent;
struct PlayerComponent;
struct SkipNormalTickComponent;
struct TickingSystemWithInfo;
// clang-format on

struct NormalTickFilterSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::TickingSystemWithInfo createGenericSystem();

    MCNAPI static ::TickingSystemWithInfo createLocalPlayerSystem();
    // NOLINTEND
};
