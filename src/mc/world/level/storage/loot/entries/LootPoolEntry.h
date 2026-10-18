#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/level/storage/loot/predicates/LootItemCondition.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class ItemStack;
class LootItemCondition;
class LootTableContext;
class Random;
#if defined(LL_PLAT_A) // @header-generator platform
namespace Json { class Value; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class LootPoolEntry {
public:
    // LootPoolEntry inner types define
    enum class EntryType : int {
        LootItem           = 0,
        EmptyLootItem      = 1,
        LootTableEntry     = 2,
        LootTableReference = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                                              mWeight;
    ::ll::TypedStorage<4, 4, int>                                              mQuality;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<LootItemCondition>>> mConditions;
    ::ll::TypedStorage<8, 8, std::unique_ptr<LootPoolEntry>>                   mSubTable;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                                                    mWeight;
    ::ll::TypedStorage<4, 4, int>                                                    mQuality;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::LootItemCondition>>> mConditions;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::LootPoolEntry>>                     mSubTable;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool _createItem(std::vector<ItemStack>&, ::Random&, ::LootTableContext&) const = 0;
#else // @header-generator platform
    virtual bool
    _createItem(::std::vector<::ItemStack>& output, ::Random& random, ::LootTableContext& context) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~LootPoolEntry();
#else // @header-generator platform
    virtual ~LootPoolEntry() = default;
#endif // @header-generator platform

    virtual ::LootPoolEntry::EntryType getEntryType() const = 0;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI int getBaseWeight() const;

    MCNAPI std::vector<std::unique_ptr<LootItemCondition>> const& getConditions() const;

    MCNAPI int getQuality() const;

    MCNAPI ::LootPoolEntry const* getSubTable() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
