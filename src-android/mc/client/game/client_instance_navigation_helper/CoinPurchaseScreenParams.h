#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IAppPlatform;
class IOfferRepository;
class ISceneFactory;
class ISceneStack;
class TrialManager;
namespace flighting { class TreatmentToggles; }
// clang-format on

namespace ClientInstanceNavigationHelper {

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

} // namespace ClientInstanceNavigationHelper
