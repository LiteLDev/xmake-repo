#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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

class CarryOverBlockEntityDataFunction : public ::LootItemFunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk6bcd42;
    // NOLINTEND

public:
    // prevent constructor by default
    CarryOverBlockEntityDataFunction& operator=(CarryOverBlockEntityDataFunction const&);
    CarryOverBlockEntityDataFunction(CarryOverBlockEntityDataFunction const&);
    CarryOverBlockEntityDataFunction();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CarryOverBlockEntityDataFunction() /*override*/;

    virtual void apply(::ItemStack& item, ::Random&, ::LootTableContext& context) /*override*/;

    virtual void apply(::ItemInstance& item, ::Random&, ::LootTableContext& context) /*override*/;

    virtual ::LootItemFunction::FunctionType getFunctionType() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _apply(::ItemStackBase& item, ::LootTableContext& context);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI static ::std::unique_ptr<::LootItemFunction>
    deserialize(::Json::Value const& object, ::std::vector<::std::unique_ptr<::LootItemCondition>>& predicates);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $apply(::ItemStack& item, ::Random&, ::LootTableContext& context);

    MCNAPI void $apply(::ItemInstance& item, ::Random&, ::LootTableContext& context);

    MCNAPI ::LootItemFunction::FunctionType $getFunctionType() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
