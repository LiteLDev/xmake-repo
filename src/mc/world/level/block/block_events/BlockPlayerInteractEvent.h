#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/level/block/block_events/BlockEventBase.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BlockPos;
#else // @header-generator platform
#endif // @header-generator platform
class BlockSource;
#if defined(LL_PLAT_A) // @header-generator platform
class ItemStack;
#else // @header-generator platform
#endif // @header-generator platform
class Player;
#if defined(LL_PLAT_A) // @header-generator platform
class RenderParams;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace BlockEvents {

class BlockPlayerInteractEvent : public ::BlockEvents::BlockEventBase {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Player&>                  mPlayer;
    ::ll::TypedStorage<1, 2, std::optional<bool>>        mSuccessful;
    ::ll::TypedStorage<4, 16, std::optional<Vec3> const> mHit;
    ::ll::TypedStorage<1, 1, uchar const>                mFace;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Player&>                      mPlayer;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>          mSuccessful;
    ::ll::TypedStorage<4, 16, ::std::optional<::Vec3> const> mHit;
    ::ll::TypedStorage<1, 1, uchar const>                    mFace;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    BlockPlayerInteractEvent& operator=(BlockPlayerInteractEvent const&);
    BlockPlayerInteractEvent(BlockPlayerInteractEvent const&);
    BlockPlayerInteractEvent();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~BlockPlayerInteractEvent();

    virtual ::BlockSource const& getBlockSource() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BlockPlayerInteractEvent(::Player&, ::BlockPos const, uchar const, std::optional<Vec3> const);

    MCNAPI void configureRenderParamsForTrigger(::RenderParams&);

    MCNAPI ::Player const& getPlayer() const;

    MCNAPI ::Player& getPlayerNonConst();

    MCNAPI bool isClientSide() const;

    MCNAPI bool isInteractionFailure() const;

    MCNAPI bool isInteractionSuccessful() const;

    MCNAPI void setInteractionFailure();

    MCNAPI void setInteractionResult(bool);

    MCNAPI void setInteractionSuccessful();

    MCNAPI void setPlayerSelectedItem(::ItemStack&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Player&, ::BlockPos const, uchar const, std::optional<Vec3> const);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::BlockSource const& getBlockSource() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockSource const& $getBlockSource() const;
    // NOLINTEND
#else // @header-generator platform
    MCFOLD ::BlockSource const& $getBlockSource() const;
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

} // namespace BlockEvents
