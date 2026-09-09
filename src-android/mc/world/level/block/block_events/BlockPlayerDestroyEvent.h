#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/block_events/BlockEventBase.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class Player;
class RenderParams;
// clang-format on

namespace BlockEvents {

class BlockPlayerDestroyEvent : public ::BlockEvents::BlockEventBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Player&>      mPlayer;
    ::ll::TypedStorage<8, 8, ::Block const&> mDestroyedBlock;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockPlayerDestroyEvent& operator=(BlockPlayerDestroyEvent const&);
    BlockPlayerDestroyEvent(BlockPlayerDestroyEvent const&);
    BlockPlayerDestroyEvent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockPlayerDestroyEvent();

    virtual ::BlockSource const& getBlockSource() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BlockPlayerDestroyEvent(::Player&, ::BlockPos const, ::Block const&);

    MCNAPI void configureRenderParamsForTrigger(::RenderParams&) const;

    MCNAPI ::Player const& getPlayer() const;

    MCNAPI bool isClientSide() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Player&, ::BlockPos const, ::Block const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::BlockSource const& $getBlockSource() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace BlockEvents
