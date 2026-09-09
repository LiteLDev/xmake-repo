#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Vec3;
// clang-format on

class EntitySubsensor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::Vec2>               mRange;
    ::ll::TypedStorage<4, 4, float>                mYOffset;
    ::ll::TypedStorage<1, 1, bool>                 mRequireAll;
    ::ll::TypedStorage<4, 4, int>                  mMinimumCount;
    ::ll::TypedStorage<4, 4, int>                  mMaximumCount;
    ::ll::TypedStorage<8, 8, ulong>                mCooldownInTicks;
    ::ll::TypedStorage<8, 24, std::string>         mEvent;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>  mFilter;
    ::ll::TypedStorage<8, 16, std::optional<Tick>> mNextSensingTick;
    // NOLINTEND

public:
    // prevent constructor by default
    EntitySubsensor& operator=(EntitySubsensor const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~EntitySubsensor();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& NO_MAX_COUNT();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
