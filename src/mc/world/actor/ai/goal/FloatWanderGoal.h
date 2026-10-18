#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/util/FloatRange.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BlockSource;
#else // @header-generator platform
#endif // @header-generator platform
class Mob;
class Random;
#if defined(LL_PLAT_A) // @header-generator platform
struct GoalId;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class FloatWanderGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>       mMob;
    ::ll::TypedStorage<4, 12, ::Vec3>      mTargetPos;
    ::ll::TypedStorage<4, 4, int>          mFloatDuration;
    ::ll::TypedStorage<4, 4, float>        mTargetXZDist;
    ::ll::TypedStorage<4, 4, float>        mTargetYDist;
    ::ll::TypedStorage<4, 4, float>        mSurfaceXZDist;
    ::ll::TypedStorage<4, 4, float>        mSurfaceYDist;
    ::ll::TypedStorage<4, 4, float>        mYOffset;
    ::ll::TypedStorage<1, 1, bool>         mMustReach;
    ::ll::TypedStorage<1, 1, bool>         mRandomReselect;
    ::ll::TypedStorage<1, 1, bool>         mUseHomePositionRestriction;
    ::ll::TypedStorage<1, 1, bool>         mAdditionalCollisionBuffer;
    ::ll::TypedStorage<1, 1, bool>         mAllowNavigatingThroughLiquids;
    ::ll::TypedStorage<1, 1, bool>         mNavigateAroundSurface;
    ::ll::TypedStorage<4, 8, ::FloatRange> mFloatDurationRange;
    // NOLINTEND

public:
    // prevent constructor by default
    FloatWanderGoal& operator=(FloatWanderGoal const&);
    FloatWanderGoal(FloatWanderGoal const&);
    FloatWanderGoal();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~FloatWanderGoal();
#else // @header-generator platform
    virtual bool canUse() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canUse();
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
    MCNAPI explicit FloatWanderGoal(::Mob&);
#else // @header-generator platform
    MCAPI bool _canReach(::Vec3 const& targetPos, float dist) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _canReach(::Vec3 const&, float) const;

    MCNAPI ::Vec3 _chooseRandomPosition(::Vec3 const&, ::Random&);
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
    MCAPI ::Vec3 _chooseRandomPosition(::Vec3 const& mobPos, ::Random& random);
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
