#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/TempEPtr.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/actor/ai/goal/MobDescriptor.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class Actor;
class Mob;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct MobDescriptor;
#endif // @header-generator platform
// clang-format on

class SwimWithEntityGoal : public ::BaseGoal {
public:
    // SwimWithEntityGoal inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum EntityGoals : uint {
        CATCH_UP_TO_ENTITY     = 0,
        MATCH_ENTITY_DIRECTION = 1,
#else // @header-generator platform
    enum class EntityGoals : int {
        CatchUpToEntity      = 0,
        MatchEntityDirection = 1,
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>                            mMob;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 40>                                 mFollowing;
#else // @header-generator platform
    ::ll::TypedStorage<8, 40, ::TempEPtr<::Actor>>              mFollowing;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                               mIntervalRefreshTicks;
    ::ll::TypedStorage<4, 4, int>                               mIntervalTicks;
    ::ll::TypedStorage<4, 4, float>                             mChanceToStop;
    ::ll::TypedStorage<4, 4, float>                             mSuccessRate;
    ::ll::TypedStorage<4, 4, float>                             mCatchUpThreshold;
    ::ll::TypedStorage<4, 4, float>                             mMatchDirectionThreshold;
    ::ll::TypedStorage<4, 4, float>                             mCatchUpMultiplier;
    ::ll::TypedStorage<4, 4, float>                             mSpeedMultiplier;
    ::ll::TypedStorage<4, 4, float>                             mSearchRange;
    ::ll::TypedStorage<4, 4, float>                             mStopDistance;
    ::ll::TypedStorage<4, 4, ::SwimWithEntityGoal::EntityGoals> mCurrentGoal;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<MobDescriptor>>       mTargetTypes;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::MobDescriptor>>   mTargetTypes;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    SwimWithEntityGoal& operator=(SwimWithEntityGoal const&);
    SwimWithEntityGoal(SwimWithEntityGoal const&);
    SwimWithEntityGoal();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~SwimWithEntityGoal();
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
    virtual bool canBeInterrupted() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canBeInterrupted();
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
    MCNAPI bool _setWantedMob();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI bool _setWantedMob();
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
    MCNAPI bool $canBeInterrupted();
#else // @header-generator platform
    MCFOLD bool $canBeInterrupted();
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
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $appendDebugInfo(::std::string& str) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
