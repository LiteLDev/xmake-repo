#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/actor/agent/agent_components/Direction.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<1, 1, ::AgentComponents::Direction> mDir;
#else // @header-generator platform
        ::ll::UntypedStorage<1, 1> mUnka9e131;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        Definition& operator=(Definition const&);
        Definition(Definition const&);
        Definition();
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, uint>                         mStoppedTicks;
    ::ll::TypedStorage<1, 1, ::AgentComponents::Direction> mDir;
    ::ll::TypedStorage<4, 8, ::Vec2>                       mXZGoalPosition;
    ::ll::TypedStorage<4, 4, float>                        mYGoalPosition;
    ::ll::TypedStorage<4, 12, ::Vec3>                      mIdealMovementVector;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4>  mUnk7fcffc;
    ::ll::UntypedStorage<1, 1>  mUnk69ab68;
    ::ll::UntypedStorage<4, 8>  mUnk391dee;
    ::ll::UntypedStorage<4, 4>  mUnk7ccd6f;
    ::ll::UntypedStorage<4, 12> mUnk88eb9e;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    Move& operator=(Move const&);
    Move(Move const&);
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void setup(::AgentComponents::Move&, ::EntityContext&, ::AgentComponents::Direction);
    // NOLINTEND
#else // @header-generator platform
    Move();
#endif // @header-generator platform
};

} // namespace AgentComponents
