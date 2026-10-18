#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/input/InputMode.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/gamemode/IGameModeMessenger.h"
#include "mc/world/gamemode/IGameModeTimer.h"
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    struct ContinueBuildData;
#else // @header-generator platform
#endif // @header-generator platform
    struct BuildPlayerContext;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct ContinueBuildData;
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
        ::ll::TypedStorage<1, 1, bool>                                    mHasDelayElapsed;
        ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mNewLastBuildTimeIfBlockIsBuilt;
#endif // @header-generator platform
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

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct ContinueBuildData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::BlockPos const> mHit;
        ::ll::TypedStorage<1, 1, uchar const>       mFacing;
        // NOLINTEND
    };

#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Player&>                               mPlayer;
    ::ll::TypedStorage<4, 12, ::BlockPos>                             mDestroyBlockPos;
    ::ll::TypedStorage<1, 1, uchar>                                   mDestroyBlockFace;
    ::ll::TypedStorage<4, 4, float>                                   mOldDestroyProgress;
    ::ll::TypedStorage<4, 4, float>                                   mDestroyProgress;
    ::ll::TypedStorage<8, 8, double>                                  mLastDestroyTime;
    ::ll::TypedStorage<4, 4, float>                                   mDistanceTravelled;
    ::ll::TypedStorage<4, 12, ::Vec3>                                 mPlayerLastPosition;
    ::ll::TypedStorage<4, 60, ::GameMode::BuildContext>               mBuildContext;
    ::ll::TypedStorage<4, 4, float>                                   mMinPlayerSpeed;
    ::ll::TypedStorage<4, 4, int>                                     mContinueBreakBlockCount;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mLastBuildTime;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mNoDestroyUntil;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mNoDestroySoundUntil;
    ::ll::TypedStorage<8, 8, ::std::chrono::milliseconds>             creativeDestructionTickDelay;
    ::ll::TypedStorage<8, 8, ::std::chrono::milliseconds>             buildingTickDelay;
    ::ll::TypedStorage<8, 8, ::std::chrono::milliseconds>             destroySoundDelay;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IGameModeTimer>>     mTimer;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IGameModeMessenger>> mMessenger;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    GameMode& operator=(GameMode const&);
    GameMode(GameMode const&);
    GameMode();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~GameMode();
#else // @header-generator platform
    virtual ~GameMode() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool startDestroyBlock(::BlockPos const&, uchar, bool&);
#else // @header-generator platform
    virtual bool startDestroyBlock(::BlockPos const& pos, uchar face, bool& hasDestroyedBlock);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool destroyBlock(::BlockPos const&, uchar);
#else // @header-generator platform
    virtual bool destroyBlock(::BlockPos const& pos, uchar face);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool continueDestroyBlock(::BlockPos const&, uchar, ::Vec3 const&, bool&);
#else // @header-generator platform
    virtual bool
    continueDestroyBlock(::BlockPos const& pos, uchar face, ::Vec3 const& playerPos, bool& hasDestroyedBlock);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void stopDestroyBlock(::BlockPos const&);
