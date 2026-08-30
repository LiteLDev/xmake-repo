#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockChangedEventTarget.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
struct ActorBlockSyncMessage;
// clang-format on

class BlockSourceListener {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~BlockSourceListener();

    virtual void onSourceCreated(::BlockSource&);

    virtual void onSourceDestroyed(::BlockSource&);

    virtual void onAreaChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&);

    virtual void onBlockChanged(::BlockSource&, ::BlockPos const&, uint, ::Block const&, ::Block const&, int, ::ActorBlockSyncMessage const*, ::BlockChangedEventTarget, ::Actor*);

    virtual void onBrightnessChanged(::BlockSource&, ::BlockPos const&);

    virtual void onBlockEntityChanged(::BlockSource&, ::BlockActor&);

    virtual void onEntityChanged(::BlockSource&, ::Actor&);

    virtual void onBlockEvent(::BlockSource&, int, int, int, int, int);
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onSourceCreated(::BlockSource&);

    MCNAPI void $onSourceDestroyed(::BlockSource&);

    MCNAPI void $onAreaChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&);

    MCNAPI void $onBlockChanged(
        ::BlockSource&,
        ::BlockPos const&,
        uint,
        ::Block const&,
        ::Block const&,
        int,
        ::ActorBlockSyncMessage const*,
        ::BlockChangedEventTarget,
        ::Actor*
    );

    MCNAPI void $onBrightnessChanged(::BlockSource&, ::BlockPos const&);

    MCNAPI void $onBlockEntityChanged(::BlockSource&, ::BlockActor&);

    MCNAPI void $onEntityChanged(::BlockSource&, ::Actor&);

    MCNAPI void $onBlockEvent(::BlockSource&, int, int, int, int, int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
