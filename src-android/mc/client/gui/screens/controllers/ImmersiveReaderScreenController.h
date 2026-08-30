#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/screens/controllers/ClientInstanceScreenController.h"
#include "mc/deps/core/threading/TaskGroup.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceScreenModel;
class ImmersiveReaderObserver;
class ImmersiveReaderToken;
namespace Bedrock::Http { class Response; }
// clang-format on

class ImmersiveReaderScreenController : public ::ClientInstanceScreenController {
public:
    // ImmersiveReaderScreenController inner types define
    enum class ImmersiveReaderErrorType : uchar {
        WebviewFailure  = 0,
        IdentityFailure = 1,
    };

    enum class ImmersiveReaderStage : uchar {
        SendUrl       = 0,
        AddListener   = 1,
        LaunchReader  = 2,
        RefreshScreen = 3,
        Running       = 4,
        Error         = 5,
    };

    enum class ImmersiveReaderStatusCodes : uchar {
        StatusError   = 255,
        LaunchFailure = 0,
        RetryFailure  = 1,
        Launched      = 2,
        Loaded        = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                                mReaderText;
    ::ll::TypedStorage<1, 1, ::ImmersiveReaderScreenController::ImmersiveReaderErrorType> mErrorType;
    ::ll::TypedStorage<1, 1, bool>                                                        mErrorCausedRefresh;
    ::ll::TypedStorage<8, 240, ::TaskGroup>                                               mTaskGroup;
    ::ll::TypedStorage<1, 1, ::ImmersiveReaderScreenController::ImmersiveReaderStage>     mImmersiveReaderStage;
    ::ll::UntypedStorage<8, 16>                                                           mObserver;
    // NOLINTEND

public:
    // prevent constructor by default
    ImmersiveReaderScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ImmersiveReaderScreenController();

    virtual ::ui::DirtyFlag tick();

    virtual ::ui::DirtyFlag handleGameEventNotification(::ui::GameEventNotification);

    virtual ::ui::SceneType getSceneType() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ImmersiveReaderScreenController(std::shared_ptr<ClientInstanceScreenModel>, std::string);

    MCNAPI void _launchReader();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::unique_ptr<ImmersiveReaderToken>& mReaderToken();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<ClientInstanceScreenModel>, std::string);
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

    MCNAPI ::ui::DirtyFlag $handleGameEventNotification(::ui::GameEventNotification);

    MCNAPI ::ui::SceneType $getSceneType() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
