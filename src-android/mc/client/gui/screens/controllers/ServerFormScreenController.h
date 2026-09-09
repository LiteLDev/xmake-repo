#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"

// auto generated forward declare list
// clang-format off
class DynamicFormScreenController;
class MainMenuScreenModel;
class ServerFormBindingInformation;
namespace Json { class Value; }
// clang-format on

class ServerFormScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                   mInitialForm;
    ::ll::TypedStorage<4, 8, std::optional<uint>>                            mFormId;
    ::ll::TypedStorage<1, 1, bool>                                           mIsServerTab;
    ::ll::TypedStorage<4, 4, ::ui::DirtyFlag>                                mDirty;
    ::ll::TypedStorage<1, 1, bool>                                           mCreatedScreen;
    ::ll::TypedStorage<1, 1, bool>                                           mSentResponse;
    ::ll::TypedStorage<1, 1, bool>                                           mUnhideTab;
    ::ll::TypedStorage<8, 8, ::DynamicFormScreenController*>                 mDynamicFormScreenController;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ServerFormBindingInformation>> mBindingData;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerFormScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerFormScreenController();

    virtual void onOpen();

    virtual void onTerminate();

    virtual ::ui::DirtyFlag handleGameEventNotification(::ui::GameEventNotification);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ServerFormScreenController(
        std::shared_ptr<MainMenuScreenModel>,
        std::optional<uint>,
        std::string const&,
        bool,
        bool
    );

    MCNAPI void _createScreen(std::string const&);

    MCNAPI std::string _parseRawText(::Json::Value const&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<MainMenuScreenModel>, std::optional<uint>, std::string const&, bool, bool);
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

    MCNAPI ::ui::DirtyFlag $handleGameEventNotification(::ui::GameEventNotification);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
