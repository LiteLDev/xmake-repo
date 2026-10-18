#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace GameplayUI {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct TradeTierInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> tierName;
    ::ll::TypedStorage<1, 1, bool>           isTierVisible;
    ::ll::TypedStorage<1, 1, bool>           isTierUnlocked;
    ::ll::TypedStorage<4, 4, int>            tradeOffers;
    // NOLINTEND
};
#else // @header-generator platform
struct TradeTierInfo {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace GameplayUI
