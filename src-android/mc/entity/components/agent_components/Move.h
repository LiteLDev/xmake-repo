#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/actor/agent/agent_components/Direction.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

namespace AgentComponents {

class Move {
public:
    // Move inner types declare
    // clang-format off
    class Definition;
    // clang-format on

    // Move inner types define
    class Definition {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::AgentComponents::Direction> mDir;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                         mStoppedTicks;
    ::ll::TypedStorage<1, 1, ::AgentComponents::Direction> mDir;
    ::ll::TypedStorage<4, 8, ::Vec2>                       mXZGoalPosition;
    ::ll::TypedStorage<4, 4, float>                        mYGoalPosition;
    ::ll::TypedStorage<4, 12, ::Vec3>                      mIdealMovementVector;
    // NOLINTEND

public:
    // prevent constructor by default
    Move& operator=(Move const&);
    Move(Move const&);

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void setup(::AgentComponents::Move&, ::EntityContext&, ::AgentComponents::Direction);
    // NOLINTEND
};

} // namespace AgentComponents
