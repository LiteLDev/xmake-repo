#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/trading/TradeItem.h"

struct Trade {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                  mMaxUses;
    ::ll::TypedStorage<1, 1, bool>                                 mRewardExperience;
    ::ll::TypedStorage<4, 4, int>                                  mWeight;
    ::ll::TypedStorage<4, 4, uint>                                 mTraderExperience;
    ::ll::TypedStorage<4, 4, int>                                  mPrimaryOfferCount;
    ::ll::TypedStorage<8, 24, std::vector<std::vector<TradeItem>>> mOffer;
    ::ll::TypedStorage<8, 24, std::vector<std::vector<TradeItem>>> mReceive;
    // NOLINTEND

public:
    // prevent constructor by default
    Trade& operator=(Trade const&);
    Trade(Trade const&);
    Trade();
};
