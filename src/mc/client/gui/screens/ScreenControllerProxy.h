#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/ScreenControllerProxyType.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
// clang-format on

class ScreenControllerProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ScreenControllerProxyType const> mType;
    // NOLINTEND

public:
    // prevent constructor by default
    ScreenControllerProxy();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScreenControllerProxy();

    virtual std::shared_ptr<MainMenuScreenModel> getMainMenuScreenModel();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScreenControllerProxy(::ScreenControllerProxyType);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScreenControllerProxyType);
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
#include "mc/client/gui/screens/ScreenControllerProxyType.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
// clang-format on

class ScreenControllerProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ScreenControllerProxyType const> mType;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScreenControllerProxy() = default;

    virtual ::std::shared_ptr<::MainMenuScreenModel> getMainMenuScreenModel();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::std::shared_ptr<::MainMenuScreenModel> $getMainMenuScreenModel();
    // NOLINTEND
};
#else // @header-generator platform
class ScreenControllerProxy {};
#endif // @header-generator platform
#endif // @header-generator platform
