#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_30/item/trading/TradeItemList.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_30 {

struct Trade {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_21_30::TradeItemList>> mWants;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_21_30::TradeItemList>> mGives;
    ::ll::TypedStorage<4, 4, uint>                                               mTraderExp;
    ::ll::TypedStorage<4, 4, int>                                                mMaxUses;
    ::ll::TypedStorage<1, 1, bool>                                               mRewardExp;
    ::ll::TypedStorage<4, 4, int>                                                mWeight;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~Trade();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_30
