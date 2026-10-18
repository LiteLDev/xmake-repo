#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ILayoutContentRefreshable;
class ISceneFactory;
class ISceneStack;
class StoreDataDrivenScreenController;
struct StoreDataDrivenScreenParams;
namespace ClientInstanceNavigationHelper { struct CoinPurchaseScreenParams; }
// clang-format on

namespace ClientInstanceNavigationHelper {
// functions
// NOLINTBEGIN
MCNAPI void navigateToCoinPurchaseScreen_AssumingHasQueriedProducts(
    ::ClientInstanceNavigationHelper::CoinPurchaseScreenParams& params
);

MCNAPI bool navigateToNonGenericKnownPageID(
    ::StoreDataDrivenScreenParams const& params,
    ::StoreDataDrivenScreenController&   controller
);

MCNAPI void navigateToStoreDataDrivenScreen(
    ::StoreDataDrivenScreenParams const& params,
    ::StoreDataDrivenScreenController&   controller
);

MCNAPI void navigateToStoreDataDrivenScreen(
    ::StoreDataDrivenScreenParams const& params,
    ::ISceneStack&                       sceneStack,
    ::ISceneFactory&                     sceneFactory,
    ::ILayoutContentRefreshable&         existingController
);

MCNAPI void popBackToOrCreateNewStoreDataDrivenScreen(
    ::StoreDataDrivenScreenParams const& params,
    ::StoreDataDrivenScreenController&   controller
);
// NOLINTEND

} // namespace ClientInstanceNavigationHelper
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
