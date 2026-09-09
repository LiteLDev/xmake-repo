#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/block_events/BlockEventBase.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class Random;
class RenderParams;
// clang-format on

namespace BlockEvents {

class BlockQueuedTickEvent : public ::BlockEvents::BlockEventBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool const>     mIsInstaticking;
    ::ll::TypedStorage<8, 8, ::BlockSource&> mRegion;
    ::ll::TypedStorage<8, 8, ::Random&>      mRandom;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockQueuedTickEvent& operator=(BlockQueuedTickEvent const&);
    BlockQueuedTickEvent(BlockQueuedTickEvent const&);
    BlockQueuedTickEvent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockQueuedTickEvent();

    virtual ::BlockSource const& getBlockSource() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BlockQueuedTickEvent(::BlockSource&, ::BlockPos const, ::Random&, bool);

    MCNAPI void configureRenderParamsForTrigger(::RenderParams&) const;

    MCNAPI bool isClientSide() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockSource&, ::BlockPos const, ::Random&, bool);
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
