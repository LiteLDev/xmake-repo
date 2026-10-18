#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
class ClientUnknownBlockTypeRegistry {};
#endif // @header-generator platform
