#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/entries/LootPoolEntry.h"

// auto generated forward declare list
// clang-format off
class Item;
class ItemStack;
class LootItemCondition;
class LootItemFunction;
class LootTableContext;
class Random;
namespace Json { class Value; }
// clang-format on

class LootItem : public ::LootPoolEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Item const*>                                   mItem;
    ::ll::TypedStorage<4, 4, int>                                             mAuxValue;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<LootItemFunction>>> mFunctions;
    ::ll::TypedStorage<8, 24, std::string>                                    mOriginalItemName;
    // NOLINTEND

public:
    // prevent constructor by default
    LootItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool _createItem(std::vector<ItemStack>&, ::Random&, ::LootTableContext&) const;

    virtual ~LootItem();

    virtual ::LootPoolEntry::EntryType getEntryType() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::vector<std::unique_ptr<LootItemFunction>> const& getFunctions() const;

    MCNAPI ::Item const* getItem() const;
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
