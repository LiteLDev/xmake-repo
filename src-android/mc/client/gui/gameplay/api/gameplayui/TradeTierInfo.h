#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace GameplayUI {

struct TradeTierInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> tierName;
    ::ll::TypedStorage<1, 1, bool>         isTierVisible;
    ::ll::TypedStorage<1, 1, bool>         isTierUnlocked;
    ::ll::TypedStorage<4, 4, int>          tradeOffers;
    // NOLINTEND
};

} // namespace GameplayUI
