#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
// clang-format on

class MarketplacePassPurchaseAmazonDeviceWarningScreenController : public ::MainMenuScreenController {
public:
    // prevent constructor by default
    MarketplacePassPurchaseAmazonDeviceWarningScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MarketplacePassPurchaseAmazonDeviceWarningScreenController();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit MarketplacePassPurchaseAmazonDeviceWarningScreenController(std::shared_ptr<MainMenuScreenModel>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<MainMenuScreenModel>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
// clang-format on

class MarketplacePassPurchaseAmazonDeviceWarningScreenController : public ::MainMenuScreenController {
public:
    // prevent constructor by default
    MarketplacePassPurchaseAmazonDeviceWarningScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MarketplacePassPurchaseAmazonDeviceWarningScreenController() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit MarketplacePassPurchaseAmazonDeviceWarningScreenController(
        ::std::shared_ptr<::MainMenuScreenModel> model
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::MainMenuScreenModel> model);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};
#else // @header-generator platform
class MarketplacePassPurchaseAmazonDeviceWarningScreenController {};
#endif // @header-generator platform
#endif // @header-generator platform
