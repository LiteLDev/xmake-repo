#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/block_events/BlockEventExecutor.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/block/block_events/BlockPlaceEvent.h"
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace BlockEvents { class BlockPlaceEvent; }
// clang-format on
#endif // @header-generator platform

namespace BlockEvents {

#if defined(LL_PLAT_A) // @header-generator platform
class BlockPlaceEventExecutor : public ::BlockEvents::BlockEventExecutor<BlockEvents::BlockPlaceEvent> {
#else // @header-generator platform
class BlockPlaceEventExecutor : public ::BlockEvents::BlockEventExecutor<::BlockEvents::BlockPlaceEvent> {
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~BlockPlaceEventExecutor();

    virtual void dispatch(::BlockEvents::BlockPlaceEvent&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void dispatch(::BlockEvents::BlockPlaceEvent& eventData) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dispatch(::BlockEvents::BlockPlaceEvent&) const;
#else // @header-generator platform
    MCAPI void $dispatch(::BlockEvents::BlockPlaceEvent& eventData) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace BlockEvents
