#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/trading/TradeGroup.h"

struct TradeTier {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                     mExpToUnlock;
    ::ll::TypedStorage<8, 24, std::vector<TradeGroup>> mGroups;
    // NOLINTEND

public:
    // prevent constructor by default
    TradeTier& operator=(TradeTier const&);
    TradeTier(TradeTier const&);
    TradeTier();
};
