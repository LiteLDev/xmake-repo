#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/TempEPtr.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Mob;
class Path;
#if defined(LL_PLAT_A) // @header-generator platform
struct GoalId;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class FindMountGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 40>                     mTarget;
    ::ll::TypedStorage<4, 4, float>                 mTargetDist;
    ::ll::TypedStorage<4, 4, int>                   mTimeToRecalcPath;
    ::ll::TypedStorage<4, 4, int>                   mStartCounter;
    ::ll::TypedStorage<4, 4, int>                   mStartDelay;
    ::ll::TypedStorage<1, 1, bool>                  mAvoidWater;
    ::ll::TypedStorage<1, 1, bool>                  mTargetNeeded;
    ::ll::TypedStorage<4, 4, float>                 mMountDistance;
    ::ll::TypedStorage<4, 4, int>                   mFailedAttemptsCounter;
    ::ll::TypedStorage<4, 4, int>                   mMaxFailedAttempts;
    ::ll::TypedStorage<8, 8, ::Mob&>                mMob;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Path>> mPath;
#else // @header-generator platform
    ::ll::TypedStorage<8, 40, ::TempEPtr<::Actor>>      mTarget;
    ::ll::TypedStorage<4, 4, float>                     mTargetDist;
    ::ll::TypedStorage<4, 4, int>                       mTimeToRecalcPath;
    ::ll::TypedStorage<4, 4, int>                       mStartCounter;
    ::ll::TypedStorage<4, 4, int>                       mStartDelay;
    ::ll::TypedStorage<1, 1, bool>                      mAvoidWater;
    ::ll::TypedStorage<1, 1, bool>                      mTargetNeeded;
    ::ll::TypedStorage<4, 4, float>                     mMountDistance;
    ::ll::TypedStorage<4, 4, int>                       mFailedAttemptsCounter;
    ::ll::TypedStorage<4, 4, int>                       mMaxFailedAttempts;
    ::ll::TypedStorage<8, 8, ::Mob&>                    mMob;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Path>> mPath;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    FindMountGoal& operator=(FindMountGoal const&);
    FindMountGoal(FindMountGoal const&);
    FindMountGoal();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~FindMountGoal();
#else // @header-generator platform
    virtual ~FindMountGoal() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canUse();
#else // @header-generator platform
    virtual bool canUse() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canContinueToUse();
#else // @header-generator platform
    virtual bool canContinueToUse() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void start();
#else // @header-generator platform
    virtual void start() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void stop();
#else // @header-generator platform
    virtual void stop() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tick();
#else // @header-generator platform
    virtual void tick() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void appendDebugInfo(std::string&) const;
#else // @header-generator platform
    virtual void appendDebugInfo(::std::string& str) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit FindMountGoal(::Mob&);

    MCNAPI bool isInMountRange();
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
    MCAPI bool isInMountRange();
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
