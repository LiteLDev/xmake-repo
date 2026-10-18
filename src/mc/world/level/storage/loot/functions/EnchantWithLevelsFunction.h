#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/RandomValueBounds.h"
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

// auto generated forward declare list
// clang-format off
class ItemInstance;
class ItemStack;
class LootItemCondition;
class LootTableContext;
class Random;
struct Trade;
namespace Json { class Value; }
// clang-format on

class EnchantWithLevelsFunction : public ::LootItemFunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::RandomValueBounds> mLevels;
    ::ll::TypedStorage<1, 1, bool>                mTreasure;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    EnchantWithLevelsFunction();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~EnchantWithLevelsFunction();
#else // @header-generator platform
    virtual ~EnchantWithLevelsFunction() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int apply(::ItemInstance&, ::Random&, ::Trade const&, ::LootTableContext&);
#else // @header-generator platform
    virtual void apply(::ItemStack& item, ::Random& random, ::LootTableContext& context) /*override*/;
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
    virtual void apply(::ItemInstance& item, ::Random& random, ::LootTableContext& context) /*override*/;
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
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
#else // @header-generator platform
    // static functions
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::RandomValueBounds getLevels() const;

    MCNAPI bool getTreasure() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::std::unique_ptr<::LootItemFunction>
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
#ifdef LL_PLAT_S
    MCAPI void $apply(::ItemStack& item, ::Random& random, ::LootTableContext& context);
#else // LL_PLAT_C
    MCFOLD void $apply(::ItemStack& item, ::Random& random, ::LootTableContext& context);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $apply(::ItemInstance&, ::Random&, ::LootTableContext&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI int $apply(::ItemStack& item, ::Random& random, ::Trade const& trade, ::LootTableContext& context);
#else // LL_PLAT_C
    MCFOLD int $apply(::ItemStack& item, ::Random& random, ::Trade const& trade, ::LootTableContext& context);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $apply(::ItemStack&, ::Random&, ::Trade const&, ::LootTableContext&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI void $apply(::ItemInstance& item, ::Random& random, ::LootTableContext& context);
#else // LL_PLAT_C
    MCFOLD void $apply(::ItemInstance& item, ::Random& random, ::LootTableContext& context);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $apply(::ItemStack&, ::Random&, ::LootTableContext&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI int $apply(::ItemInstance& item, ::Random& random, ::Trade const& trade, ::LootTableContext& context);
#else // LL_PLAT_C
    MCFOLD int $apply(::ItemInstance& item, ::Random& random, ::Trade const& trade, ::LootTableContext& context);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::LootItemFunction::FunctionType $getFunctionType() const;
#else // @header-generator platform
    MCFOLD ::LootItemFunction::FunctionType $getFunctionType() const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
