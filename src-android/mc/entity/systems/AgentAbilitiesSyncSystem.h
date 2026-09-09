#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class LevelComponent;
class StrictEntityContext;
template<typename... T0> class Include;
struct AbilitiesDirtyComponent;
struct ActorTickedComponent;
struct PlayerComponent;
struct TickingSystemWithInfo;
// clang-format on

class AgentAbilitiesSyncSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::TickingSystemWithInfo createAgentAbilitiesSyncSystem();
    // NOLINTEND
};
