#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseGoal.h"
#include "mc/world/actor/ai/goal/TransportItemsGoalSettings.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/Tick.h"
#include "mc/world/level/block/actor/ChestBlockActor.h"

// auto generated forward declare list
// clang-format off
class AABB;
class BlockSource;
class Mob;
class Vec3;
// clang-format on

class TransportItemsGoal : public ::BaseGoal {
public:
    // TransportItemsGoal inner types declare
    // clang-format off
    class ContainerCloser;
    // clang-format on

    // TransportItemsGoal inner types define
    enum class State : int {
        Idle        = 0,
        Travelling  = 1,
        Queuing     = 2,
        Interacting = 3,
    };

    enum class Event : int {
        StartTakeInteractionWillFail     = 0,
        StartTakeInteractionWillSucceed  = 1,
        StartPlaceInteractionWillFail    = 2,
        StartPlaceInteractionWillSucceed = 3,
        FinishedInteraction              = 4,
    };

    class ContainerCloser {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mChestCloser;
        // NOLINTEND

    public:
        // prevent constructor by default
        ContainerCloser();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>                                              mMob;
    ::ll::TypedStorage<8, 136, ::TransportItemsGoalSettings>                      mSettings;
    ::ll::TypedStorage<4, 4, ::TransportItemsGoal::State>                         mState;
    ::ll::TypedStorage<4, 4, uint>                                                mCountedPositions;
    ::ll::TypedStorage<8, 24, std::vector<BlockPos>>                              mVisitedPositions;
    ::ll::TypedStorage<8, 16, std::optional<Tick>>                                mInteractEndTick;
    ::ll::TypedStorage<8, 16, std::optional<Tick>>                                mCooldownEndTick;
    ::ll::TypedStorage<4, 16, std::optional<BlockPos>>                            mTargetContainerPosition;
    ::ll::TypedStorage<1, 2, std::optional<bool>>                                 mWasHoldingItemLastTick;
    ::ll::TypedStorage<8, 24, std::optional<TransportItemsGoal::ContainerCloser>> mContainerCloser;
    ::ll::TypedStorage<1, 1, bool>                                                mCheckLineOfSight;
    // NOLINTEND

public:
    // prevent constructor by default
    TransportItemsGoal& operator=(TransportItemsGoal const&);
    TransportItemsGoal(TransportItemsGoal const&);
    TransportItemsGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TransportItemsGoal();

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
    MCNAPI explicit TransportItemsGoal(::Mob&);

    MCNAPI bool _canSeeTarget(::BlockPos const&) const;
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