#else // @header-generator platform
    virtual void stopDestroyBlock(::BlockPos const& pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void startBuildBlock(::BlockPos const&, uchar);
#else // @header-generator platform
    virtual void startBuildBlock(::BlockPos const& pos, uchar face);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool buildBlock(::BlockPos const&, uchar, bool const);
#else // @header-generator platform
    virtual bool buildBlock(::BlockPos const& pos, uchar face, bool const isSimTick);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void continueBuildBlock(::BlockPos const&, uchar);
#else // @header-generator platform
    virtual void continueBuildBlock(::BlockPos const& pos, uchar face);
#endif // @header-generator platform

    virtual void stopBuildBlock();

    virtual void tick();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float getPickRange(::InputMode const&);
#else // @header-generator platform
    virtual float getPickRange(::InputMode const& currentInputMode);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool useItem(::ItemStack&);
#else // @header-generator platform
    virtual bool useItem(::ItemStack& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool useItemAsAttack(::ItemStack&, ::Vec3 const&);
#else // @header-generator platform
    virtual bool useItemAsAttack(::ItemStack& item, ::Vec3 const& aimDirection);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::InteractionResult useItemOn(::ItemStack&, ::BlockPos const&, uchar, ::Vec3 const&, ::Block const*, bool);
#else // @header-generator platform
    virtual ::InteractionResult useItemOn(
        ::ItemStack&      item,
        ::BlockPos const& at,
        uchar             face,
        ::Vec3 const&     hit,
        ::Block const*    targetBlock,
        bool              isFirstEvent
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool interact(::Actor&, ::Vec3 const&);
#else // @header-generator platform
    virtual bool interact(::Actor& entity, ::Vec3 const& location);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool attack(::Actor&, ::Vec3 const&);
#else // @header-generator platform
    virtual bool attack(::Actor& entity, ::Vec3 const& hitPosition);
#endif // @header-generator platform

    virtual void releaseUsingItem();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setTrialMode(bool);
#else // @header-generator platform
    virtual void setTrialMode(bool isEnabled);
#endif // @header-generator platform

    virtual bool isInTrialMode();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void registerUpsellScreenCallback(std::function<void (bool)>);
    // clang-format on
#else // @header-generator platform
    virtual void registerUpsellScreenCallback(::std::function<void(bool)> callback);
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI GameMode(
        ::Player&                               player,
        ::std::unique_ptr<::IGameModeTimer>     timer,
        ::std::unique_ptr<::IGameModeMessenger> messenger
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _startDestroyBlock(::BlockPos const&, ::Vec3 const&, uchar, bool&);
#else // @header-generator platform
    MCAPI bool _attack(::Actor& entity, bool playPredictiveSound, ::Vec3 const& hitPosition);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _tickContinueDestroyBlock(::BlockPos const&, ::Vec3 const&, uchar, bool&, std::function<void()> const&);
#else // @header-generator platform
    MCAPI bool _creativeDestroyBlock(::BlockPos const& pos, uchar face);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool baseUseItem(::ItemStack const&);
#else // @header-generator platform
    MCAPI bool _enableBlockBreakDelay() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool baseUseItemAsAttack(::ItemStack const&, ::Vec3 const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI bool _startDestroyBlock(::BlockPos const& hitPos, ::Vec3 const&, uchar hitFace, bool& hasDestroyedBlock);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void continueBuildBlockAction(::Player const&, ::HitResult const&);
#else // @header-generator platform
    MCAPI bool baseUseItem(::ItemStack const& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::gsl::final_action<std::function<void()>>
        createBlockBreakCaptureScope(std::function<void(const ItemStack&, const ItemStack&, const BlockPos&)>);
#else // @header-generator platform
    MCAPI bool baseUseItemAsAttack(::ItemStack const& item, ::Vec3 const& aimDirection);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI uchar getDestroyBlockFace() const;
#else // @header-generator platform
    MCAPI void continueBuildBlockAction(::Player const& player, ::HitResult const& hr);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockPos const& getDestroyBlockPos() const;
#else // @header-generator platform
    MCAPI float getDestroyRate(::Block const& block);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float getDestroyProgress();

    MCNAPI float getDestroyRate(::Block const&);

    MCNAPI float getMaxPickRange();

    MCNAPI float getMaxPickRangeSqr();

    MCNAPI float getOldDestroyProgress();

    MCNAPI bool isLastBuildBlockInteractive() const;

    MCNAPI void updateContinueBreakBlockCount();
#else // @header-generator platform
    MCAPI float getMaxPickRange();
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // static variables
#else // @header-generator platform
    // static functions
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static float const& MIN_MOVING_NON_CREATIVE_BUILD_DELAY();
#else // @header-generator platform
    MCAPI static void _sendPlayerInteractWithBlockAfterEvent(
        ::ItemStack const& beforeItem,
        ::ItemStack const& afterItem,
        ::Player&          player,
        ::BlockPos const&  at,
        uchar              face,
        ::Vec3 const&      hit,
        bool               isFirstEvent
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Player&, std::unique_ptr<IGameModeTimer>, std::unique_ptr<IGameModeMessenger>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(
        ::Player&                               player,
        ::std::unique_ptr<::IGameModeTimer>     timer,
        ::std::unique_ptr<::IGameModeMessenger> messenger
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $startDestroyBlock(::BlockPos const&, uchar, bool&);
#else // @header-generator platform
    MCAPI bool $startDestroyBlock(::BlockPos const& pos, uchar face, bool& hasDestroyedBlock);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $destroyBlock(::BlockPos const&, uchar);
#else // @header-generator platform
    MCAPI bool $destroyBlock(::BlockPos const& pos, uchar face);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $continueDestroyBlock(::BlockPos const&, uchar, ::Vec3 const&, bool&);
#else // @header-generator platform
    MCAPI bool
    $continueDestroyBlock(::BlockPos const& pos, uchar face, ::Vec3 const& playerPos, bool& hasDestroyedBlock);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $stopDestroyBlock(::BlockPos const&);
#else // @header-generator platform
    MCAPI void $stopDestroyBlock(::BlockPos const& pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $startBuildBlock(::BlockPos const&, uchar);
#else // @header-generator platform
    MCAPI void $startBuildBlock(::BlockPos const& pos, uchar face);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $buildBlock(::BlockPos const&, uchar, bool const);
#else // @header-generator platform
    MCAPI bool $buildBlock(::BlockPos const& pos, uchar face, bool const isSimTick);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $continueBuildBlock(::BlockPos const&, uchar);
#else // @header-generator platform
    MCAPI void $continueBuildBlock(::BlockPos const& pos, uchar face);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $stopBuildBlock();
#else // @header-generator platform
    MCAPI void $stopBuildBlock();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $tick();
#else // @header-generator platform
    MCAPI void $tick();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getPickRange(::InputMode const&);
#else // @header-generator platform
    MCAPI float $getPickRange(::InputMode const& currentInputMode);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $useItem(::ItemStack&);
#else // @header-generator platform
    MCAPI bool $useItem(::ItemStack& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $useItemAsAttack(::ItemStack&, ::Vec3 const&);
#else // @header-generator platform
    MCAPI bool $useItemAsAttack(::ItemStack& item, ::Vec3 const& aimDirection);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::InteractionResult $useItemOn(::ItemStack&, ::BlockPos const&, uchar, ::Vec3 const&, ::Block const*, bool);
#else // @header-generator platform
    MCAPI ::InteractionResult $useItemOn(
        ::ItemStack&      item,
        ::BlockPos const& at,
        uchar             face,
        ::Vec3 const&     hit,
        ::Block const*    targetBlock,
        bool              isFirstEvent
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $interact(::Actor&, ::Vec3 const&);
#else // @header-generator platform
    MCAPI bool $interact(::Actor& entity, ::Vec3 const& location);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $attack(::Actor&, ::Vec3 const&);
#else // @header-generator platform
    MCAPI bool $attack(::Actor& entity, ::Vec3 const& hitPosition);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $releaseUsingItem();
#else // @header-generator platform
    MCAPI void $releaseUsingItem();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setTrialMode(bool);
#else // @header-generator platform
    MCFOLD void $setTrialMode(bool isEnabled);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isInTrialMode();
#else // @header-generator platform
    MCFOLD bool $isInTrialMode();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $registerUpsellScreenCallback(std::function<void(bool)>);
    // NOLINTEND
#else // @header-generator platform
    MCFOLD void $registerUpsellScreenCallback(::std::function<void(bool)> callback);
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
