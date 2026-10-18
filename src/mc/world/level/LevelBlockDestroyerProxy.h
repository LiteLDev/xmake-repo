#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/ILevelBlockDestroyerProxy.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockSource;
class LevelEventManager;
// clang-format on

class LevelBlockDestroyerProxy : public ::ILevelBlockDestroyerProxy {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~LevelBlockDestroyerProxy();
#else // @header-generator platform
    virtual void sendEvents(
        ::LevelEventManager& levelEventManager,
        ::BlockSource&       region,
        ::BlockPos const&    pos,
        ::Block const&       block
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void sendEvents(::LevelEventManager&, ::BlockSource&, ::BlockPos const&, ::Block const&);

    virtual void dropResources(::BlockSource&, ::BlockPos const&, ::Block const&, ::Actor const*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void dropResources(
        ::BlockSource&    region,
        ::BlockPos const& pos,
        ::Block const&    block,
        ::Actor const*    actorContext
    ) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $sendEvents(::LevelEventManager&, ::BlockSource&, ::BlockPos const&, ::Block const&);
#else // @header-generator platform
    MCAPI void $sendEvents(
        ::LevelEventManager& levelEventManager,
        ::BlockSource&       region,
        ::BlockPos const&    pos,
        ::Block const&       block
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dropResources(::BlockSource&, ::BlockPos const&, ::Block const&, ::Actor const*);
    // NOLINTEND
#else // @header-generator platform
    MCAPI void
    $dropResources(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, ::Actor const* actorContext);
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
