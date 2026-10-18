#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/entity/components_json_legacy/SlotDescriptor.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/ContainerID.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
#if defined(LL_PLAT_A) // @header-generator platform
class ItemDescriptor;
#else // @header-generator platform
#endif // @header-generator platform
class ItemStack;
class UpdateEquipPacket;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct SlotDescriptor;
#endif // @header-generator platform
// clang-format on

class EquippableComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<SlotDescriptor>> mSlots;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::SlotDescriptor>> mSlots;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    EquippableComponent& operator=(EquippableComponent const&);
    EquippableComponent(EquippableComponent const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    EquippableComponent();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::UpdateEquipPacket createDataPacket(::Actor&, ::ContainerID) const;
#else // @header-generator platform
    MCAPI ::UpdateEquipPacket createDataPacket(::Actor& owner, ::ContainerID containerID) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<CompoundTag> createTag(::Actor&) const;
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::CompoundTag> createTag(::Actor& owner) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getSlotCount() const;
#else // @header-generator platform
    MCAPI bool onItemChanged(::Actor& owner, uint64 slotIdx, ::ItemStack const& item) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool hasSlotAllowedItems(int) const;
#else // @header-generator platform
    MCAPI ::EquippableComponent& operator=(::EquippableComponent&& other);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool onItemChanged(::Actor&, ulong, ::ItemStack const&) const;

    MCNAPI ::EquippableComponent& operator=(::EquippableComponent&&);

    MCNAPI void setDataFromPacket(::UpdateEquipPacket const&);

    MCNAPI std::vector<ItemDescriptor> const* tryGetSlotAllowedItems(int) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void setDataFromPacket(::UpdateEquipPacket const& packet);
#endif
#endif // @header-generator platform
    // NOLINTEND
};
