#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class ItemInstance;
class ItemStack;
class LootItemCondition;
class LootTableContext;
class Random;
namespace Json { class Value; }
// clang-format on

class SetBookContentsFunction : public ::LootItemFunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>              mTitle;
    ::ll::TypedStorage<8, 24, std::string>              mAuthor;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mPages;
    // NOLINTEND

public:
    // prevent constructor by default
    SetBookContentsFunction();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SetBookContentsFunction();

    virtual void apply(::ItemInstance&, ::Random&, ::LootTableContext&);

    virtual void apply(::ItemStack&, ::Random&, ::LootTableContext&);

    virtual ::LootItemFunction::FunctionType getFunctionType() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _fillUserData(::CompoundTag&);

    MCNAPI std::string const& getAuthor() const;

    MCNAPI std::vector<std::string> const& getPages() const;

    MCNAPI std::string const& getTitle() const;
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
