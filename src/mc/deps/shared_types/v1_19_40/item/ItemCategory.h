#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on
#endif // @header-generator platform

namespace SharedTypes::v1_19_40 {

struct ItemCategory {
public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // ItemCategory inner types declare
    // clang-format off
    struct CREATIVE_ITEM_CATEGORY_MAPPING;
    // clang-format on

#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    struct CREATIVE_ITEM_CATEGORY_MAPPING {
    public:
        // static variables
        // NOLINTBEGIN
        MCAPI static ::std::initializer_list<::SharedTypes::v1_19_40::ItemCategory::CreativeItemCategory> const& $RT1();
        // NOLINTEND
    };

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindCreativeItemCategoryType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
#endif // @header-generator platform
};

} // namespace SharedTypes::v1_19_40
