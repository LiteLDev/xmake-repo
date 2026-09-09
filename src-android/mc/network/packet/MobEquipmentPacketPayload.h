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
    ::ll::TypedStorage<8, 80, ::NetworkItemStackDescriptor> mItem;
    ::ll::TypedStorage<4, 4, int>                           mSlot;
    ::ll::TypedStorage<4, 4, int>                           mSelectedSlot;
    ::ll::TypedStorage<1, 1, ::ContainerID>                 mContainerId;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MobEquipmentPacketPayload(::ActorRuntimeID, ::ItemStack const&, int, int, ::ContainerID);

    MCNAPI MobEquipmentPacketPayload(::ActorRuntimeID, ::NetworkItemStackDescriptor const&, int, int, ::ContainerID);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ActorRuntimeID, ::ItemStack const&, int, int, ::ContainerID);

    MCNAPI void* $ctor(::ActorRuntimeID, ::NetworkItemStackDescriptor const&, int, int, ::ContainerID);
    // NOLINTEND
};
