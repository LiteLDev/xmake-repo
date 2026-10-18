#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/item/trading/TradeItem.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
struct TradeItem;
// clang-format on
#endif // @header-generator platform

struct Trade {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                                  mMaxUses;
    ::ll::TypedStorage<1, 1, bool>                                 mRewardExperience;
    ::ll::TypedStorage<4, 4, int>                                  mWeight;
    ::ll::TypedStorage<4, 4, uint>                                 mTraderExperience;
    ::ll::TypedStorage<4, 4, int>                                  mPrimaryOfferCount;
    ::ll::TypedStorage<8, 24, std::vector<std::vector<TradeItem>>> mOffer;
    ::ll::TypedStorage<8, 24, std::vector<std::vector<TradeItem>>> mReceive;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                                        mMaxUses;
    ::ll::TypedStorage<1, 1, bool>                                       mRewardExperience;
    ::ll::TypedStorage<4, 4, int>                                        mWeight;
    ::ll::TypedStorage<4, 4, uint>                                       mTraderExperience;
    ::ll::TypedStorage<4, 4, int>                                        mPrimaryOfferCount;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::vector<::TradeItem>>> mOffer;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::vector<::TradeItem>>> mReceive;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    Trade& operator=(Trade const&);
    Trade(Trade const&);
    Trade();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Trade& operator=(::Trade&&);

    MCAPI ~Trade();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
#endif // @header-generator platform
};
