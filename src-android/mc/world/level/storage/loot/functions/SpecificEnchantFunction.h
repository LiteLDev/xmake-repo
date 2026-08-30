#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/IntRange.h"
#include "mc/world/item/enchanting/Enchant.h"
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

// auto generated forward declare list
// clang-format off
class ItemInstance;
class ItemStack;
class ItemStackBase;
class LootItemCondition;
class LootTableContext;
class Random;
namespace Json { class Value; }
// clang-format on

class SpecificEnchantFunction : public ::LootItemFunction {
public:
    // SpecificEnchantFunction inner types declare
    // clang-format off
    struct EnchantInfo;
    // clang-format on

    // SpecificEnchantFunction inner types define
    struct EnchantInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1>           enchantment;
        ::ll::TypedStorage<4, 8, ::IntRange> levelRange;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<SpecificEnchantFunction::EnchantInfo>> mEnchantments;
    // NOLINTEND

public:
    // prevent constructor by default
    SpecificEnchantFunction();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SpecificEnchantFunction();

    virtual void apply(::ItemInstance&, ::Random&, ::LootTableContext&);

    virtual void apply(::ItemStack&, ::Random&, ::LootTableContext&);

    virtual ::LootItemFunction::FunctionType getFunctionType() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::vector<SpecificEnchantFunction::EnchantInfo> const& getEnchantments() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::unique_ptr<LootItemFunction>
    deserialize(::Json::Value, std::vector<std::unique_ptr<LootItemCondition>>&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $apply(::ItemInstance&, ::Random&, ::LootTableContext&);

    MCNAPI void $apply(::ItemStack&, ::Random&, ::LootTableContext&);

    MCNAPI ::LootItemFunction::FunctionType $getFunctionType() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
