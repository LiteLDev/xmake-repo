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
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~BlockSourceListener();
#else // @header-generator platform
    virtual ~BlockSourceListener() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onSourceCreated(::BlockSource&);
#else // @header-generator platform
    virtual void onSourceCreated(::BlockSource& source);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onSourceDestroyed(::BlockSource&);
#else // @header-generator platform
    virtual void onSourceDestroyed(::BlockSource& source);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onAreaChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&);
#else // @header-generator platform
    virtual void onAreaChanged(::BlockSource& source, ::BlockPos const& min, ::BlockPos const& max);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onBlockChanged(::BlockSource&, ::BlockPos const&, uint, ::Block const&, ::Block const&, int, ::ActorBlockSyncMessage const*, ::BlockChangedEventTarget, ::Actor*);
#else // @header-generator platform
    virtual void onBlockChanged(
        ::BlockSource&                 source,
        ::BlockPos const&              pos,
        uint                           layer,
        ::Block const&                 block,
        ::Block const&                 oldBlock,
        int                            updateFlags,
        ::ActorBlockSyncMessage const* syncMsg,
        ::BlockChangedEventTarget      eventTarget,
        ::Actor*                       blockChangeSource
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onBrightnessChanged(::BlockSource&, ::BlockPos const&);
#else // @header-generator platform
    virtual void onBrightnessChanged(::BlockSource& source, ::BlockPos const& pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onBlockEntityChanged(::BlockSource&, ::BlockActor&);
#else // @header-generator platform
    virtual void onBlockEntityChanged(::BlockSource& source, ::BlockActor& te);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onEntityChanged(::BlockSource&, ::Actor&);
#else // @header-generator platform
    virtual void onEntityChanged(::BlockSource& source, ::Actor& entity);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onBlockEvent(::BlockSource&, int, int, int, int, int);
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void onBlockEvent(::BlockSource& source, int x, int y, int z, int b0, int b1);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onSourceCreated(::BlockSource&);
#else // @header-generator platform
    MCFOLD void $onSourceCreated(::BlockSource& source);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onSourceDestroyed(::BlockSource&);
#else // @header-generator platform
    MCFOLD void $onSourceDestroyed(::BlockSource& source);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onAreaChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&);
#else // @header-generator platform
    MCFOLD void $onAreaChanged(::BlockSource& source, ::BlockPos const& min, ::BlockPos const& max);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCFOLD void $onBlockChanged(
        ::BlockSource&                 source,
        ::BlockPos const&              pos,
        uint                           layer,
        ::Block const&                 block,
        ::Block const&                 oldBlock,
        int                            updateFlags,
        ::ActorBlockSyncMessage const* syncMsg,
        ::BlockChangedEventTarget      eventTarget,
        ::Actor*                       blockChangeSource
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onBrightnessChanged(::BlockSource&, ::BlockPos const&);
#else // @header-generator platform
    MCAPI void $onBrightnessChanged(::BlockSource& source, ::BlockPos const& pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onBlockEntityChanged(::BlockSource&, ::BlockActor&);
#else // @header-generator platform
    MCFOLD void $onBlockEntityChanged(::BlockSource& source, ::BlockActor& te);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onEntityChanged(::BlockSource&, ::Actor&);
#else // @header-generator platform
    MCFOLD void $onEntityChanged(::BlockSource& source, ::Actor& entity);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onBlockEvent(::BlockSource&, int, int, int, int, int);
    // NOLINTEND
#else // @header-generator platform
    MCFOLD void $onBlockEvent(::BlockSource& source, int x, int y, int z, int b0, int b1);
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
