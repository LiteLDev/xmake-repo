#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class DimensionStateComponent;
class LoadingStateComponent;
class StrictEntityContext;
template<typename... T0> class Include;
struct ActorMovementTickNeededComponent;
struct InterpolateMovementNeededComponent;
struct LocalPlayerComponent;
struct PlayerComponent;
struct SkipNormalTickComponent;
#else // @header-generator platform
#endif // @header-generator platform
struct TickingSystemWithInfo;
// clang-format on

struct NormalTickFilterSystem {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createGenericSystem();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createGenericSystem();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createLocalPlayerSystem();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createLocalPlayerSystem();
#endif // @header-generator platform
    // NOLINTEND
};
