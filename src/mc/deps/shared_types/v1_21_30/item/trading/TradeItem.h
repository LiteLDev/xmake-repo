#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/cereal/schema/dynamic/DynamicValue.h"
#include "mc/deps/shared_types/util/AssetType.h"
#else // @header-generator platform
#include "mc/deps/json/Value.h"
#endif // @header-generator platform
#include "mc/deps/shared_types/util/Reference.h"
#include "mc/deps/shared_types/v1_21_20/filter_groups/FilterGroupData.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace Json { class Value; }
namespace cereal { struct ReflectionCtx; }
#else // @header-generator platform
namespace cereal { class DynamicValue; }
#endif // @header-generator platform
// clang-format on

namespace SharedTypes::v1_21_30 {

struct TradeItem {
public:
    // TradeItem inner types declare
    // clang-format off
    struct Quantity;
    // clang-format on

    // TradeItem inner types define
    struct Quantity {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint> mMin;
        ::ll::TypedStorage<4, 4, uint> mMax;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::SharedTypes::v1_21_30::TradeItem::Quantity> mQuantity;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>                                            mItem;
    ::ll::TypedStorage<8, 24, std::vector<cereal::DynamicValue>>           mFunctions;
    ::ll::TypedStorage<8, 192, ::SharedTypes::v1_21_20::FilterGroupData>   mFilters;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::SharedTypes::Reference<10>>                mItem;
    ::ll::TypedStorage<8, 24, ::std::vector<::cereal::DynamicValue>>       mFunctions;
    ::ll::TypedStorage<8, 232, ::SharedTypes::v1_21_20::FilterGroupData>   mFilters;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                                        mPriceMultiplier;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 16>                                            mLegacyFunctions;
    ::ll::UntypedStorage<8, 16>                                            mLegacyFilters;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::Json::Value>                               mLegacyFunctions;
    ::ll::TypedStorage<8, 16, ::Json::Value>                               mLegacyFilters;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    TradeItem& operator=(TradeItem const&);
#if defined(LL_PLAT_A) // @header-generator platform
    TradeItem(TradeItem const&);
#else // @header-generator platform
    TradeItem();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI TradeItem(::SharedTypes::v1_21_30::TradeItem&&);
#else // @header-generator platform
    MCAPI TradeItem(::SharedTypes::v1_21_30::TradeItem&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::v1_21_30::TradeItem& operator=(::SharedTypes::v1_21_30::TradeItem&&);
#else // @header-generator platform
    MCAPI TradeItem(::SharedTypes::v1_21_30::TradeItem const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator==(::SharedTypes::v1_21_30::TradeItem const&) const;
#else // @header-generator platform
    MCAPI bool operator==(::SharedTypes::v1_21_30::TradeItem const&) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~TradeItem();
#else // @header-generator platform
    MCAPI ~TradeItem();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string_view const& DEPRECATED_FILTERS_FIELD();
#else // @header-generator platform
    MCAPI static ::std::string_view const& DEPRECATED_FILTERS_FIELD();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string_view const& DEPRECATED_FUNCTIONS_FIELD();
#else // @header-generator platform
    MCAPI static ::std::string_view const& DEPRECATED_FUNCTIONS_FIELD();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::SharedTypes::v1_21_30::TradeItem&&);
#else // @header-generator platform
    MCAPI void* $ctor(::SharedTypes::v1_21_30::TradeItem&&);

    MCAPI void* $ctor(::SharedTypes::v1_21_30::TradeItem const&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_30
