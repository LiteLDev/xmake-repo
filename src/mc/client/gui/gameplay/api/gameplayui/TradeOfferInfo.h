#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace GameplayUI {

#if defined(LL_PLAT_A) // @header-generator platform
struct TradeOfferInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>         isOutOfUses;
    ::ll::TypedStorage<8, 24, std::string> buyAItemName;
    ::ll::TypedStorage<8, 24, std::string> buyBItemName;
    ::ll::TypedStorage<8, 24, std::string> sellItemName;
    ::ll::TypedStorage<4, 4, int>          buyAItemAmount;
    ::ll::TypedStorage<4, 4, int>          buyBItemAmount;
    ::ll::TypedStorage<4, 4, int>          sellItemAmount;
    ::ll::TypedStorage<8, 24, std::string> buyAItemId;
    ::ll::TypedStorage<8, 24, std::string> buyBItemId;
    ::ll::TypedStorage<8, 24, std::string> sellItemId;
    ::ll::TypedStorage<1, 1, bool>         hasSecondaryBuyItem;
    ::ll::TypedStorage<1, 1, bool>         playerHasItemsForTrade;
    ::ll::TypedStorage<1, 1, bool>         isSelectedTrade;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct TradeOfferInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>           isOutOfUses;
    ::ll::TypedStorage<8, 32, ::std::string> buyAItemName;
    ::ll::TypedStorage<8, 32, ::std::string> buyBItemName;
    ::ll::TypedStorage<8, 32, ::std::string> sellItemName;
    ::ll::TypedStorage<4, 4, int>            buyAItemAmount;
    ::ll::TypedStorage<4, 4, int>            buyBItemAmount;
    ::ll::TypedStorage<4, 4, int>            sellItemAmount;
    ::ll::TypedStorage<8, 32, ::std::string> buyAItemId;
    ::ll::TypedStorage<8, 32, ::std::string> buyBItemId;
    ::ll::TypedStorage<8, 32, ::std::string> sellItemId;
    ::ll::TypedStorage<1, 1, bool>           hasSecondaryBuyItem;
    ::ll::TypedStorage<1, 1, bool>           playerHasItemsForTrade;
    ::ll::TypedStorage<1, 1, bool>           isSelectedTrade;
    // NOLINTEND
};
#else // @header-generator platform
struct TradeOfferInfo {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace GameplayUI
