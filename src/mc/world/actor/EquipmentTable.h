#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/SlotWithDropChance.h"
#include "mc/world/actor/EquipmentTableDropChance.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
class CompoundTag;
#if defined(LL_PLAT_A) // @header-generator platform
class Tag;
#else // @header-generator platform
struct EquipmentTableDropChance;
#endif // @header-generator platform
// clang-format on

struct EquipmentTable {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                           mLootTableFilePath;
    ::ll::TypedStorage<8, 24, std::vector<EquipmentTableDropChance>> mDropChancesPerSlot;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                             mLootTableFilePath;
    ::ll::TypedStorage<8, 24, ::std::vector<::EquipmentTableDropChance>> mDropChancesPerSlot;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    EquipmentTable& operator=(EquipmentTable const&);
    EquipmentTable();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit EquipmentTable(std::string);
#else // @header-generator platform
    MCAPI EquipmentTable(::EquipmentTable const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit EquipmentTable(::CompoundTag const&);
#else // @header-generator platform
    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addAdditionalSaveData(::CompoundTag&) const;
#else // @header-generator platform
    MCFOLD ::EquipmentTable& operator=(::EquipmentTable&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void readAdditionalSaveData(::CompoundTag const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::vector<EquipmentTableDropChance> _createDropChancesFromTag(::Tag const&);

    MCNAPI static std::unique_ptr<CompoundTag> _createTagFromDropChances(std::vector<EquipmentTableDropChance> const&);
#else // @header-generator platform
    MCAPI void readAdditionalSaveData(::CompoundTag const& tag);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string);

    MCNAPI void* $ctor(::CompoundTag const&);
#else // @header-generator platform
    MCFOLD void* $ctor(::EquipmentTable const&);
#endif // @header-generator platform
    // NOLINTEND
};
