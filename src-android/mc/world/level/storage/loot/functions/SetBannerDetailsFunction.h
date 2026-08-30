#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemColor.h"
#include "mc/world/level/block/BannerBlockType.h"
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

class SetBannerDetailsFunction : public ::LootItemFunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::BannerBlockType>                         mBannerType;
    ::ll::TypedStorage<1, 1, ::ItemColor>                               mBaseColor;
    ::ll::TypedStorage<8, 24, std::vector<std::pair<uchar, ItemColor>>> mBannerPatterns;
    // NOLINTEND

public:
    // prevent constructor by default
    SetBannerDetailsFunction();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SetBannerDetailsFunction();

    virtual void apply(::ItemInstance&, ::Random&, ::LootTableContext&);

    virtual void apply(::ItemStack&, ::Random&, ::LootTableContext&);

    virtual ::LootItemFunction::FunctionType getFunctionType() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _apply(::ItemStackBase&, ::Random&, ::LootTableContext&) const;

    MCNAPI ::BannerBlockType getBannerType() const;

    MCNAPI ::ItemColor getBaseColor() const;

    MCNAPI std::vector<std::pair<uchar, ItemColor>> const& getPatterns() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _parseBannerPattern(std::vector<std::pair<uchar, ItemColor>>&, ::Json::Value const&);

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
