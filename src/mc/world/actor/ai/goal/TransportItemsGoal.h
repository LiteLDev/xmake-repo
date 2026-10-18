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
#if defined(LL_PLAT_A) // @header-generator platform
class AABB;
class BlockSource;
#else // @header-generator platform
#endif // @header-generator platform
class Mob;
#if defined(LL_PLAT_A) // @header-generator platform
class Vec3;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class TransportItemsGoal : public ::BaseGoal {
public:
    // TransportItemsGoal inner types declare
    // clang-format off
    class ContainerCloser;
    // clang-format on

    // TransportItemsGoal inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class State : int {
        Idle        = 0,
        Travelling  = 1,
        Queuing     = 2,
        Interacting = 3,
    };

#else // @header-generator platform
#endif // @header-generator platform
    enum class Event : int {
        StartTakeInteractionWillFail     = 0,
        StartTakeInteractionWillSucceed  = 1,
        StartPlaceInteractionWillFail    = 2,
        StartPlaceInteractionWillSucceed = 3,
        FinishedInteraction              = 4,
    };

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    enum class State : int {
        Idle        = 0,
        Travelling  = 1,
        Queuing     = 2,
        Interacting = 3,
    };

#endif // @header-generator platform
    class ContainerCloser {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<8, 16> mChestCloser;
#else // @header-generator platform
        ::ll::TypedStorage<8, 16, ::std::weak_ptr<::ChestBlockActor::ChestCloser>> mChestCloser;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        ContainerCloser();
#else // @header-generator platform
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Mob&>                                                  mMob;
    ::ll::TypedStorage<8, 136, ::TransportItemsGoalSettings>                          mSettings;
    ::ll::TypedStorage<4, 4, ::TransportItemsGoal::State>                             mState;
    ::ll::TypedStorage<4, 4, uint>                                                    mCountedPositions;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockPos>>                              mVisitedPositions;
    ::ll::TypedStorage<8, 16, ::std::optional<::Tick>>                                mInteractEndTick;
    ::ll::TypedStorage<8, 16, ::std::optional<::Tick>>                                mCooldownEndTick;
    ::ll::TypedStorage<4, 16, ::std::optional<::BlockPos>>                            mTargetContainerPosition;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                                   mWasHoldingItemLastTick;
    ::ll::TypedStorage<8, 24, ::std::optional<::TransportItemsGoal::ContainerCloser>> mContainerCloser;
    ::ll::TypedStorage<1, 1, bool>                                                    mCheckLineOfSight;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    TransportItemsGoal& operator=(TransportItemsGoal const&);
    TransportItemsGoal(TransportItemsGoal const&);
    TransportItemsGoal();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~TransportItemsGoal();
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
    MCNAPI explicit TransportItemsGoal(::Mob&);
#else // @header-generator platform
    MCAPI bool _canSeeTarget(::BlockPos const& targetPosition) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _canSeeTarget(::BlockPos const&) const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI void _executeEvent(::TransportItemsGoal::Event event) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Mob&);
    // NOLINTEND
#else // @header-generator platform
    MCAPI void _reset();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void _startCooldown();
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
