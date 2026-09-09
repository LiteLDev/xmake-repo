#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"
#include "mc/world/level/storage/loot/RandomValueBounds.h"
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

// auto generated forward declare list
// clang-format off
class Block;
class Item;
class ItemInstance;
class ItemStack;
class LootItemCondition;
class LootTableContext;
class Random;
namespace Json { class Value; }
// clang-format on

class SetItemDataFunction : public ::LootItemFunction {
public:
    // SetItemDataFunction inner types define
    enum ApplyForComplexAliasBlockResult : uchar {
        NotComplexAliasBlock           = 0,
        FailedToRemapComplexAliasBlock = 1,
        Success                        = 2,
    };

    enum ApplyForItemResult : uchar {
        AsNewItem   = 0,
        SetAuxValue = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::RandomValueBounds> mValue;
    ::ll::UntypedStorage<4, 4>                    mType;
    // NOLINTEND

public:
    // prevent constructor by default
    SetItemDataFunction();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SetItemDataFunction();

    virtual void apply(::ItemInstance&, ::Random&, ::LootTableContext&);

    virtual void apply(::ItemStack&, ::Random&, ::LootTableContext&);

    virtual ::LootItemFunction::FunctionType getFunctionType() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SetItemDataFunction::ApplyForComplexAliasBlockResult
    _applyImplForComplexAliasBlock(::Item const*&, std::string const&, ::Random&, int&);

    MCNAPI ::SetItemDataFunction::ApplyForItemResult
    _applyImplForItem(std::string const&, std::string const&, ::Random&, int&, ::WeakPtr<Item>&);

    MCNAPI ::RandomValueBounds getValue() const;
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
