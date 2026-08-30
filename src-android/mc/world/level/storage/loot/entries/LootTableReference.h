#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/entries/LootPoolEntry.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
class LootItemCondition;
class LootTableContext;
class Random;
namespace Json { class Value; }
// clang-format on

class LootTableReference : public ::LootPoolEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mDir;
    // NOLINTEND

public:
    // prevent constructor by default
    LootTableReference();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool _createItem(std::vector<ItemStack>&, ::Random&, ::LootTableContext&) const;

    virtual ~LootTableReference();

    virtual ::LootPoolEntry::EntryType getEntryType() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::string const& getDir() const;
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
