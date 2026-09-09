#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/gamemode/GameMode.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class InteractionResult;
class ItemStack;
class Player;
class Vec3;
// clang-format on

class SurvivalMode : public ::GameMode {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mIsTrialMode;
    ::ll::TypedStorage<1, 1, bool> mHasDisplayedIntro;
    ::ll::TypedStorage<4, 4, int>  mTrialEndedReminder;
    ::ll::UntypedStorage<8, 48>    mShowUpsellScreenCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    SurvivalMode();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~SurvivalMode();

    virtual bool startDestroyBlock(::BlockPos const&, uchar, bool&);

    virtual bool destroyBlock(::BlockPos const&, uchar);

    virtual void startBuildBlock(::BlockPos const&, uchar);

    virtual bool buildBlock(::BlockPos const&, uchar, bool const);

    virtual void tick();

    virtual bool useItem(::ItemStack&);

    virtual bool useItemAsAttack(::ItemStack&, ::Vec3 const&);

    virtual ::InteractionResult useItemOn(::ItemStack&, ::BlockPos const&, uchar, ::Vec3 const&, ::Block const*, bool);

    virtual bool interact(::Actor&, ::Vec3 const&);

    virtual bool attack(::Actor&, ::Vec3 const&);

    virtual void setTrialMode(bool);

    virtual bool isInTrialMode();

    virtual void registerUpsellScreenCallback(std::function<void (bool)>);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SurvivalMode(::Player&);

    MCNAPI void _messagePlayers(std::string);

    MCNAPI void _showTrialReminder(bool);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static bool& mTrialHasEnded();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Player&);
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

    MCNAPI void $startBuildBlock(::BlockPos const&, uchar);

    MCNAPI bool $buildBlock(::BlockPos const&, uchar, bool const);

    MCNAPI void $tick();

    MCNAPI bool $useItem(::ItemStack&);

    MCNAPI bool $useItemAsAttack(::ItemStack&, ::Vec3 const&);

    MCNAPI ::InteractionResult $useItemOn(::ItemStack&, ::BlockPos const&, uchar, ::Vec3 const&, ::Block const*, bool);

    MCNAPI bool $interact(::Actor&, ::Vec3 const&);

    MCNAPI bool $attack(::Actor&, ::Vec3 const&);

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
