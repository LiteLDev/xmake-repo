#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
        _count                   = 27,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<LootItemCondition>>> mPredicates;
    // NOLINTEND

public:
    // prevent constructor by default
    LootItemFunction();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LootItemFunction();

    virtual int apply(::ItemInstance&, ::Random&, ::Trade const&, ::LootTableContext&);

    virtual void apply(::ItemInstance&, ::Random&, ::LootTableContext&) = 0;

    virtual int apply(::ItemStack&, ::Random&, ::Trade const&, ::LootTableContext&);

    virtual void apply(::ItemStack&, ::Random&, ::LootTableContext&) = 0;

    virtual ::LootItemFunction::FunctionType getFunctionType() const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::vector<std::unique_ptr<LootItemCondition>> const& getConditions() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::unique_ptr<LootItemFunction> deserialize(::Json::Value, bool);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::unordered_map<
        HashedString,
        std::function<
            std::unique_ptr<LootItemFunction>(Json::Value&, std::vector<std::unique_ptr<LootItemCondition>>&)>> const&
    mLootingExperimentalFunctions();

    MCNAPI static std::unordered_map<
        HashedString,
        std::function<
            std::unique_ptr<LootItemFunction>(Json::Value&, std::vector<std::unique_ptr<LootItemCondition>>&)>> const&
    mLootingFunctions();
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

    MCNAPI int $apply(::ItemStack&, ::Random&, ::Trade const&, ::LootTableContext&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
