#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/block_events/BlockEventBase.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
// clang-format on

namespace BlockEvents {

class BlockRedstoneUpdateEvent : public ::BlockEvents::BlockEventBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BlockSource&> mRegion;
    ::ll::TypedStorage<2, 2, short>          mSignalLevel;
    ::ll::TypedStorage<2, 2, short>          mPreviousSignalLevel;
    ::ll::TypedStorage<1, 1, bool>           mIsFirstTime;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockRedstoneUpdateEvent& operator=(BlockRedstoneUpdateEvent const&);
    BlockRedstoneUpdateEvent(BlockRedstoneUpdateEvent const&);
    BlockRedstoneUpdateEvent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockRedstoneUpdateEvent();

    virtual ::BlockSource const& getBlockSource() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BlockRedstoneUpdateEvent(::BlockSource&, ::BlockPos const&, short, short, bool);

    MCNAPI bool isClientSide() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockSource&, ::BlockPos const&, short, short, bool);
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
