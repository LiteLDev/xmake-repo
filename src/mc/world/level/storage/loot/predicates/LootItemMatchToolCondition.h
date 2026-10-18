#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/util/IntRange.h"
#include "mc/world/item/ItemDescriptor.h"
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string> mEnchantment;
        ::ll::TypedStorage<4, 8, ::IntRange>   mLevelRange;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 32> mUnk925f0a;
        ::ll::UntypedStorage<4, 8>  mUnkeb6509;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        EnchantInfo& operator=(EnchantInfo const&);
        EnchantInfo(EnchantInfo const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
        EnchantInfo();
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 8, ::IntRange>                                            mCount;
    ::ll::TypedStorage<4, 8, ::IntRange>                                            mDurability;
    ::ll::TypedStorage<8, 24, std::string>                                          mItemName;
    ::ll::TypedStorage<8, 24, std::vector<LootItemMatchToolCondition::EnchantInfo>> mEnchantments;
    ::ll::TypedStorage<8, 24, std::vector<ItemDescriptor> const>                    mItemTagsAny;
    ::ll::TypedStorage<8, 24, std::vector<ItemDescriptor> const>                    mItemTagsAll;
    ::ll::TypedStorage<8, 24, std::vector<ItemDescriptor> const>                    mItemTagsNone;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 8>  mUnkeb8bef;
    ::ll::UntypedStorage<4, 8>  mUnkf68036;
    ::ll::UntypedStorage<8, 32> mUnk361680;
    ::ll::UntypedStorage<8, 24> mUnka00550;
    ::ll::UntypedStorage<8, 24> mUnk7efdcf;
    ::ll::UntypedStorage<8, 24> mUnk32586a;
    ::ll::UntypedStorage<8, 24> mUnkcc3703;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    LootItemMatchToolCondition& operator=(LootItemMatchToolCondition const&);
    LootItemMatchToolCondition(LootItemMatchToolCondition const&);
#endif // @header-generator platform
    LootItemMatchToolCondition();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~LootItemMatchToolCondition();
#else // @header-generator platform
    virtual bool applies(::Random&, ::LootTableContext& context) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool applies(::Random&, ::LootTableContext&);

    virtual ::LootItemCondition::ConditionType getConditionType() const;
#else // @header-generator platform
    virtual ::LootItemCondition::ConditionType getConditionType() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _doItemTagsMatch(::Item const&) const;
#else // @header-generator platform
    MCNAPI bool _doItemTagsMatch(::Item const& item) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unique_ptr<LootItemCondition> deserialize(::Json::Value const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI static ::std::unique_ptr<::LootItemCondition> deserialize(::Json::Value const& object);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $applies(::Random&, ::LootTableContext&);
#else // @header-generator platform
    MCNAPI bool $applies(::Random&, ::LootTableContext& context);
#endif // @header-generator platform

    MCNAPI ::LootItemCondition::ConditionType $getConditionType() const;
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
