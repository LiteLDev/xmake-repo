#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/ScreenControllerProxy.h"
#include "mc/client/gui/screens/ScreenControllerProxyType.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenController;
class MainMenuScreenModel;
// clang-format on

class StartMenuScreenControllerProxy : public ::ScreenControllerProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<MainMenuScreenController>> mOwnerWeakPtr;
    // NOLINTEND

public:
    // prevent constructor by default
    StartMenuScreenControllerProxy();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StartMenuScreenControllerProxy();

    virtual std::shared_ptr<MainMenuScreenModel> getMainMenuScreenModel();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::shared_ptr<MainMenuScreenModel> $getMainMenuScreenModel();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
