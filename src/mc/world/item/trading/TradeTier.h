#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/item/trading/TradeGroup.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
struct TradeGroup;
// clang-format on
#endif // @header-generator platform

struct TradeTier {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, uint>                     mExpToUnlock;
    ::ll::TypedStorage<8, 24, std::vector<TradeGroup>> mGroups;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, uint>                         mExpToUnlock;
    ::ll::TypedStorage<8, 24, ::std::vector<::TradeGroup>> mGroups;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    TradeTier& operator=(TradeTier const&);
    TradeTier(TradeTier const&);
    TradeTier();
#else // @header-generator platform
#endif // @header-generator platform
};
