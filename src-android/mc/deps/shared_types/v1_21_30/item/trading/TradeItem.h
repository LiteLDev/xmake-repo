#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/dynamic/DynamicValue.h"
#include "mc/deps/shared_types/util/AssetType.h"
#include "mc/deps/shared_types/util/Reference.h"
#include "mc/deps/shared_types/v1_21_20/filter_groups/FilterGroupData.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace cereal { struct ReflectionCtx; }
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
    ::ll::UntypedStorage<8, 24>                                            mItem;
    ::ll::TypedStorage<8, 24, std::vector<cereal::DynamicValue>>           mFunctions;
    ::ll::TypedStorage<8, 192, ::SharedTypes::v1_21_20::FilterGroupData>   mFilters;
    ::ll::TypedStorage<4, 4, float>                                        mPriceMultiplier;
    ::ll::UntypedStorage<8, 16>                                            mLegacyFunctions;
    ::ll::UntypedStorage<8, 16>                                            mLegacyFilters;
    // NOLINTEND

public:
    // prevent constructor by default
    TradeItem& operator=(TradeItem const&);
    TradeItem(TradeItem const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TradeItem(::SharedTypes::v1_21_30::TradeItem&&);

    MCNAPI ::SharedTypes::v1_21_30::TradeItem& operator=(::SharedTypes::v1_21_30::TradeItem&&);

    MCNAPI bool operator==(::SharedTypes::v1_21_30::TradeItem const&) const;

    MCNAPI ~TradeItem();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string_view const& DEPRECATED_FILTERS_FIELD();

    MCNAPI static std::string_view const& DEPRECATED_FUNCTIONS_FIELD();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_21_30::TradeItem&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_30
