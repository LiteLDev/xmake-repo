#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
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
// clang-format on

class ImmersiveReaderScreenController : public ::ClientInstanceScreenController {
#else // @header-generator platform
class ImmersiveReaderScreenController {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // ImmersiveReaderScreenController inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class ImmersiveReaderErrorType : uchar {
        WebviewFailure  = 0,
        IdentityFailure = 1,
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class ImmersiveReaderErrorType : schar {
        WebviewFailure  = 0,
        IdentityFailure = 1,
    };
#else // @header-generator platform
    enum class ImmersiveReaderErrorType : schar {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    enum class ImmersiveReaderStage : uchar {
        SendUrl       = 0,
        AddListener   = 1,
        LaunchReader  = 2,
        RefreshScreen = 3,
        Running       = 4,
        Error         = 5,
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class ImmersiveReaderStatusCodes : schar {
        StatusError   = -1,
        LaunchFailure = 0,
        RetryFailure  = 1,
        Launched      = 2,
        Loaded        = 3,
    };
#else // @header-generator platform
    enum class ImmersiveReaderStatusCodes : schar {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class ImmersiveReaderStage : schar {
        SendUrl       = 0,
        AddListener   = 1,
        LaunchReader  = 2,
        RefreshScreen = 3,
        Running       = 4,
        Error         = 5,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                              mReaderText;
    ::ll::TypedStorage<1, 1, ::ImmersiveReaderScreenController::ImmersiveReaderErrorType> mErrorType;
    ::ll::TypedStorage<1, 1, bool>                                                        mErrorCausedRefresh;
    ::ll::TypedStorage<8, 336, ::TaskGroup>                                               mTaskGroup;
    ::ll::TypedStorage<1, 1, ::ImmersiveReaderScreenController::ImmersiveReaderStage>     mImmersiveReaderStage;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ImmersiveReaderObserver>>                mObserver;
    // NOLINTEND

public:
    // prevent constructor by default
    ImmersiveReaderScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ImmersiveReaderScreenController() /*override*/ = default;

    virtual ::ui::DirtyFlag handleGameEventNotification(::ui::GameEventNotification notification) /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual ::ui::SceneType getSceneType() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    ImmersiveReaderScreenController(::std::shared_ptr<::ClientInstanceScreenModel> model, ::std::string readerText);

    MCAPI void _launchReader();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::ImmersiveReaderToken>& mReaderToken();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::ClientInstanceScreenModel> model, ::std::string readerText);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ui::DirtyFlag $handleGameEventNotification(::ui::GameEventNotification notification);

    MCAPI ::ui::DirtyFlag $tick();

    MCFOLD ::ui::SceneType $getSceneType() const;
    // NOLINTEND
#else // @header-generator platform
    enum class ImmersiveReaderStage : schar {};
#endif // @header-generator platform
#endif // @header-generator platform
};
