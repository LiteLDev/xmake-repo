#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/client/gui/screens/controllers/PackSettingsInfo.h"

// auto generated forward declare list
// clang-format off
class DynamicFormScreenController;
class MainMenuScreenModel;
class PackSettings;
namespace Json { class Value; }
// clang-format on

class PackSettingsScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                           mHasOpened;
    ::ll::UntypedStorage<8, 160>                             mPackSettingsInfo;
    ::ll::TypedStorage<8, 8, ::PackSettings*>                mPackSettings;
    ::ll::TypedStorage<8, 8, ::DynamicFormScreenController*> mDynamicFormScreenController;
    // NOLINTEND

public:
    // prevent constructor by default
    PackSettingsScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PackSettingsScreenController();

    virtual void onOpen();

    virtual void onTerminate();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PackSettingsScreenController(std::shared_ptr<MainMenuScreenModel>, ::PackSettingsInfo);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<MainMenuScreenModel>, ::PackSettingsInfo);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onOpen();

    MCNAPI void $onTerminate();
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
#include "mc/client/gui/screens/controllers/PackSettingsInfo.h"

// auto generated forward declare list
// clang-format off
class DynamicFormScreenController;
class MainMenuScreenModel;
class PackSettings;
// clang-format on

class PackSettingsScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                           mHasOpened;
    ::ll::TypedStorage<8, 192, ::PackSettingsInfo>           mPackSettingsInfo;
    ::ll::TypedStorage<8, 8, ::PackSettings*>                mPackSettings;
    ::ll::TypedStorage<8, 8, ::DynamicFormScreenController*> mDynamicFormScreenController;
    // NOLINTEND

public:
    // prevent constructor by default
    PackSettingsScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onOpen() /*override*/;

    virtual void onTerminate() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    PackSettingsScreenController(::std::shared_ptr<::MainMenuScreenModel> model, ::PackSettingsInfo packSettingsInfo);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::MainMenuScreenModel> model, ::PackSettingsInfo packSettingsInfo);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onOpen();

    MCAPI void $onTerminate();
    // NOLINTEND
};
#else // @header-generator platform
class PackSettingsScreenController {};
#endif // @header-generator platform
#endif // @header-generator platform
