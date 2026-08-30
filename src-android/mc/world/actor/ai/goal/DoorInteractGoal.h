#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Direction.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class DoorBlock;
class Mob;
class Path;
struct GoalId;
// clang-format on

class DoorInteractGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos>        mDoorPos;
    ::ll::TypedStorage<8, 8, ::DoorBlock const*> mDoorBlock;
    ::ll::TypedStorage<1, 1, bool>               mInitialToggledState;
    ::ll::TypedStorage<1, 1, bool>               mMobOversized;
    ::ll::TypedStorage<1, 1, bool>               mExited;
    ::ll::TypedStorage<4, 4, float>              mDoorOpenDirX;
    ::ll::TypedStorage<4, 4, float>              mDoorOpenDirZ;
    ::ll::UntypedStorage<1, 1>                   mEnterDirection;
    ::ll::UntypedStorage<1, 1>                   mExitDirection;
    ::ll::TypedStorage<8, 8, ::Mob&>             mMob;
    // NOLINTEND

public:
    // prevent constructor by default
    DoorInteractGoal& operator=(DoorInteractGoal const&);
    DoorInteractGoal(DoorInteractGoal const&);
    DoorInteractGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DoorInteractGoal();

    virtual bool canUse();

    virtual bool canContinueToUse();

    virtual void start();

    virtual void tick();

    virtual void appendDebugInfo(std::string&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit DoorInteractGoal(::Mob&);

    MCNAPI bool _doorBlocksPath() const;

    MCNAPI bool _mobHasExited();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::DoorBlock const*
    _findBlockingDoorAtPos(::BlockPos const&, ::Mob const&, ::Path*, ::Direction::Type&, ::Direction::Type&);
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

    MCNAPI void $tick();

    MCNAPI void $appendDebugInfo(std::string&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
