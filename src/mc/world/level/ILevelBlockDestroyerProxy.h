#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockSource;
class LevelEventManager;
// clang-format on

class ILevelBlockDestroyerProxy {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ILevelBlockDestroyerProxy();
#else // @header-generator platform
    virtual ~ILevelBlockDestroyerProxy() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void sendEvents(::LevelEventManager&, ::BlockSource&, ::BlockPos const&, ::Block const&) = 0;
#else // @header-generator platform
    virtual void sendEvents(
        ::LevelEventManager& levelEventManager,
        ::BlockSource&       region,
        ::BlockPos const&    pos,
        ::Block const&       block
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void dropResources(::BlockSource&, ::BlockPos const&, ::Block const&, ::Actor const*) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void
    dropResources(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, ::Actor const* actorContext) = 0;
#endif // @header-generator platform
    // NOLINTEND
};
