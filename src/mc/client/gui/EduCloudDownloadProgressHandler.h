#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/game/edu_cloud/LaunchOptions.h"
#include "mc/client/gui/EmptyProgressHandler.h"
#include "mc/client/gui/ProgressAnimation.h"
#include "mc/client/resources/ImportFailure.h"
#include "mc/client/resources/ImportState.h"
#include "mc/client/services/ms_graph/GraphResponse.h"
#include "mc/client/util/edu_cloud_utils/Operation.h"
#include "mc/util/DownloadError.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
class WorldFileDownloadManager;
struct SetDownloadProgressHandlerError;
// clang-format on

class EduCloudDownloadProgressHandler : public ::EmptyProgressHandler {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 4, ::LoadingState> mLoadingState;
    ::ll::TypedStorage<4, 4, ::EduCloudUtils::Operation> mCurrentOperation;
    ::ll::TypedStorage<4, 4, ::MSGraph::GraphResponse> mSyncErrorStatus;
    ::ll::TypedStorage<4, 4, ::MSGraph::GraphResponse> mGraphErrorStatus;
    ::ll::TypedStorage<4, 4, ::DownloadError> mDownloadErrorStatus;
    ::ll::UntypedStorage<4, 12> mImportErrorStatus;
    ::ll::UntypedStorage<8, 48> mSetReadyToLaunch;
    ::ll::TypedStorage<8, 24, std::string> mTitleText;
    ::ll::TypedStorage<8, 16, std::shared_ptr<WorldFileDownloadManager>> mDownloadManager;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ImportState>> mImportState;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mEduCloudDownloadDelayStart;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000>> const> mDisplayInterval;
    ::ll::TypedStorage<1, 1, bool const> mLaunchWorldOnCompletion;
    ::ll::TypedStorage<1, 1, bool> mCanceled;
    ::ll::TypedStorage<1, 1, bool> mExitingScreen;
    ::ll::TypedStorage<1, 1, bool> mCanLaunchLocalWorld;
    ::ll::TypedStorage<8, 24, std::string> mProgressMessage;
    ::ll::TypedStorage<8, 24, std::string> mPreviousProgressMessage;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    EduCloudDownloadProgressHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EduCloudDownloadProgressHandler();

    virtual void onStart(::MinecraftScreenModel&);

    virtual void tick(::MinecraftScreenModel&);

    virtual void onCancel(::MinecraftScreenModel&);

    virtual void onExit(::MinecraftScreenModel&);

    virtual ::LoadingState getLoadingState(::MinecraftScreenModel&) const;

    virtual std::string getProgressMessage(::MinecraftScreenModel&) const;

    virtual std::string getName() const;

    virtual std::string getTTSProgressMessage() const;

    virtual std::string getTitleText() const;

    virtual ::ProgressAnimation showLoadingBar() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EduCloudDownloadProgressHandler(
        std::shared_ptr<WorldFileDownloadManager>,
        std::shared_ptr<ImportState>,
        std::string const&,
        ::EduCloud::LaunchOptions const,
        bool const,
        std::function<void(SetDownloadProgressHandlerError)> const&,
        std::function<void(bool)> const&
    );

    MCNAPI void _leaveProgressHandler(::MinecraftScreenModel&);

    MCNAPI bool canLaunchLocalWorld() const;

    MCNAPI void exitErrorPopup(::MinecraftScreenModel&, bool const);

    MCNAPI ::EduCloudUtils::Operation getCurrentOperation() const;

    MCNAPI ::DownloadError getDownloadErrorStatus() const;

    MCNAPI ::MSGraph::GraphResponse getGraphErrorStatus() const;

    MCNAPI ::ImportFailure getImportErrorStatus() const;

    MCNAPI ::MSGraph::GraphResponse getSyncErrorStatus() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::shared_ptr<WorldFileDownloadManager>,
        std::shared_ptr<ImportState>,
        std::string const&,
        ::EduCloud::LaunchOptions const,
        bool const,
        std::function<void(SetDownloadProgressHandlerError)> const&,
        std::function<void(bool)> const&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onStart(::MinecraftScreenModel&);

    MCNAPI void $tick(::MinecraftScreenModel&);

    MCNAPI void $onCancel(::MinecraftScreenModel&);

    MCNAPI void $onExit(::MinecraftScreenModel&);

    MCNAPI ::LoadingState $getLoadingState(::MinecraftScreenModel&) const;

    MCNAPI std::string $getProgressMessage(::MinecraftScreenModel&) const;

    MCNAPI std::string $getName() const;

    MCNAPI std::string $getTTSProgressMessage() const;

    MCNAPI std::string $getTitleText() const;

