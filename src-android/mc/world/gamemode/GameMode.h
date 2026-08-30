#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/input/InputMode.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class HitResult;
class InteractionResult;
class ItemStack;
class Player;
struct IGameModeMessenger;
struct IGameModeTimer;
// clang-format on

class GameMode {
public:
    // GameMode inner types declare
    // clang-format off
    struct BuildContext;
    struct BuildDelay;
    struct ContinueBuildData;
    struct BuildPlayerContext;
    // clang-format on

    // GameMode inner types define
    struct BuildContext {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>        mHasBuildDirection;
        ::ll::TypedStorage<1, 1, bool>        mHasLastBuiltPosition;
        ::ll::TypedStorage<1, 1, bool>        mLastBuildBlockWasInteractive;
        ::ll::TypedStorage<1, 1, bool>        mLastBuildBlockAlignedPlacement;
        ::ll::TypedStorage<1, 1, bool>        mLastBuildBlockHadSuccessfulUse;
        ::ll::TypedStorage<4, 12, ::BlockPos> mLastBuiltBlockPosition;
        ::ll::TypedStorage<4, 12, ::BlockPos> mBuildDirection;
        ::ll::TypedStorage<4, 12, ::BlockPos> mNextBuildPos;
        ::ll::TypedStorage<4, 12, ::Vec3>     mInitialClickPos;
        ::ll::TypedStorage<1, 1, uchar>       mContinueFacing;
        // NOLINTEND
    };

    struct BuildDelay {
    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<1, 1, bool> mHasDelayElapsed;
        ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mNewLastBuildTimeIfBlockIsBuilt;
        // clang-format on
        // NOLINTEND
    };

