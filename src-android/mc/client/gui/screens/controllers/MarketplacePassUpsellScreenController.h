#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
// clang-format on

class MarketplacePassUpsellScreenController : public ::MainMenuScreenController {
public:
    // prevent constructor by default
    MarketplacePassUpsellScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MarketplacePassUpsellScreenController();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit MarketplacePassUpsellScreenController(std::shared_ptr<MainMenuScreenModel>);

    MCNAPI void _registerBindings();
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
