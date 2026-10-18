#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_110 {

struct ItemCategory {
public:
    // ItemCategory inner types define
    enum class CreativeItemCategory : uchar {
        All             = 0,
        Construction    = 1,
        Nature          = 2,
        Equipment       = 3,
        Items           = 4,
        ItemCommandOnly = 5,
        Undefined       = 6,
#if defined(LL_PLAT_A) // @header-generator platform
        _Count          = 7,
#else // @header-generator platform
        Count           = 7,
#endif // @header-generator platform
    };

    enum class CreativeItemCategoryStringError : uchar {
        EmptyString = 0,
        NotFound    = 1,
    };

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindCreativeItemCategoryType(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCAPI static void bindCreativeItemCategoryType(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::nonstd::expected<
        SharedTypes::v1_21_110::ItemCategory::CreativeItemCategory,
        SharedTypes::v1_21_110::ItemCategory::CreativeItemCategoryStringError>
    creativeItemCategoryFromString(std::string_view const);
#else // @header-generator platform
    MCAPI static ::nonstd::expected<
        ::SharedTypes::v1_21_110::ItemCategory::CreativeItemCategory,
        ::SharedTypes::v1_21_110::ItemCategory::CreativeItemCategoryStringError>
    creativeItemCategoryFromString(::std::string_view str);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string
        stringFromCreativeItemCategory(::SharedTypes::v1_21_110::ItemCategory::CreativeItemCategory);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::initializer_list<SharedTypes::v1_21_110::ItemCategory::CreativeItemCategory> const&
    CREATIVE_ITEM_CATEGORY_MAPPING();
#else // @header-generator platform
    MCAPI static ::std::string
    stringFromCreativeItemCategory(::SharedTypes::v1_21_110::ItemCategory::CreativeItemCategory category);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_110
