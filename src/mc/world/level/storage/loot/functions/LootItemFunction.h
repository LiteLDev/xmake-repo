#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/level/storage/loot/predicates/LootItemCondition.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class HashedString;
class ItemInstance;
class ItemStack;
class LootItemCondition;
class LootTableContext;
class Random;
struct Trade;
namespace Json { class Value; }
// clang-format on

class LootItemFunction {
public:
    // LootItemFunction inner types define
    enum class FunctionType : int {
        SetItemCount             = 0,
        SetItemData              = 1,
        SetItemDamage            = 2,
        LootingEnchant           = 3,
        EnchantWithLevels        = 4,
        EnchantBookForTrading    = 5,
        EnchantRandomly          = 6,
        SmeltItem                = 7,
        SetDataFromColorIndex    = 8,
        EnchantRandomEquipment   = 9,
        RandomAuxValue           = 10,
        RandomBlockState         = 11,
        RandomDye                = 12,
        ExplorationMap           = 13,
        SetBannerDetails         = 14,
        ExplosionDecay           = 15,
        SetItemName              = 16,
        SetItemLore              = 17,
        SpecificEnchant          = 18,
        FillContainer            = 19,
        SetSpawnEgg              = 20,
        SetBookContents          = 21,
        SetStewEffect            = 22,
        SetOminousBottle         = 23,
        SetArmorTrim             = 24,
        SetPotion                = 25,
        CarryOverBlockEntityData = 26,
#if defined(LL_PLAT_A) // @header-generator platform
        _count                   = 27,
#else // @header-generator platform
        Count                    = 27,
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<LootItemCondition>>> mPredicates;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::LootItemCondition>>> mPredicates;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    LootItemFunction();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~LootItemFunction();
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual ~LootItemFunction();
#else // LL_PLAT_C
    virtual ~LootItemFunction() = default;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int apply(::ItemInstance&, ::Random&, ::Trade const&, ::LootTableContext&);
#else // @header-generator platform
    virtual void apply(::ItemStack& item, ::Random& random, ::LootTableContext& context) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void apply(::ItemInstance&, ::Random&, ::LootTableContext&) = 0;
#else // @header-generator platform
    virtual int apply(::ItemStack& item, ::Random& random, ::Trade const& trade, ::LootTableContext& context);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int apply(::ItemStack&, ::Random&, ::Trade const&, ::LootTableContext&);
#else // @header-generator platform
    virtual void apply(::ItemInstance& item, ::Random& random, ::LootTableContext& context) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void apply(::ItemStack&, ::Random&, ::LootTableContext&) = 0;
#else // @header-generator platform
    virtual int apply(::ItemInstance& item, ::Random& random, ::Trade const& trade, ::LootTableContext& context);
#endif // @header-generator platform

    virtual ::LootItemFunction::FunctionType getFunctionType() const = 0;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI std::vector<std::unique_ptr<LootItemCondition>> const& getConditions() const;
    // NOLINTEND

public:
#else // @header-generator platform
#endif // @header-generator platform
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unique_ptr<LootItemFunction> deserialize(::Json::Value, bool);
#else // @header-generator platform
    MCAPI static ::std::unique_ptr<::LootItemFunction>
    deserialize(::Json::Value object, bool usingUpcomingCreatorFeaturesExperiment);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unordered_map<
        HashedString,
        std::function<
            std::unique_ptr<LootItemFunction>(Json::Value&, std::vector<std::unique_ptr<LootItemCondition>>&)>> const&
#else // @header-generator platform
    MCAPI static ::std::unordered_map<
        ::HashedString,
        ::std::function<::std::unique_ptr<
            ::LootItemFunction>(::Json::Value&, ::std::vector<::std::unique_ptr<::LootItemCondition>>&)>> const&
#endif // @header-generator platform
    mLootingExperimentalFunctions();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unordered_map<
        HashedString,
        std::function<
            std::unique_ptr<LootItemFunction>(Json::Value&, std::vector<std::unique_ptr<LootItemCondition>>&)>> const&
#else // @header-generator platform
    MCAPI static ::std::unordered_map<
        ::HashedString,
        ::std::function<::std::unique_ptr<
            ::LootItemFunction>(::Json::Value&, ::std::vector<::std::unique_ptr<::LootItemCondition>>&)>> const&
#endif // @header-generator platform
    mLootingFunctions();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $apply(::ItemInstance&, ::Random&, ::Trade const&, ::LootTableContext&);
#else // @header-generator platform
    MCAPI int $apply(::ItemStack& item, ::Random& random, ::Trade const& trade, ::LootTableContext& context);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $apply(::ItemStack&, ::Random&, ::Trade const&, ::LootTableContext&);
#else // @header-generator platform
    MCAPI int $apply(::ItemInstance& item, ::Random& random, ::Trade const& trade, ::LootTableContext& context);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
