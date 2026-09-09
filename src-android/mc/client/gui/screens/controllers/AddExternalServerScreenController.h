#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
namespace Json { class Value; }
// clang-format on

class AddExternalServerScreenController : public ::MainMenuScreenController {
public:
    // AddExternalServerScreenController inner types define
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
};
