#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

// auto generated forward declare list
// clang-format off
class Enchant;
class EnchantmentInstance;
class ItemInstance;
class ItemStack;
class ItemStackBase;
class LootItemCondition;
class LootTableContext;
class Random;
struct Trade;
namespace Json { class Value; }
// clang-format on

class EnchantBookForTradingFunction : public ::LootItemFunction {
public:
    // EnchantBookForTradingFunction inner types declare
    // clang-format off
    struct EnchantmentOption;
    // clang-format on

    // EnchantBookForTradingFunction inner types define
    struct EnchantmentOption {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string> mEnchantmentName;
        ::ll::TypedStorage<4, 4, int>          mMinLevel;
        ::ll::TypedStorage<4, 4, int>          mMaxLevel;
        // NOLINTEND

    public:
        // prevent constructor by default
        EnchantmentOption& operator=(EnchantmentOption const&);
        EnchantmentOption();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                                            mBaseCost;
    ::ll::TypedStorage<4, 4, int>                                                            mRandomBaseCost;
    ::ll::TypedStorage<4, 4, int>                                                            mRandomPerLevelCost;
    ::ll::TypedStorage<4, 4, int>                                                            mPerLevelCost;
    ::ll::TypedStorage<8, 24, std::vector<EnchantBookForTradingFunction::EnchantmentOption>> mEnchantmentOptions;
    // NOLINTEND

public:
    // prevent constructor by default
    EnchantBookForTradingFunction();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EnchantBookForTradingFunction();

    virtual int apply(::ItemInstance&, ::Random&, ::Trade const&, ::LootTableContext&);

    virtual void apply(::ItemInstance&, ::Random&, ::LootTableContext&);

    virtual int apply(::ItemStack&, ::Random&, ::Trade const&, ::LootTableContext&);

    virtual void apply(::ItemStack&, ::Random&, ::LootTableContext&);

    virtual ::LootItemFunction::FunctionType getFunctionType() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::optional<EnchantmentInstance> _trySelectEnchantmentFromOptions(::Random&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI int $apply(::ItemInstance&, ::Random&, ::Trade const&, ::LootTableContext&);

    MCNAPI void $apply(::ItemInstance&, ::Random&, ::LootTableContext&);

    MCNAPI int $apply(::ItemStack&, ::Random&, ::Trade const&, ::LootTableContext&);

    MCNAPI void $apply(::ItemStack&, ::Random&, ::LootTableContext&);

    MCNAPI ::LootItemFunction::FunctionType $getFunctionType() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
