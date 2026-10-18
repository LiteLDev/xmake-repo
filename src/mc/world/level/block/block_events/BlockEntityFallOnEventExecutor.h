#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/block/block_events/BlockEntityFallOnEvent.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/block/block_events/BlockEventExecutor.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace BlockEvents { class BlockEntityFallOnEvent; }
// clang-format on
#endif // @header-generator platform

namespace BlockEvents {

#if defined(LL_PLAT_A) // @header-generator platform
class BlockEntityFallOnEventExecutor : public ::BlockEvents::BlockEventExecutor<BlockEvents::BlockEntityFallOnEvent> {
#else // @header-generator platform
class BlockEntityFallOnEventExecutor : public ::BlockEvents::BlockEventExecutor<::BlockEvents::BlockEntityFallOnEvent> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mShouldCallBase;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    virtual void dispatch(::BlockEvents::BlockEntityFallOnEvent& eventData) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dispatch(::BlockEvents::BlockEntityFallOnEvent&) const;
#else // @header-generator platform
    MCAPI void $dispatch(::BlockEvents::BlockEntityFallOnEvent& eventData) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace BlockEvents
