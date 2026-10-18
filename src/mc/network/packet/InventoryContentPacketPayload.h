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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, ::ContainerID>                            mInventoryId;
    ::ll::TypedStorage<4, 12, ::FullContainerName>                     mFullContainerName;
    ::ll::TypedStorage<8, 80, ::NetworkItemStackDescriptor>            mStorageItem;
    ::ll::TypedStorage<8, 24, std::vector<NetworkItemStackDescriptor>> mSlots;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, ::ContainerID>                                mInventoryId;
    ::ll::TypedStorage<4, 12, ::FullContainerName>                         mFullContainerName;
    ::ll::TypedStorage<8, 96, ::NetworkItemStackDescriptor>                mStorageItem;
    ::ll::TypedStorage<8, 24, ::std::vector<::NetworkItemStackDescriptor>> mSlots;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    InventoryContentPacketPayload();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI InventoryContentPacketPayload(::InventoryContentPacketPayload const&);
#else // @header-generator platform
    MCAPI InventoryContentPacketPayload(
        ::ContainerID                     id,
        ::std::vector<::ItemStack> const& items,
        ::FullContainerName const&        fullContainerName,
        ::ItemStack const&                storageItem
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~InventoryContentPacketPayload();
#else // @header-generator platform
    MCAPI ~InventoryContentPacketPayload();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::InventoryContentPacketPayload const&);
#else // @header-generator platform
    MCAPI void* $ctor(
        ::ContainerID                     id,
        ::std::vector<::ItemStack> const& items,
        ::FullContainerName const&        fullContainerName,
        ::ItemStack const&                storageItem
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
