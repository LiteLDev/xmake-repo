#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/item/trading/Trade.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
struct Trade;
// clang-format on
#endif // @header-generator platform

struct TradeGroup {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                 mNumToSelect;
    ::ll::TypedStorage<8, 24, std::vector<Trade>> mTrades;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                     mNumToSelect;
    ::ll::TypedStorage<8, 24, ::std::vector<::Trade>> mTrades;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    TradeGroup& operator=(TradeGroup const&);
    TradeGroup(TradeGroup const&);
#else // @header-generator platform
#endif // @header-generator platform
};
