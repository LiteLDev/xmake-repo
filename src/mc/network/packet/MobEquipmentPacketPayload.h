#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorRuntimeID.h"
#include "mc/world/ContainerID.h"
#include "mc/world/item/NetworkItemStackDescriptor.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
// clang-format on

struct MobEquipmentPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID>              mRuntimeId;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 80, ::NetworkItemStackDescriptor> mItem;
#else // @header-generator platform
    ::ll::TypedStorage<8, 96, ::NetworkItemStackDescriptor> mItem;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                           mSlot;
    ::ll::TypedStorage<4, 4, int>                           mSelectedSlot;
    ::ll::TypedStorage<1, 1, ::ContainerID>                 mContainerId;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // prevent constructor by default
    MobEquipmentPacketPayload();

public:
#endif // @header-generator platform
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI MobEquipmentPacketPayload(::ActorRuntimeID, ::ItemStack const&, int, int, ::ContainerID);

    MCNAPI MobEquipmentPacketPayload(::ActorRuntimeID, ::NetworkItemStackDescriptor const&, int, int, ::ContainerID);
#else // @header-generator platform
    MCAPI MobEquipmentPacketPayload(
        ::ActorRuntimeID   runtimeId,
        ::ItemStack const& item,
        int                slot,
        int                selectedSlot,
        ::ContainerID      containerId
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ActorRuntimeID, ::ItemStack const&, int, int, ::ContainerID);

    MCNAPI void* $ctor(::ActorRuntimeID, ::NetworkItemStackDescriptor const&, int, int, ::ContainerID);
#else // @header-generator platform
    MCAPI void*
    $ctor(::ActorRuntimeID runtimeId, ::ItemStack const& item, int slot, int selectedSlot, ::ContainerID containerId);
#endif // @header-generator platform
    // NOLINTEND
};
