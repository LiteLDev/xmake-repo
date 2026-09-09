#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components_json_legacy/SlotDescriptor.h"
#include "mc/world/ContainerID.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class ItemDescriptor;
class ItemStack;
class UpdateEquipPacket;
// clang-format on

class EquippableComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<SlotDescriptor>> mSlots;
    // NOLINTEND

public:
    // prevent constructor by default
    EquippableComponent& operator=(EquippableComponent const&);
    EquippableComponent(EquippableComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::UpdateEquipPacket createDataPacket(::Actor&, ::ContainerID) const;

    MCNAPI std::unique_ptr<CompoundTag> createTag(::Actor&) const;

    MCNAPI int getSlotCount() const;

    MCNAPI bool hasSlotAllowedItems(int) const;

    MCNAPI bool onItemChanged(::Actor&, ulong, ::ItemStack const&) const;

    MCNAPI ::EquippableComponent& operator=(::EquippableComponent&&);

    MCNAPI void setDataFromPacket(::UpdateEquipPacket const&);

    MCNAPI std::vector<ItemDescriptor> const* tryGetSlotAllowedItems(int) const;
    // NOLINTEND
};