    MCNAPI ::ProgressAnimation $showLoadingBar() const;
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
#include "mc/client/game/edu_cloud/LaunchOptions.h"
#include "mc/client/gui/EmptyProgressHandler.h"
#include "mc/client/gui/ProgressAnimation.h"
#include "mc/client/resources/ImportFailure.h"
#include "mc/client/resources/ImportState.h"
#include "mc/client/services/ms_graph/GraphResponse.h"
#include "mc/client/util/edu_cloud_utils/Operation.h"
#include "mc/util/DownloadError.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
class WorldFileDownloadManager;
struct SetDownloadProgressHandlerError;
// clang-format on

class EduCloudDownloadProgressHandler : public ::EmptyProgressHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::LoadingState>                                 mLoadingState;
    ::ll::TypedStorage<4, 4, ::EduCloudUtils::Operation>                     mCurrentOperation;
    ::ll::TypedStorage<4, 4, ::MSGraph::GraphResponse>                       mSyncErrorStatus;
    ::ll::TypedStorage<4, 4, ::MSGraph::GraphResponse>                       mGraphErrorStatus;
    ::ll::TypedStorage<4, 4, ::DownloadError>                                mDownloadErrorStatus;
    ::ll::TypedStorage<4, 4, ::ImportFailure>                                mImportErrorStatus;
    ::ll::TypedStorage<8, 64, ::std::function<void(bool)>>                   mSetReadyToLaunch;
    ::ll::TypedStorage<8, 32, ::std::string>                                 mTitleText;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::WorldFileDownloadManager>> mDownloadManager;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ImportState>>              mImportState;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>        mEduCloudDownloadDelayStart;
    ::ll::TypedStorage<8, 8, ::std::chrono::milliseconds const>              mDisplayInterval;
    ::ll::TypedStorage<1, 1, bool const>                                     mLaunchWorldOnCompletion;
    ::ll::TypedStorage<1, 1, bool>                                           mCanceled;
    ::ll::TypedStorage<1, 1, bool>                                           mExitingScreen;
    ::ll::TypedStorage<1, 1, bool>                                           mCanLaunchLocalWorld;
    ::ll::TypedStorage<8, 32, ::std::string>                                 mProgressMessage;
    ::ll::TypedStorage<8, 32, ::std::string>                                 mPreviousProgressMessage;
    // NOLINTEND

public:
    // prevent constructor by default
    EduCloudDownloadProgressHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void tick(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual void onCancel(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual void onExit(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual void onStart(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual ::std::string getProgressMessage(::MinecraftScreenModel& minecraftScreenModel) const /*override*/;

    virtual ::std::string getTitleText() const /*override*/;

    virtual ::std::string getName() const /*override*/;

    virtual ::std::string getTTSProgressMessage() const /*override*/;

    virtual ::LoadingState getLoadingState(::MinecraftScreenModel& minecraftScreenModel) const /*override*/;

    virtual ::ProgressAnimation showLoadingBar() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EduCloudDownloadProgressHandler(
        ::std::shared_ptr<::WorldFileDownloadManager>                   downloadManager,
        ::std::shared_ptr<::ImportState>                                importState,
        ::std::string const&                                            id,
        ::EduCloud::LaunchOptions                                       launchOption,
        bool                                                            canLaunchLocalWorld,
        ::std::function<void(::SetDownloadProgressHandlerError)> const& setDownloadErrorsStatusCallbacks,
        ::std::function<void(bool)> const&                              setReadyToLaunch
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _leaveProgressHandler(::MinecraftScreenModel& minecraftScreenModel);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::WorldFileDownloadManager>                   downloadManager,
        ::std::shared_ptr<::ImportState>                                importState,
        ::std::string const&                                            id,
        ::EduCloud::LaunchOptions                                       launchOption,
        bool                                                            canLaunchLocalWorld,
        ::std::function<void(::SetDownloadProgressHandlerError)> const& setDownloadErrorsStatusCallbacks,
        ::std::function<void(bool)> const&                              setReadyToLaunch
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(::MinecraftScreenModel& minecraftScreenModel);

    MCAPI void $onCancel(::MinecraftScreenModel& minecraftScreenModel);

    MCAPI void $onExit(::MinecraftScreenModel& minecraftScreenModel);

    MCAPI void $onStart(::MinecraftScreenModel& minecraftScreenModel);

    MCAPI ::std::string $getProgressMessage(::MinecraftScreenModel& minecraftScreenModel) const;

    MCAPI ::std::string $getTitleText() const;

    MCAPI ::std::string $getName() const;

    MCAPI ::std::string $getTTSProgressMessage() const;

    MCFOLD ::LoadingState $getLoadingState(::MinecraftScreenModel& minecraftScreenModel) const;

    MCFOLD ::ProgressAnimation $showLoadingBar() const;
    // NOLINTEND
};
#else // @header-generator platform
class EduCloudDownloadProgressHandler {};
#endif // @header-generator platform
#endif // @header-generator platform
