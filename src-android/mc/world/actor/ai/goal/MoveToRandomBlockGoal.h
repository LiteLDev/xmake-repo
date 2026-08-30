#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class Mob;
// clang-format on

class MoveToRandomBlockGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>  mMob;
    ::ll::TypedStorage<4, 12, ::Vec3> mDestination;
    ::ll::TypedStorage<4, 12, ::Vec3> mLastPos;
    ::ll::TypedStorage<4, 4, int>     mFailedPathing;
    ::ll::TypedStorage<4, 4, int>     mTotalFailedPathing;
    ::ll::TypedStorage<4, 4, float>   mSpeedModifier;
    ::ll::TypedStorage<4, 4, float>   mRadiusSq;
    ::ll::TypedStorage<4, 4, float>   mBlockDistance;
    ::ll::TypedStorage<4, 4, int>     mCooldownTimer;
    // NOLINTEND

public:
    // prevent constructor by default
    MoveToRandomBlockGoal& operator=(MoveToRandomBlockGoal const&);
    MoveToRandomBlockGoal(MoveToRandomBlockGoal const&);
    MoveToRandomBlockGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MoveToRandomBlockGoal();

    virtual bool canUse();

    virtual bool canContinueToUse();

    virtual void start();

    virtual void stop();

    virtual void tick();

    virtual void appendDebugInfo(std::string&) const;
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
