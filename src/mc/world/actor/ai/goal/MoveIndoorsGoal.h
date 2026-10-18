#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseGoal.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/Tick.h"
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class MoveIndoorsGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>        mUsingPOI;
    ::ll::TypedStorage<1, 1, bool>        mPathingInvalid;
    ::ll::TypedStorage<4, 12, ::BlockPos> mInsidePos;
    ::ll::TypedStorage<4, 12, ::BlockPos> mStartPos;
    ::ll::TypedStorage<4, 24, ::AABB>     mPOIBoundingBox;
    ::ll::TypedStorage<8, 8, ::Tick>      mCooldownTimer;
    ::ll::TypedStorage<8, 8, ::Mob&>      mMob;
    ::ll::TypedStorage<8, 8, ::Tick>      mTimeoutCooldown;
    ::ll::TypedStorage<4, 4, float>       mSpeedModifier;
    // NOLINTEND

public:
    // prevent constructor by default
    MoveIndoorsGoal& operator=(MoveIndoorsGoal const&);
    MoveIndoorsGoal(MoveIndoorsGoal const&);
    MoveIndoorsGoal();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~MoveIndoorsGoal();
#else // @header-generator platform
    virtual bool canUse() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canUse();
#else // @header-generator platform
    virtual bool canContinueToUse() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canContinueToUse();
#else // @header-generator platform
    virtual void start() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void start();
#else // @header-generator platform
    virtual void stop() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void stop();
#else // @header-generator platform
    virtual void tick() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tick();

    virtual void appendDebugInfo(std::string&) const;
#else // @header-generator platform
    virtual void appendDebugInfo(::std::string& str) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit MoveIndoorsGoal(::Mob&);

    MCNAPI void _startPathfinding();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Mob&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void _startPathfinding();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canUse();
#else // @header-generator platform
    MCAPI bool $canUse();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canContinueToUse();
#else // @header-generator platform
    MCAPI bool $canContinueToUse();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $start();
#else // @header-generator platform
    MCAPI void $start();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $stop();
#else // @header-generator platform
    MCAPI void $stop();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $tick();
#else // @header-generator platform
    MCAPI void $tick();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $appendDebugInfo(std::string&) const;
#else // @header-generator platform
    MCAPI void $appendDebugInfo(::std::string& str) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
