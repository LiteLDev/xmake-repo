#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
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

class SetArmorTrimFunction : public ::LootItemFunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::HashedString> mMaterial;
    ::ll::TypedStorage<8, 40, ::HashedString> mPattern;
    // NOLINTEND

public:
    // prevent constructor by default
    SetArmorTrimFunction();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SetArmorTrimFunction();

    virtual void apply(::ItemInstance&, ::Random&, ::LootTableContext&);

    virtual void apply(::ItemStack&, ::Random&, ::LootTableContext&);

    virtual ::LootItemFunction::FunctionType getFunctionType() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _apply(::ItemStackBase&, ::LootTableContext const&) const;

    MCNAPI std::string const& getMaterial() const;

    MCNAPI std::string const& getPattern() const;
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
