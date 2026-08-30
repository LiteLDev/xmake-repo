#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/actor/TempEPtr.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"
#include "mc/world/actor/ai/goal/MobDescriptor.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class PlayGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                       mSpeedModifier;
    ::ll::TypedStorage<4, 4, int>                         mMaxPlayDurationTicks;
    ::ll::TypedStorage<4, 4, float>                       mChanceToStart;
    ::ll::TypedStorage<8, 24, std::vector<MobDescriptor>> mFriendTypes;
    ::ll::TypedStorage<4, 12, ::Vec3>                     mFriendSearchArea;
    ::ll::TypedStorage<4, 4, int>                         mRandomPosSearchRange;
    ::ll::TypedStorage<4, 4, int>                         mRandomPosSearchHeight;
    ::ll::TypedStorage<4, 4, int>                         mFollowDistanceInBlocksSquared;
    ::ll::TypedStorage<4, 4, int>                         mCurrentPlayDurationTicks;
    ::ll::TypedStorage<8, 8, ::Mob&>                      mMob;
    ::ll::UntypedStorage<8, 40>                           mFollowFriend;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayGoal& operator=(PlayGoal const&);
    PlayGoal(PlayGoal const&);
    PlayGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayGoal();

    virtual bool canUse();

    virtual bool canContinueToUse();

    virtual void start();

    virtual void stop();

    virtual void tick();

    virtual void appendDebugInfo(std::string&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PlayGoal(::Mob&);
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
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canUse();

    MCNAPI bool $canContinueToUse();

    MCNAPI void $start();

    MCNAPI void $stop();

    MCNAPI void $tick();

    MCNAPI void $appendDebugInfo(std::string&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
