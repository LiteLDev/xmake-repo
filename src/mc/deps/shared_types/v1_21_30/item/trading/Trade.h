#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_30/item/trading/TradeItemList.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace cereal { struct ReflectionCtx; }
#else // @header-generator platform
namespace SharedTypes::v1_21_30 { struct TradeItemList; }
#endif // @header-generator platform
// clang-format on

namespace SharedTypes::v1_21_30 {

struct Trade {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_21_30::TradeItemList>> mWants;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_21_30::TradeItemList>> mGives;
    ::ll::TypedStorage<4, 4, uint>                                               mTraderExp;
    ::ll::TypedStorage<4, 4, int>                                                mMaxUses;
    ::ll::TypedStorage<1, 1, bool>                                               mRewardExp;
    ::ll::TypedStorage<4, 4, int>                                                mWeight;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_30::TradeItemList>> mWants;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_30::TradeItemList>> mGives;
    ::ll::TypedStorage<4, 4, uint>                                                   mTraderExp;
    ::ll::TypedStorage<4, 4, int>                                                    mMaxUses;
    ::ll::TypedStorage<1, 1, bool>                                                   mRewardExp;
    ::ll::TypedStorage<4, 4, int>                                                    mWeight;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~Trade();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI bool operator==(::SharedTypes::v1_21_30::Trade const&) const;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_30
