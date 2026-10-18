#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/TempEPtr.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"

// auto generated forward declare list
// clang-format off
class Mob;
class NavigationComponent;
class Player;
#if defined(LL_PLAT_A) // @header-generator platform
class Vec3;
#else // @header-generator platform
#endif // @header-generator platform
struct DimensionType;
#if defined(LL_PLAT_A) // @header-generator platform
struct GoalId;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class FollowOwnerGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Mob&> mMob;
    ::ll::UntypedStorage<8, 40>      mOwner;
    ::ll::TypedStorage<4, 4, int>    mTimeToRecalculatePath;
    ::ll::TypedStorage<4, 4, float>  mSpeed;
    ::ll::TypedStorage<4, 4, float>  mStartDistance;
    ::ll::TypedStorage<4, 4, float>  mStopDistance;
    ::ll::TypedStorage<4, 4, float>  mMaxDistance;
    ::ll::TypedStorage<1, 1, bool>   mOldAvoidWater;
    ::ll::TypedStorage<1, 1, bool>   mOldAvoidPortals;
    ::ll::TypedStorage<1, 1, bool>   mCanTeleport;
    ::ll::TypedStorage<1, 1, bool>   mIgnoreVibrations;
    ::ll::TypedStorage<4, 4, int>    mPostTeleportDistance;
    ::ll::TypedStorage<1, 1, bool>   mRandomizeAndCheckForClearanceWhenTeleporting;
    ::ll::TypedStorage<1, 1, bool>   mKeepFollowingAfterTeleporting;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Mob&>             mMob;
    ::ll::TypedStorage<8, 40, ::TempEPtr<::Mob>> mOwner;
    ::ll::TypedStorage<4, 4, int>                mTimeToRecalculatePath;
    ::ll::TypedStorage<4, 4, float>              mSpeed;
    ::ll::TypedStorage<4, 4, float>              mStartDistance;
    ::ll::TypedStorage<4, 4, float>              mStopDistance;
    ::ll::TypedStorage<4, 4, float>              mMaxDistance;
    ::ll::TypedStorage<1, 1, bool>               mOldAvoidWater;
    ::ll::TypedStorage<1, 1, bool>               mOldAvoidPortals;
    ::ll::TypedStorage<1, 1, bool>               mCanTeleport;
    ::ll::TypedStorage<1, 1, bool>               mIgnoreVibrations;
    ::ll::TypedStorage<4, 4, int>                mPostTeleportDistance;
    ::ll::TypedStorage<1, 1, bool>               mRandomizeAndCheckForClearanceWhenTeleporting;
    ::ll::TypedStorage<1, 1, bool>               mKeepFollowingAfterTeleporting;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    FollowOwnerGoal& operator=(FollowOwnerGoal const&);
    FollowOwnerGoal(FollowOwnerGoal const&);
    FollowOwnerGoal();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~FollowOwnerGoal();
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
#else // @header-generator platform
    virtual void appendDebugInfo(::std::string& str) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void appendDebugInfo(std::string&) const;

    virtual void onPlayerDimensionChanged(::Player*, ::DimensionType, ::DimensionType);
#else // @header-generator platform
    virtual void
    onPlayerDimensionChanged(::Player* player, ::DimensionType fromDimension, ::DimensionType toDimension) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit FollowOwnerGoal(::Mob&);
#else // @header-generator platform
    MCAPI explicit FollowOwnerGoal(::Mob& mob);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _canReachOwner(::Mob&, ::NavigationComponent&) const;
#else // @header-generator platform
    MCAPI bool _canReachOwner(::Mob& owner, ::NavigationComponent& navigationComponent) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _tryToTeleport(::Mob&) const;
#else // @header-generator platform
    MCAPI void _tryToTeleport(::Mob& owner) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Mob&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::Mob& mob);
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

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onPlayerDimensionChanged(::Player*, ::DimensionType, ::DimensionType);
#else // @header-generator platform
    MCAPI void $onPlayerDimensionChanged(::Player* player, ::DimensionType fromDimension, ::DimensionType toDimension);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
