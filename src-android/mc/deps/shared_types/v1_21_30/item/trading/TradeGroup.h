#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_30/item/trading/Trade.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_30 {

struct TradeGroup {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                        mNumToSelect;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_21_30::Trade>> mTrades;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_21_30::TradeGroup& operator=(::SharedTypes::v1_21_30::TradeGroup const&);

    MCNAPI bool operator==(::SharedTypes::v1_21_30::TradeGroup const&) const;

    MCNAPI ~TradeGroup();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_30
