#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
// clang-format on

class RealmsPlusPurchaseWarningScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mCheckedUnderstand;
    ::ll::UntypedStorage<8, 48> mCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsPlusPurchaseWarningScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsPlusPurchaseWarningScreenController();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RealmsPlusPurchaseWarningScreenController(std::shared_ptr<MainMenuScreenModel>, std::function<void()>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<MainMenuScreenModel>, std::function<void()>);
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

class RealmsPlusPurchaseWarningScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                     mCheckedUnderstand;
    ::ll::TypedStorage<8, 64, ::std::function<void()>> mCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsPlusPurchaseWarningScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsPlusPurchaseWarningScreenController() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RealmsPlusPurchaseWarningScreenController(
        ::std::shared_ptr<::MainMenuScreenModel> model,
        ::std::function<void()>                  callback
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::MainMenuScreenModel> model, ::std::function<void()> callback);
    // NOLINTEND
};
#else // @header-generator platform
class RealmsPlusPurchaseWarningScreenController {};
#endif // @header-generator platform
#endif // @header-generator platform
