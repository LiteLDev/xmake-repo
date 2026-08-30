#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/SlotWithDropChance.h"
#include "mc/world/actor/EquipmentTableDropChance.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class Tag;
// clang-format on

struct EquipmentTable {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                           mLootTableFilePath;
    ::ll::TypedStorage<8, 24, std::vector<EquipmentTableDropChance>> mDropChancesPerSlot;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EquipmentTable(std::string);

    MCNAPI explicit EquipmentTable(::CompoundTag const&);

    MCNAPI void addAdditionalSaveData(::CompoundTag&) const;

    MCNAPI void readAdditionalSaveData(::CompoundTag const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::vector<EquipmentTableDropChance> _createDropChancesFromTag(::Tag const&);

    MCNAPI static std::unique_ptr<CompoundTag> _createTagFromDropChances(std::vector<EquipmentTableDropChance> const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string);

    MCNAPI void* $ctor(::CompoundTag const&);
    // NOLINTEND
};
