#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/level/Tick.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class Actor;
class Vec3;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
class EntitySubsensor {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 8, ::Vec2>               mRange;
    ::ll::TypedStorage<4, 4, float>                mYOffset;
    ::ll::TypedStorage<1, 1, bool>                 mRequireAll;
    ::ll::TypedStorage<4, 4, int>                  mMinimumCount;
    ::ll::TypedStorage<4, 4, int>                  mMaximumCount;
    ::ll::TypedStorage<8, 8, ulong>                mCooldownInTicks;
    ::ll::TypedStorage<8, 24, std::string>         mEvent;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>  mFilter;
    ::ll::TypedStorage<8, 16, std::optional<Tick>> mNextSensingTick;
#else // @header-generator platform
    ::ll::TypedStorage<4, 8, ::Vec2>                   mRange;
    ::ll::TypedStorage<4, 4, float>                    mYOffset;
    ::ll::TypedStorage<1, 1, bool>                     mRequireAll;
    ::ll::TypedStorage<4, 4, int>                      mMinimumCount;
    ::ll::TypedStorage<4, 4, int>                      mMaximumCount;
    ::ll::TypedStorage<8, 8, uint64>                   mCooldownInTicks;
    ::ll::TypedStorage<8, 32, ::std::string>           mEvent;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>      mFilter;
    ::ll::TypedStorage<8, 16, ::std::optional<::Tick>> mNextSensingTick;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    EntitySubsensor& operator=(EntitySubsensor const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    EntitySubsensor();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~EntitySubsensor();
#else // @header-generator platform
    MCAPI EntitySubsensor(::EntitySubsensor const&);
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // static variables
#else // @header-generator platform
    // constructor thunks
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int const& NO_MAX_COUNT();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::EntitySubsensor const&);
#endif // @header-generator platform
    // NOLINTEND
};
