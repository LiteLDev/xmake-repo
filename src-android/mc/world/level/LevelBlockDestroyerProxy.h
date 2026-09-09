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
    virtual ~LevelBlockDestroyerProxy();

    virtual void sendEvents(::LevelEventManager&, ::BlockSource&, ::BlockPos const&, ::Block const&);

    virtual void dropResources(::BlockSource&, ::BlockPos const&, ::Block const&, ::Actor const*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $sendEvents(::LevelEventManager&, ::BlockSource&, ::BlockPos const&, ::Block const&);

    MCNAPI void $dropResources(::BlockSource&, ::BlockPos const&, ::Block const&, ::Actor const*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
