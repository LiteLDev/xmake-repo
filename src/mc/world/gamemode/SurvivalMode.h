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
#if defined(LL_PLAT_A) // @header-generator platform
class Player;
#else // @header-generator platform
#endif // @header-generator platform
class Vec3;
// clang-format on

class SurvivalMode : public ::GameMode {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool> mIsTrialMode;
    ::ll::TypedStorage<1, 1, bool> mHasDisplayedIntro;
    ::ll::TypedStorage<4, 4, int>  mTrialEndedReminder;
    ::ll::UntypedStorage<8, 48>    mShowUpsellScreenCallback;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                         mIsTrialMode;
    ::ll::TypedStorage<1, 1, bool>                         mHasDisplayedIntro;
    ::ll::TypedStorage<4, 4, int>                          mTrialEndedReminder;
    ::ll::TypedStorage<8, 64, ::std::function<void(bool)>> mShowUpsellScreenCallback;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    SurvivalMode();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~SurvivalMode();
#else // @header-generator platform
    virtual bool attack(::Actor& entity, ::Vec3 const& hitPosition) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool startDestroyBlock(::BlockPos const&, uchar, bool&);
#else // @header-generator platform
    virtual bool interact(::Actor& entity, ::Vec3 const& location) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool destroyBlock(::BlockPos const&, uchar);
#else // @header-generator platform
    virtual bool destroyBlock(::BlockPos const& pos, uchar face) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void startBuildBlock(::BlockPos const&, uchar);
#else // @header-generator platform
    virtual bool startDestroyBlock(::BlockPos const& pos, uchar face, bool& hasDestroyedBlock) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool buildBlock(::BlockPos const&, uchar, bool const);
#else // @header-generator platform
    virtual void startBuildBlock(::BlockPos const& pos, uchar face) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tick();
#else // @header-generator platform
    virtual bool buildBlock(::BlockPos const& pos, uchar face, bool const isSimTick) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool useItem(::ItemStack&);
#else // @header-generator platform
    virtual bool useItem(::ItemStack& item) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool useItemAsAttack(::ItemStack&, ::Vec3 const&);
#else // @header-generator platform
    virtual bool useItemAsAttack(::ItemStack& item, ::Vec3 const& aimDirection) /*override*/;
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
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool interact(::Actor&, ::Vec3 const&);
#else // @header-generator platform
    virtual void tick() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool attack(::Actor&, ::Vec3 const&);
#else // @header-generator platform
    virtual void setTrialMode(bool isEnabled) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setTrialMode(bool);
#else // @header-generator platform
    virtual bool isInTrialMode() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isInTrialMode();

    virtual void registerUpsellScreenCallback(std::function<void (bool)>);
    // clang-format on
#else // @header-generator platform
    virtual void registerUpsellScreenCallback(::std::function<void(bool)> callback) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit SurvivalMode(::Player&);
#else // @header-generator platform
    MCAPI void _messagePlayers(::std::string message);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void _showTrialReminder(bool force);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $startDestroyBlock(::BlockPos const&, uchar, bool&);
#else // @header-generator platform
    MCAPI bool $attack(::Actor& entity, ::Vec3 const& hitPosition);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $destroyBlock(::BlockPos const&, uchar);
#else // @header-generator platform
    MCAPI bool $interact(::Actor& entity, ::Vec3 const& location);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $startBuildBlock(::BlockPos const&, uchar);
#else // @header-generator platform
    MCAPI bool $destroyBlock(::BlockPos const& pos, uchar face);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $buildBlock(::BlockPos const&, uchar, bool const);
#else // @header-generator platform
    MCAPI bool $startDestroyBlock(::BlockPos const& pos, uchar face, bool& hasDestroyedBlock);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $tick();
#else // @header-generator platform
    MCAPI void $startBuildBlock(::BlockPos const& pos, uchar face);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $useItem(::ItemStack&);
#else // @header-generator platform
    MCAPI bool $buildBlock(::BlockPos const& pos, uchar face, bool const isSimTick);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $useItemAsAttack(::ItemStack&, ::Vec3 const&);
#else // @header-generator platform
    MCAPI bool $useItem(::ItemStack& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::InteractionResult $useItemOn(::ItemStack&, ::BlockPos const&, uchar, ::Vec3 const&, ::Block const*, bool);
#else // @header-generator platform
    MCAPI bool $useItemAsAttack(::ItemStack& item, ::Vec3 const& aimDirection);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $interact(::Actor&, ::Vec3 const&);
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
    MCNAPI bool $attack(::Actor&, ::Vec3 const&);
#else // @header-generator platform
    MCAPI void $tick();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setTrialMode(bool);
#else // @header-generator platform
    MCAPI void $setTrialMode(bool isEnabled);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isInTrialMode();
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI bool $isInTrialMode();
#else // LL_PLAT_C
    MCFOLD bool $isInTrialMode();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $registerUpsellScreenCallback(std::function<void(bool)>);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI void $registerUpsellScreenCallback(::std::function<void(bool)> callback);
#else // LL_PLAT_C
    MCFOLD void $registerUpsellScreenCallback(::std::function<void(bool)> callback);
#endif


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
