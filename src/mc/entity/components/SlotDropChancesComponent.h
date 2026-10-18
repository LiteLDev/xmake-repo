#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/EquipmentTableDropChance.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct EquipmentTableDropChance;
#endif // @header-generator platform
// clang-format on

struct SlotDropChancesComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 48, std::array<EquipmentTableDropChance, 6>> mDropChances;
    ::ll::TypedStorage<4, 4, float>                                    mDefaultChance;
    ::ll::TypedStorage<4, 4, float>                                    mDefaultChanceForInvalidSlots;
#else // @header-generator platform
    ::ll::TypedStorage<4, 48, ::std::array<::EquipmentTableDropChance, 6>> mDropChances;
    ::ll::TypedStorage<4, 4, float>                                        mDefaultChance;
    ::ll::TypedStorage<4, 4, float>                                        mDefaultChanceForInvalidSlots;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addAdditionalSaveData(::CompoundTag&) const;
#else // @header-generator platform
    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void readAdditionalSaveData(::CompoundTag const&);
#else // @header-generator platform
    MCAPI void readAdditionalSaveData(::CompoundTag const& tag);
#endif // @header-generator platform
    // NOLINTEND
};
