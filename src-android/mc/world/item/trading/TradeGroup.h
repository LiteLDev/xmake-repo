#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/trading/Trade.h"

struct TradeGroup {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                 mNumToSelect;
    ::ll::TypedStorage<8, 24, std::vector<Trade>> mTrades;
    // NOLINTEND

public:
    // prevent constructor by default
    TradeGroup& operator=(TradeGroup const&);
    TradeGroup(TradeGroup const&);
};
