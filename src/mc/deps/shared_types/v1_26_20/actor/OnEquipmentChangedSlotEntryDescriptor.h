#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/EquipmentSlot.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_20 {

struct OnEquipmentChangedSlotEntryDescriptor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::EquipmentSlot> mSlot;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                         mOnEquip;
    ::ll::TypedStorage<8, 24, std::string>                         mOnUnequip;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                       mOnEquip;
    ::ll::TypedStorage<8, 32, ::std::string>                       mOnUnequip;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    OnEquipmentChangedSlotEntryDescriptor& operator=(OnEquipmentChangedSlotEntryDescriptor const&);
    OnEquipmentChangedSlotEntryDescriptor();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator==(::SharedTypes::v1_26_20::OnEquipmentChangedSlotEntryDescriptor const&) const;
#else // @header-generator platform
    MCAPI OnEquipmentChangedSlotEntryDescriptor(::SharedTypes::v1_26_20::OnEquipmentChangedSlotEntryDescriptor const&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::SharedTypes::v1_26_20::OnEquipmentChangedSlotEntryDescriptor const&);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20
