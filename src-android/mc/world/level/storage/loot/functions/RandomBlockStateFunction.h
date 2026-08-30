#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/RandomValueBounds.h"
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

// auto generated forward declare list
// clang-format off
class Block;
class ItemInstance;
class ItemStack;
class LootItemCondition;
class LootTableContext;
class Random;
namespace Json { class Value; }
// clang-format on

class RandomBlockStateFunction : public ::LootItemFunction {
public:
    // RandomBlockStateFunction inner types define
    enum RemapComplexAliasBlockResult : uint {
        NotComplexAlias = 0,
        Succeed         = 1,
        Fail            = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::RandomValueBounds> mValues;
    ::ll::TypedStorage<8, 24, std::string>        mBlockStateName;
    // NOLINTEND

public:
    // prevent constructor by default
    RandomBlockStateFunction();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RandomBlockStateFunction();

    virtual void apply(::ItemInstance&, ::Random&, ::LootTableContext&);

    virtual void apply(::ItemStack&, ::Random&, ::LootTableContext&);

    virtual ::LootItemFunction::FunctionType getFunctionType() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::RandomBlockStateFunction::RemapComplexAliasBlockResult
    _remapComplexAliasBlock(int, ::Block const*&, std::string const&);

    MCNAPI std::string const& getBlockStateName() const;

    MCNAPI ::RandomValueBounds getValues() const;
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
