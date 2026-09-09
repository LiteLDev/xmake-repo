#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/world/actor/ActorFilterGroup.h"

// auto generated forward declare list
// clang-format off
class EntitySubsensor;
// clang-format on

struct EntitySubsensorDescriptor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::Vec2>              mRange;
    ::ll::TypedStorage<4, 4, float>               mYOffset;
    ::ll::TypedStorage<1, 1, bool>                mRequireAll;
    ::ll::TypedStorage<4, 4, int>                 mMinimumCount;
    ::ll::TypedStorage<4, 4, int>                 mMaximumCount;
    ::ll::TypedStorage<4, 4, float>               mCooldownInSeconds;
    ::ll::TypedStorage<8, 24, std::string>        mEvent;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup> mFilter;
    // NOLINTEND

public:
    // prevent constructor by default
    EntitySubsensorDescriptor& operator=(EntitySubsensorDescriptor const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~EntitySubsensorDescriptor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
