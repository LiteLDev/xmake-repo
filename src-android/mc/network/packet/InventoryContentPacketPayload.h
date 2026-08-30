#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerID.h"
#include "mc/world/containers/FullContainerName.h"
#include "mc/world/item/NetworkItemStackDescriptor.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
// clang-format on

struct InventoryContentPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::ContainerID>                            mInventoryId;
    ::ll::TypedStorage<4, 12, ::FullContainerName>                     mFullContainerName;
    ::ll::TypedStorage<8, 80, ::NetworkItemStackDescriptor>            mStorageItem;
    ::ll::TypedStorage<8, 24, std::vector<NetworkItemStackDescriptor>> mSlots;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI InventoryContentPacketPayload(::InventoryContentPacketPayload const&);

    MCNAPI ~InventoryContentPacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::InventoryContentPacketPayload const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
