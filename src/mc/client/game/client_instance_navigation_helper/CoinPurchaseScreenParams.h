#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class IAppPlatform;
class IOfferRepository;
class ISceneFactory;
class ISceneStack;
class TrialManager;
namespace flighting { class TreatmentToggles; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace ClientInstanceNavigationHelper {

#if defined(LL_PLAT_A) // @header-generator platform
struct CoinPurchaseScreenParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ISceneStack&>                       mSceneStack;
    ::ll::TypedStorage<8, 8, ::ISceneFactory&>                     mSceneFactory;
    ::ll::UntypedStorage<8, 8>                                     mOfferRepository;
    ::ll::TypedStorage<8, 8, ::TrialManager const&>                mTrialManager;
    ::ll::TypedStorage<8, 8, ::IAppPlatform&>                      mAppPlatform;
    ::ll::TypedStorage<8, 8, ::flighting::TreatmentToggles const&> mTreatmentToggles;
    ::ll::TypedStorage<8, 8, std::string const&>                   mCoinPurchaseScreenPageId;
    ::ll::TypedStorage<4, 4, int>                                  mNeededCoins;
    ::ll::UntypedStorage<8, 48>                                    mCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    CoinPurchaseScreenParams& operator=(CoinPurchaseScreenParams const&);
    CoinPurchaseScreenParams(CoinPurchaseScreenParams const&);
    CoinPurchaseScreenParams();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct CoinPurchaseScreenParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk3331b9;
    ::ll::UntypedStorage<8, 8>  mUnkf081fc;
    ::ll::UntypedStorage<8, 8>  mUnked5388;
    ::ll::UntypedStorage<8, 8>  mUnkec4aee;
    ::ll::UntypedStorage<8, 8>  mUnkf7bbfc;
    ::ll::UntypedStorage<8, 8>  mUnkec6477;
    ::ll::UntypedStorage<8, 8>  mUnk43c0d9;
    ::ll::UntypedStorage<4, 4>  mUnk95f3b6;
    ::ll::UntypedStorage<8, 64> mUnk4bede7;
    // NOLINTEND

public:
    // prevent constructor by default
    CoinPurchaseScreenParams& operator=(CoinPurchaseScreenParams const&);
    CoinPurchaseScreenParams(CoinPurchaseScreenParams const&);
    CoinPurchaseScreenParams();
};
#else // @header-generator platform
struct CoinPurchaseScreenParams {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace ClientInstanceNavigationHelper
