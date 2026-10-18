#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/entries/LootPoolEntry.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
#if defined(LL_PLAT_A) // @header-generator platform
class LootItemCondition;
#else // @header-generator platform
#endif // @header-generator platform
class LootTableContext;
class Random;
// clang-format on

class EmptyLootItem : public ::LootPoolEntry {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    EmptyLootItem();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool _createItem(std::vector<ItemStack>&, ::Random&, ::LootTableContext&) const;
#else // @header-generator platform
    virtual bool _createItem(::std::vector<::ItemStack>& output, ::Random& random, ::LootTableContext& context) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~EmptyLootItem();
#else // @header-generator platform
    virtual ~EmptyLootItem() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::LootPoolEntry::EntryType getEntryType() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::LootPoolEntry::EntryType getEntryType() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $_createItem(std::vector<ItemStack>&, ::Random&, ::LootTableContext&) const;
#else // @header-generator platform
    MCFOLD bool $_createItem(::std::vector<::ItemStack>& output, ::Random& random, ::LootTableContext& context) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::LootPoolEntry::EntryType $getEntryType() const;
    // NOLINTEND
#else // @header-generator platform
    MCFOLD ::LootPoolEntry::EntryType $getEntryType() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
