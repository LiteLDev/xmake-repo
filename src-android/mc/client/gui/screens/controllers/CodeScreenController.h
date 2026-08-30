#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/screens/controllers/ClientInstanceScreenController.h"
#include "mc/client/gui/screens/controllers/CodeScreenControllerProxy.h"
#include "mc/client/gui/screens/controllers/CodeScreenViewOption.h"
#include "mc/client/gui/screens/controllers/UriData.h"
#include "mc/deps/code_builder/platform/WebviewObserver.h"
#include "mc/events/OpenCodeMethod.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceScreenModel;
class ScreenControllerProxy;
struct WebviewError;
namespace Json { class Value; }
// clang-format on

class CodeScreenController : public ::ClientInstanceScreenController,
                             public ::CodeScreenControllerProxy,
                             public ::WebviewObserver {
public:
    // CodeScreenController inner types define
    enum class ModalView : int {
        None                     = 0,
        ResetWarning             = 1,
        MemoryWarning            = 2,
        MemoryError              = 3,
        NetworkError             = 4,
        TynkerDeprecated         = 5,
        AzurenotebooksDeprecated = 6,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::UriData>                        mChosenUrl;
    ::ll::TypedStorage<4, 4, ::CodeScreenController::ModalView> mModalView;
    ::ll::TypedStorage<4, 4, ::OpenCodeMethod>                  mOpenMethod;
    ::ll::TypedStorage<8, 24, std::string>                      mMakeCodeUri;
    ::ll::TypedStorage<1, 1, bool>                              mNeedsRefresh;
    ::ll::TypedStorage<1, 1, bool>                              mWebviewLoading;
    ::ll::TypedStorage<1, 1, bool>                              mHasDefaultUri;
    ::ll::TypedStorage<1, 1, bool>                              mHasOverrideUri;
    ::ll::TypedStorage<1, 1, bool>                              mShowMenu;
    ::ll::TypedStorage<1, 1, bool>                              mShowTynkerDeprecated;
    ::ll::TypedStorage<1, 1, bool>                              mShowAZNBDeprecated;
    // NOLINTEND

public:
    // prevent constructor by default
    CodeScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CodeScreenController();

    virtual ::ui::DirtyFlag tick();

    virtual void onInit();

    virtual void onDelete();

    virtual ::ui::DirtyFlag handleGameEventNotification(::ui::GameEventNotification);

    virtual void addStaticScreenVars(::Json::Value&);

    virtual ::ScreenControllerProxy* getProxy();

    virtual void onLoadingBegin();

    virtual void onLoadingEnd();

    virtual void onError(::WebviewError const&);

    virtual void onWebviewChanged();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CodeScreenController(std::shared_ptr<ClientInstanceScreenModel>, ::OpenCodeMethod);

    MCNAPI void _selectEditor(std::string const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool validateUri(std::string const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string const& INTERFACE_KEY();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<ClientInstanceScreenModel>, ::OpenCodeMethod);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ui::DirtyFlag $tick();

    MCNAPI void $onInit();

    MCNAPI void $onDelete();

    MCNAPI ::ui::DirtyFlag $handleGameEventNotification(::ui::GameEventNotification);

    MCNAPI void $addStaticScreenVars(::Json::Value&);

    MCNAPI ::ScreenControllerProxy* $getProxy();

    MCNAPI void $onLoadingBegin();

    MCNAPI void $onLoadingEnd();

    MCNAPI void $onError(::WebviewError const&);

    MCNAPI void $onWebviewChanged();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
