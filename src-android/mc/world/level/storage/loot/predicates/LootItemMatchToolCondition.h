#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/IntRange.h"
#include "mc/world/item/ItemDescriptor.h"
#include "mc/world/level/storage/loot/predicates/LootItemCondition.h"

// auto generated forward declare list
// clang-format off
class Item;
class LootTableContext;
class Random;
namespace Json { class Value; }
// clang-format on

class LootItemMatchToolCondition : public ::LootItemCondition {
public:
    // LootItemMatchToolCondition inner types declare
    // clang-format off
    struct EnchantInfo;
    // clang-format on

    // LootItemMatchToolCondition inner types define
    struct EnchantInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string> mEnchantment;
        ::ll::TypedStorage<4, 8, ::IntRange>   mLevelRange;
        // NOLINTEND

    public:
        // prevent constructor by default
        EnchantInfo& operator=(EnchantInfo const&);
        EnchantInfo(EnchantInfo const&);
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::IntRange>                                            mCount;
    ::ll::TypedStorage<4, 8, ::IntRange>                                            mDurability;
    ::ll::TypedStorage<8, 24, std::string>                                          mItemName;
    ::ll::TypedStorage<8, 24, std::vector<LootItemMatchToolCondition::EnchantInfo>> mEnchantments;
    ::ll::TypedStorage<8, 24, std::vector<ItemDescriptor> const>                    mItemTagsAny;
    ::ll::TypedStorage<8, 24, std::vector<ItemDescriptor> const>                    mItemTagsAll;
    ::ll::TypedStorage<8, 24, std::vector<ItemDescriptor> const>                    mItemTagsNone;
    // NOLINTEND

public:
    // prevent constructor by default
    LootItemMatchToolCondition();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LootItemMatchToolCondition();

    virtual bool applies(::Random&, ::LootTableContext&);

    virtual ::LootItemCondition::ConditionType getConditionType() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _doItemTagsMatch(::Item const&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::unique_ptr<LootItemCondition> deserialize(::Json::Value const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $applies(::Random&, ::LootTableContext&);

    MCNAPI ::LootItemCondition::ConditionType $getConditionType() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
