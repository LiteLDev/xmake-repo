#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/ScreenControllerProxy.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenController;
class MainMenuScreenModel;
// clang-format on

class StartMenuScreenControllerProxy : public ::ScreenControllerProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::MainMenuScreenController>> mOwnerWeakPtr;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StartMenuScreenControllerProxy() /*override*/ = default;

    virtual ::std::shared_ptr<::MainMenuScreenModel> getMainMenuScreenModel() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::MainMenuScreenModel> $getMainMenuScreenModel();
    // NOLINTEND
};
#else // @header-generator platform
class StartMenuScreenControllerProxy {};
#endif // @header-generator platform
#endif // @header-generator platform
