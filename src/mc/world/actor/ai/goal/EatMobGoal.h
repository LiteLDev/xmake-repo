#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Actor;
#else // @header-generator platform
#endif // @header-generator platform
class Mob;
class Path;
#if defined(LL_PLAT_A) // @header-generator platform
struct GoalId;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class EatMobGoal : public ::BaseGoal {
public:
    // EatMobGoal inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum State : uint {
#else // @header-generator platform
    enum class State : int {
#endif // @header-generator platform
        MoveToTarget = 0,
        EatAnimation = 1,
        Done         = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Mob&>                mMob;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>       mTargetId;
    ::ll::TypedStorage<4, 4, float>                 mRunSpeed;
    ::ll::TypedStorage<4, 4, float>                 mEatAnimationTime;
    ::ll::TypedStorage<4, 4, float>                 mPullInForce;
    ::ll::TypedStorage<4, 4, float>                 mReachMobDistance;
    ::ll::TypedStorage<8, 24, std::string>          mEatMobSound;
    ::ll::TypedStorage<8, 24, std::string>          mLootTable;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Path>> mPath;
    ::ll::TypedStorage<4, 4, ::EatMobGoal::State>   mState;
    ::ll::TypedStorage<8, 8, ::Tick>                mEatAnimationTimer;
    ::ll::TypedStorage<8, 8, ::Tick>                mLastPathCalculationTick;
    ::ll::TypedStorage<1, 1, bool>                  mShouldKillTarget;
    ::ll::TypedStorage<4, 12, ::Vec3>               mDropPos;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Mob&>                    mMob;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>           mTargetId;
    ::ll::TypedStorage<4, 4, float>                     mRunSpeed;
    ::ll::TypedStorage<4, 4, float>                     mEatAnimationTime;
    ::ll::TypedStorage<4, 4, float>                     mPullInForce;
    ::ll::TypedStorage<4, 4, float>                     mReachMobDistance;
    ::ll::TypedStorage<8, 32, ::std::string>            mEatMobSound;
    ::ll::TypedStorage<8, 32, ::std::string>            mLootTable;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Path>> mPath;
    ::ll::TypedStorage<4, 4, ::EatMobGoal::State>       mState;
    ::ll::TypedStorage<8, 8, ::Tick>                    mEatAnimationTimer;
    ::ll::TypedStorage<8, 8, ::Tick>                    mLastPathCalculationTick;
    ::ll::TypedStorage<1, 1, bool>                      mShouldKillTarget;
    ::ll::TypedStorage<4, 12, ::Vec3>                   mDropPos;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    EatMobGoal& operator=(EatMobGoal const&);
    EatMobGoal(EatMobGoal const&);
    EatMobGoal();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~EatMobGoal();
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
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EatMobGoal(::Mob&);
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
    virtual void appendDebugInfo(::std::string& str) const /*override*/;
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
