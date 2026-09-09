#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/registry/IUnknownBlockTypeRegistry.h"

// auto generated forward declare list
// clang-format off
class Block;
class CompoundTag;
// clang-format on

class ClientUnknownBlockTypeRegistry : public ::IUnknownBlockTypeRegistry {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientUnknownBlockTypeRegistry();

    virtual ::Block const& getUnknownBlock(::CompoundTag const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Block const& $getUnknownBlock(::CompoundTag const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