    struct ContinueBuildData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::BlockPos const> mHit;
        ::ll::TypedStorage<1, 1, uchar const>       mFacing;
        // NOLINTEND
    };

    struct BuildPlayerContext {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::Vec3> mPosDelta;
        ::ll::TypedStorage<1, 1, bool>    mIsSneaking;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, ::Player&> mPlayer;
    ::ll::TypedStorage<4, 12, ::BlockPos> mDestroyBlockPos;
    ::ll::TypedStorage<1, 1, uchar> mDestroyBlockFace;
    ::ll::TypedStorage<4, 4, float> mOldDestroyProgress;
    ::ll::TypedStorage<4, 4, float> mDestroyProgress;
    ::ll::TypedStorage<8, 8, double> mLastDestroyTime;
    ::ll::TypedStorage<4, 4, float> mDistanceTravelled;
    ::ll::TypedStorage<4, 12, ::Vec3> mPlayerLastPosition;
    ::ll::TypedStorage<4, 60, ::GameMode::BuildContext> mBuildContext;
    ::ll::TypedStorage<4, 4, float> mMinPlayerSpeed;
    ::ll::TypedStorage<4, 4, int> mContinueBreakBlockCount;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastBuildTime;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mNoDestroyUntil;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mNoDestroySoundUntil;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000>>> creativeDestructionTickDelay;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000>>> buildingTickDelay;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000>>> destroySoundDelay;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IGameModeTimer>> mTimer;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IGameModeMessenger>> mMessenger;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    GameMode& operator=(GameMode const&);
    GameMode(GameMode const&);
    GameMode();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~GameMode();

    virtual bool startDestroyBlock(::BlockPos const&, uchar, bool&);

    virtual bool destroyBlock(::BlockPos const&, uchar);

    virtual bool continueDestroyBlock(::BlockPos const&, uchar, ::Vec3 const&, bool&);

    virtual void stopDestroyBlock(::BlockPos const&);

    virtual void startBuildBlock(::BlockPos const&, uchar);

    virtual bool buildBlock(::BlockPos const&, uchar, bool const);

    virtual void continueBuildBlock(::BlockPos const&, uchar);

    virtual void stopBuildBlock();

    virtual void tick();

    virtual float getPickRange(::InputMode const&);

    virtual bool useItem(::ItemStack&);

    virtual bool useItemAsAttack(::ItemStack&, ::Vec3 const&);

    virtual ::InteractionResult useItemOn(::ItemStack&, ::BlockPos const&, uchar, ::Vec3 const&, ::Block const*, bool);

    virtual bool interact(::Actor&, ::Vec3 const&);

    virtual bool attack(::Actor&, ::Vec3 const&);

    virtual void releaseUsingItem();

    virtual void setTrialMode(bool);

    virtual bool isInTrialMode();

    virtual void registerUpsellScreenCallback(std::function<void (bool)>);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GameMode(::Player&, std::unique_ptr<IGameModeTimer>, std::unique_ptr<IGameModeMessenger>);

    MCNAPI bool _attack(::Actor&, bool, ::Vec3 const&);

    MCNAPI bool _canUseBlock(::Block const&);

    MCNAPI bool _continueDestroyBlock(::BlockPos const&, ::Vec3 const&, uchar, bool&, std::function<void()> const&);

    MCNAPI bool _creativeDestroyBlock(::BlockPos const&, uchar);

    MCNAPI bool _enableBlockBreakDelay() const;

    MCNAPI void _sendPlayerInteractWithBlockAfterEvent(
        ::ItemStack const&,
        ::ItemStack const&,
        ::Player&,
        ::BlockPos const&,
        uchar,
        ::Vec3 const&,
        bool
    );

    MCNAPI bool _startDestroyBlock(::BlockPos const&, ::Vec3 const&, uchar, bool&);

    MCNAPI bool _tickContinueDestroyBlock(::BlockPos const&, ::Vec3 const&, uchar, bool&, std::function<void()> const&);

    MCNAPI bool baseUseItem(::ItemStack const&);

    MCNAPI bool baseUseItemAsAttack(::ItemStack const&, ::Vec3 const&);

    MCNAPI void continueBuildBlockAction(::Player const&, ::HitResult const&);

    MCNAPI ::gsl::final_action<std::function<void()>>
        createBlockBreakCaptureScope(std::function<void(const ItemStack&, const ItemStack&, const BlockPos&)>);

    MCNAPI uchar getDestroyBlockFace() const;

    MCNAPI ::BlockPos const& getDestroyBlockPos() const;

    MCNAPI float getDestroyProgress();

    MCNAPI float getDestroyRate(::Block const&);

    MCNAPI float getMaxPickRange();

    MCNAPI float getMaxPickRangeSqr();

    MCNAPI float getOldDestroyProgress();

    MCNAPI bool isLastBuildBlockInteractive() const;

    MCNAPI void updateContinueBreakBlockCount();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static float const& MIN_MOVING_NON_CREATIVE_BUILD_DELAY();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Player&, std::unique_ptr<IGameModeTimer>, std::unique_ptr<IGameModeMessenger>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $startDestroyBlock(::BlockPos const&, uchar, bool&);

    MCNAPI bool $destroyBlock(::BlockPos const&, uchar);

    MCNAPI bool $continueDestroyBlock(::BlockPos const&, uchar, ::Vec3 const&, bool&);

    MCNAPI void $stopDestroyBlock(::BlockPos const&);

    MCNAPI void $startBuildBlock(::BlockPos const&, uchar);

    MCNAPI bool $buildBlock(::BlockPos const&, uchar, bool const);

    MCNAPI void $continueBuildBlock(::BlockPos const&, uchar);

    MCNAPI void $stopBuildBlock();

    MCNAPI void $tick();

    MCNAPI float $getPickRange(::InputMode const&);

    MCNAPI bool $useItem(::ItemStack&);

    MCNAPI bool $useItemAsAttack(::ItemStack&, ::Vec3 const&);

    MCNAPI ::InteractionResult $useItemOn(::ItemStack&, ::BlockPos const&, uchar, ::Vec3 const&, ::Block const*, bool);

    MCNAPI bool $interact(::Actor&, ::Vec3 const&);

    MCNAPI bool $attack(::Actor&, ::Vec3 const&);

    MCNAPI void $releaseUsingItem();

    MCNAPI void $setTrialMode(bool);

    MCNAPI bool $isInTrialMode();

    MCNAPI void $registerUpsellScreenCallback(std::function<void(bool)>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
