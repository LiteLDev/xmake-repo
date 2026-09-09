#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/block_events/BlockEntityFallOnEvent.h"
#include "mc/world/level/block/block_events/BlockEventExecutor.h"

namespace BlockEvents {

class BlockEntityFallOnEventExecutor : public ::BlockEvents::BlockEventExecutor<BlockEvents::BlockEntityFallOnEvent> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mShouldCallBase;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockEntityFallOnEventExecutor();

    virtual void dispatch(::BlockEvents::BlockEntityFallOnEvent&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void disableCallToBase();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $dispatch(::BlockEvents::BlockEntityFallOnEvent&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace BlockEvents
