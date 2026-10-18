#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Enchant;
#else // @header-generator platform
#endif // @header-generator platform
class EnchantmentInstance;
class ItemInstance;
class ItemStack;
#if defined(LL_PLAT_A) // @header-generator platform
class ItemStackBase;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string> mEnchantmentName;
        ::ll::TypedStorage<4, 4, int>          mMinLevel;
        ::ll::TypedStorage<4, 4, int>          mMaxLevel;
#else // @header-generator platform
        ::ll::TypedStorage<8, 32, ::std::string> mEnchantmentName;
        ::ll::TypedStorage<4, 4, int>            mMinLevel;
        ::ll::TypedStorage<4, 4, int>            mMaxLevel;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        EnchantmentOption& operator=(EnchantmentOption const&);
        EnchantmentOption();
#else // @header-generator platform
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                                                            mBaseCost;
    ::ll::TypedStorage<4, 4, int>                                                            mRandomBaseCost;
    ::ll::TypedStorage<4, 4, int>                                                            mRandomPerLevelCost;
    ::ll::TypedStorage<4, 4, int>                                                            mPerLevelCost;
    ::ll::TypedStorage<8, 24, std::vector<EnchantBookForTradingFunction::EnchantmentOption>> mEnchantmentOptions;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                                                                mBaseCost;
    ::ll::TypedStorage<4, 4, int>                                                                mRandomBaseCost;
    ::ll::TypedStorage<4, 4, int>                                                                mRandomPerLevelCost;
    ::ll::TypedStorage<4, 4, int>                                                                mPerLevelCost;
    ::ll::TypedStorage<8, 24, ::std::vector<::EnchantBookForTradingFunction::EnchantmentOption>> mEnchantmentOptions;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    EnchantBookForTradingFunction();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~EnchantBookForTradingFunction();
#else // @header-generator platform
    virtual ~EnchantBookForTradingFunction() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int apply(::ItemInstance&, ::Random&, ::Trade const&, ::LootTableContext&);
#else // @header-generator platform
    virtual void apply(::ItemStack& item, ::Random& random, ::LootTableContext&) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void apply(::ItemInstance&, ::Random&, ::LootTableContext&);
#else // @header-generator platform
    virtual int
    apply(::ItemStack& item, ::Random& random, ::Trade const& trade, ::LootTableContext& context) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int apply(::ItemStack&, ::Random&, ::Trade const&, ::LootTableContext&);
#else // @header-generator platform
    virtual void apply(::ItemInstance& item, ::Random& random, ::LootTableContext&) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void apply(::ItemStack&, ::Random&, ::LootTableContext&);
#else // @header-generator platform
    virtual int
    apply(::ItemInstance& item, ::Random& random, ::Trade const& trade, ::LootTableContext& context) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::LootItemFunction::FunctionType getFunctionType() const;
#else // @header-generator platform
    virtual ::LootItemFunction::FunctionType getFunctionType() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<EnchantmentInstance> _trySelectEnchantmentFromOptions(::Random&) const;
#else // @header-generator platform
    MCAPI ::std::optional<::EnchantmentInstance> _trySelectEnchantmentFromOptions(::Random& random) const;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // destructor thunk
#else // @header-generator platform
    // static functions
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::std::unique_ptr<::EnchantBookForTradingFunction>
    deserialize(::Json::Value object, ::std::vector<::std::unique_ptr<::LootItemCondition>>& predicates);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $apply(::ItemInstance&, ::Random&, ::Trade const&, ::LootTableContext&);
#else // @header-generator platform
    MCAPI void $apply(::ItemStack& item, ::Random& random, ::LootTableContext&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $apply(::ItemInstance&, ::Random&, ::LootTableContext&);
#else // @header-generator platform
    MCAPI int $apply(::ItemStack& item, ::Random& random, ::Trade const& trade, ::LootTableContext& context);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $apply(::ItemStack&, ::Random&, ::Trade const&, ::LootTableContext&);
#else // @header-generator platform
    MCAPI void $apply(::ItemInstance& item, ::Random& random, ::LootTableContext&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $apply(::ItemStack&, ::Random&, ::LootTableContext&);
#else // @header-generator platform
    MCAPI int $apply(::ItemInstance& item, ::Random& random, ::Trade const& trade, ::LootTableContext& context);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::LootItemFunction::FunctionType $getFunctionType() const;
    // NOLINTEND
#else // @header-generator platform
    MCFOLD ::LootItemFunction::FunctionType $getFunctionType() const;
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
