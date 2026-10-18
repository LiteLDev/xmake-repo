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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, ::ContainerID>                              mInventoryId;
    ::ll::TypedStorage<4, 4, uint>                                       mSlot;
    ::ll::TypedStorage<4, 16, std::optional<FullContainerName>>          mFullContainerName;
    ::ll::TypedStorage<8, 88, std::optional<NetworkItemStackDescriptor>> mStorageItem;
    ::ll::TypedStorage<8, 80, ::NetworkItemStackDescriptor>              mItem;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, ::ContainerID>                                   mInventoryId;
    ::ll::TypedStorage<4, 4, uint>                                            mSlot;
    ::ll::TypedStorage<4, 16, ::std::optional<::FullContainerName>>           mFullContainerName;
    ::ll::TypedStorage<8, 104, ::std::optional<::NetworkItemStackDescriptor>> mStorageItem;
    ::ll::TypedStorage<8, 96, ::NetworkItemStackDescriptor>                   mItem;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    InventorySlotPacketPayload& operator=(InventorySlotPacketPayload const&);
    InventorySlotPacketPayload(InventorySlotPacketPayload const&);
    InventorySlotPacketPayload();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI InventorySlotPacketPayload(::InventorySlotPacketPayload const&);
#else // @header-generator platform
    MCAPI InventorySlotPacketPayload(::InventorySlotPacketPayload&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI InventorySlotPacketPayload(::ContainerID, int, ::ItemStack const&);
#else // @header-generator platform
    MCAPI InventorySlotPacketPayload(::ContainerID id, int slot, ::ItemStack const& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI
    InventorySlotPacketPayload(::ContainerID, int, ::ItemStack const&, ::FullContainerName const&, ::ItemStack const&);
#else // @header-generator platform
    MCAPI InventorySlotPacketPayload(
        ::ContainerID              id,
        int                        slot,
        ::ItemStack const&         item,
        ::FullContainerName const& fullContainerName,
        ::ItemStack const&         storageItem
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~InventorySlotPacketPayload();
#else // @header-generator platform
    MCAPI ~InventorySlotPacketPayload();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::InventorySlotPacketPayload const&);
#else // @header-generator platform
    MCAPI void* $ctor(::InventorySlotPacketPayload&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ContainerID, int, ::ItemStack const&);
#else // @header-generator platform
    MCAPI void* $ctor(::ContainerID id, int slot, ::ItemStack const& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ContainerID, int, ::ItemStack const&, ::FullContainerName const&, ::ItemStack const&);
#else // @header-generator platform
    MCAPI void* $ctor(
        ::ContainerID              id,
        int                        slot,
        ::ItemStack const&         item,
        ::FullContainerName const& fullContainerName,
        ::ItemStack const&         storageItem
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
