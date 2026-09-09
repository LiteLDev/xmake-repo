#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/entries/LootPoolEntry.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
class LootTable;
class LootTableContext;
class Random;
namespace Json { class Value; }
// clang-format on

class LootTableEntry : public ::LootPoolEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<LootTable>> mTable;
    // NOLINTEND

public:
    // prevent constructor by default
    LootTableEntry();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool _createItem(std::vector<ItemStack>&, ::Random&, ::LootTableContext&) const;

    virtual ~LootTableEntry();

    virtual ::LootPoolEntry::EntryType getEntryType() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::LootTable const& getLootTable() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $_createItem(std::vector<ItemStack>&, ::Random&, ::LootTableContext&) const;

    MCNAPI ::LootPoolEntry::EntryType $getEntryType() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
