#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/block_events/BlockEventExecutor.h"
#include "mc/world/level/block/block_events/BlockPlaceEvent.h"

namespace BlockEvents {

class BlockPlaceEventExecutor : public ::BlockEvents::BlockEventExecutor<BlockEvents::BlockPlaceEvent> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockPlaceEventExecutor();

    virtual void dispatch(::BlockEvents::BlockPlaceEvent&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $dispatch(::BlockEvents::BlockPlaceEvent&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace BlockEvents
