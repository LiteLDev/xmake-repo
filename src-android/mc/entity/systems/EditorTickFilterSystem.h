#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class ActorTickNeededComponent;
class StrictEntityContext;
template<typename... T0> class Include;
struct EditorActorPauseTickNeededComponent;
struct EditorActorPausedComponent;
struct TickingSystemWithInfo;
// clang-format on

struct EditorTickFilterSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::TickingSystemWithInfo createAddPauseTickNeeded();

    MCNAPI static ::TickingSystemWithInfo createRemoveActorTickNeeded();
    // NOLINTEND
};
