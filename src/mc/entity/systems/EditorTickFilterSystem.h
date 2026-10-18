#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/ecs/ViewT.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class ActorTickNeededComponent;
class StrictEntityContext;
#if defined(LL_PLAT_A) // @header-generator platform
template<typename... T0> class Include;
#else // @header-generator platform
#endif // @header-generator platform
struct EditorActorPauseTickNeededComponent;
#if defined(LL_PLAT_A) // @header-generator platform
struct EditorActorPausedComponent;
#else // @header-generator platform
#endif // @header-generator platform
struct TickingSystemWithInfo;
// clang-format on

struct EditorTickFilterSystem {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createAddPauseTickNeeded();
#else // @header-generator platform
    MCAPI static void _addPauseTickNeeded(
        ::StrictEntityContext& entity,
        ::ActorTickNeededComponent&,
        ::EntityModifier<::EditorActorPauseTickNeededComponent>& modifier
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createRemoveActorTickNeeded();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createAddPauseTickNeeded();

    MCAPI static ::TickingSystemWithInfo createRemoveActorTickNeeded();
#endif // @header-generator platform
    // NOLINTEND
};
