#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/client/gui/screens/controllers/UpdateVersionScreenContext.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
// clang-format on

class UpdateVersionScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mBodyText;
    ::ll::UntypedStorage<8, 32>            mTitleText;
    // NOLINTEND

public:
    // prevent constructor by default
    UpdateVersionScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UpdateVersionScreenController();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI UpdateVersionScreenController(std::shared_ptr<MainMenuScreenModel>, ::UpdateVersionScreenContext);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<MainMenuScreenModel>, ::UpdateVersionScreenContext);
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
