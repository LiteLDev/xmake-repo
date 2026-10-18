#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
namespace Json { class Value; }
// clang-format on

class AddExternalServerScreenController : public ::MainMenuScreenController {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
namespace Json { class Value; }
// clang-format on

class AddExternalServerScreenController : public ::MainMenuScreenController {
#else // @header-generator platform
class AddExternalServerScreenController {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // AddExternalServerScreenController inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class Mode : int {
        add  = 0,
        edit = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::AddExternalServerScreenController::Mode> mMode;
    ::ll::TypedStorage<1, 1, bool>                                      mAreInputsAllValid;
    ::ll::TypedStorage<8, 24, std::string>                              mServerName;
    ::ll::TypedStorage<8, 24, std::string>                              mIpAddress;
    ::ll::TypedStorage<4, 4, int>                                       mPort;
    ::ll::UntypedStorage<4, 12>                                         mExternalServerId;
    // NOLINTEND

public:
    // prevent constructor by default
    AddExternalServerScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AddExternalServerScreenController();

    virtual void onOpen();

    virtual void addStaticScreenVars(::Json::Value&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AddExternalServerScreenController(std::shared_ptr<MainMenuScreenModel>, int);

    MCNAPI void _saveFormDataThen(std::function<void()>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<MainMenuScreenModel>, int);
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

    MCNAPI void $addStaticScreenVars(::Json::Value&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class Mode : int {
        Add  = 0,
        Edit = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::AddExternalServerScreenController::Mode> mMode;
    ::ll::TypedStorage<1, 1, bool>                                      mAreInputsAllValid;
    ::ll::TypedStorage<8, 32, ::std::string>                            mServerName;
    ::ll::TypedStorage<8, 32, ::std::string>                            mIpAddress;
    ::ll::TypedStorage<4, 4, int>                                       mPort;
    ::ll::TypedStorage<4, 4, int>                                       mExternalServerId;
    // NOLINTEND

public:
    // prevent constructor by default
    AddExternalServerScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AddExternalServerScreenController() /*override*/ = default;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual void onOpen() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AddExternalServerScreenController(::std::shared_ptr<::MainMenuScreenModel> model, int externalServerId);

    MCAPI void _saveFormDataThen(::std::function<void()> callback);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::MainMenuScreenModel> model, int externalServerId);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $addStaticScreenVars(::Json::Value& globalVars);

    MCAPI void $onOpen();
    // NOLINTEND
#else // @header-generator platform
    enum class Mode : int {};
#endif // @header-generator platform
#endif // @header-generator platform
};
