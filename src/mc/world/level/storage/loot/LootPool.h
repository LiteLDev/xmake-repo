#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/RandomValueBounds.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
class LootItemCondition;
class LootPoolEntry;
class LootPoolTiers;
class LootTableContext;
class Random;
#if defined(LL_PLAT_A) // @header-generator platform
namespace Json { class Value; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class LootPool {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<LootPoolEntry>>>     mEntries;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<LootItemCondition>>> mConditions;
    ::ll::TypedStorage<8, 8, std::unique_ptr<LootPoolTiers>>                   mTiers;
    ::ll::TypedStorage<4, 8, ::RandomValueBounds>                              mRolls;
    ::ll::TypedStorage<4, 8, ::RandomValueBounds>                              mBonusRolls;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::LootPoolEntry>>>     mEntries;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::LootItemCondition>>> mConditions;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::LootPoolTiers>>                     mTiers;
    ::ll::TypedStorage<4, 8, ::RandomValueBounds>                                    mRolls;
    ::ll::TypedStorage<4, 8, ::RandomValueBounds>                                    mBonusRolls;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addRandomItems(std::vector<ItemStack>&, ::Random&, ::LootTableContext&);
#else // @header-generator platform
    MCAPI void addRandomItems(::std::vector<::ItemStack>& result, ::Random& random, ::LootTableContext& context);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::RandomValueBounds const& getBonusRolls() const;
#else // @header-generator platform
    MCAPI ~LootPool();
    // NOLINTEND
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<std::unique_ptr<LootItemCondition>> const& getConditions() const;

    MCNAPI ::RandomValueBounds const& getRolls() const;

    MCNAPI ::LootPoolTiers const* getTiers() const;
#else // @header-generator platform
public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
