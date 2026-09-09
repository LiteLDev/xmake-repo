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

struct InventorySlotPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::ContainerID>                              mInventoryId;
    ::ll::TypedStorage<4, 4, uint>                                       mSlot;
    ::ll::TypedStorage<4, 16, std::optional<FullContainerName>>          mFullContainerName;
    ::ll::TypedStorage<8, 88, std::optional<NetworkItemStackDescriptor>> mStorageItem;
    ::ll::TypedStorage<8, 80, ::NetworkItemStackDescriptor>              mItem;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI InventorySlotPacketPayload(::InventorySlotPacketPayload const&);

    MCNAPI InventorySlotPacketPayload(::ContainerID, int, ::ItemStack const&);

    MCNAPI
    InventorySlotPacketPayload(::ContainerID, int, ::ItemStack const&, ::FullContainerName const&, ::ItemStack const&);

    MCNAPI ~InventorySlotPacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::InventorySlotPacketPayload const&);

    MCNAPI void* $ctor(::ContainerID, int, ::ItemStack const&);

    MCNAPI void* $ctor(::ContainerID, int, ::ItemStack const&, ::FullContainerName const&, ::ItemStack const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
