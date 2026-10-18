#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/game/edu_cloud/UploadWorldProgress.h"
#include "mc/client/gui/EmptyProgressHandler.h"
#include "mc/client/gui/ProgressAnimation.h"
#include "mc/client/services/ms_graph/GraphResponse.h"
#include "mc/client/util/edu_cloud_utils/Operation.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/Result.h"
#include "mc/world/actor/player/LoadingState.h"
#include "mc/world/level/storage/CloudSaveLevelInfo.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
namespace EduCloud { struct IEduCloudSaveSystem; }
namespace MSGraph::Models { struct DriveItem; }
namespace MSGraph::Models { struct GraphError; }
// clang-format on

class EduCloudUploadProgressHandler : public ::EmptyProgressHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                                     mEduCloudSaveSystem;
    ::ll::TypedStorage<4, 4, ::LoadingState>                                        mLoadingState;
    ::ll::TypedStorage<4, 4, ::EduCloud::UploadWorldProgress>                       mUploadWorldProgress;
    ::ll::UntypedStorage<8, 16>                                                     mUploadHandle;
    ::ll::TypedStorage<8, 136, std::optional<CloudSaveLevelInfo>>                   mCloudSaveLevelInfo;
    ::ll::UntypedStorage<8, 16>                                                     mEduCloudWorldHandle;
    ::ll::TypedStorage<8, 24, std::string>                                          mLevelId;
    ::ll::TypedStorage<8, 24, std::string>                                          mLevelName;
    ::ll::TypedStorage<4, 4, ::MSGraph::GraphResponse>                              mErrorStatus;
    ::ll::TypedStorage<1, 1, bool>                                                  mShouldRetryAsNewFile;
    ::ll::TypedStorage<1, 1, bool>                                                  mHasRetriedAsNewFile;
    ::ll::TypedStorage<1, 1, bool>                                                  mExitingErrorScreen;
    ::ll::TypedStorage<1, 1, bool>                                                  mCanceled;
    ::ll::TypedStorage<8, 24, std::string>                                          mTitleText;
    ::ll::TypedStorage<8, 24, std::string>                                          mProgressText;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000>>> mEduCloudIsDoneInterval;
    ::ll::TypedStorage<1, 1, bool>                                                  mIsSyncing;
    ::ll::TypedStorage<8, 24, std::string>                                          mPreviousProgressText;
    ::ll::TypedStorage<4, 4, float>                                                 mResumableLoadingProgress;
    ::ll::TypedStorage<4, 4, float>                                                 mLoadingCompletedSpeed;
    ::ll::TypedStorage<8, 8, ulong>                                                 mFileSize;
    ::ll::TypedStorage<8, 8, ulong>                                                 mResumableCurrentUploadedAmount;
    ::ll::TypedStorage<8, 8, ulong>                                                 mResumableCurrentChunkSize;
    // NOLINTEND

public:
    // prevent constructor by default
    EduCloudUploadProgressHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EduCloudUploadProgressHandler();

    virtual void onStart(::MinecraftScreenModel&);

    virtual void tick(::MinecraftScreenModel&);

    virtual void onComplete(::MinecraftScreenModel&);

    virtual void onCancel(::MinecraftScreenModel&);

    virtual ::LoadingState getLoadingState(::MinecraftScreenModel&) const;

    virtual float getLoadingProgress(::MinecraftScreenModel&) const;

    virtual std::string getProgressMessage(::MinecraftScreenModel&) const;

    virtual std::string getName() const;

    virtual std::string getTitleText() const;

    virtual ::ProgressAnimation showLoadingBar() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EduCloudUploadProgressHandler(
        std::string,
        std::string,
        ::Bedrock::NonOwnerPointer<EduCloud::IEduCloudSaveSystem>,
        std::optional<CloudSaveLevelInfo>
    );

    MCNAPI bool exitingErrorScreen() const;

    MCNAPI std::optional<CloudSaveLevelInfo> getCloudSaveLevelInfo() const;

    MCNAPI std::chrono::duration<long long, std::ratio<1, 1000>> const getIsDoneInterval() const;

    MCNAPI std::string getLevelId() const;

    MCNAPI std::string const getUploadErrorCode() const;

    MCNAPI ::MSGraph::GraphResponse getUploadErrorStatus() const;

    MCNAPI void getUploadErrorStrings(::MSGraph::GraphResponse);

    MCNAPI void startUpload();

    MCNAPI void updateText(::MinecraftScreenModel&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::string,
        std::string,
        ::Bedrock::NonOwnerPointer<EduCloud::IEduCloudSaveSystem>,
        std::optional<CloudSaveLevelInfo>
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

    MCNAPI void $onComplete(::MinecraftScreenModel&);

    MCNAPI void $onCancel(::MinecraftScreenModel&);

    MCNAPI ::LoadingState $getLoadingState(::MinecraftScreenModel&) const;

    MCNAPI float $getLoadingProgress(::MinecraftScreenModel&) const;

    MCNAPI std::string $getProgressMessage(::MinecraftScreenModel&) const;

    MCNAPI std::string $getName() const;

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
#include "mc/client/game/edu_cloud/UploadWorldProgress.h"
#include "mc/client/gui/EmptyProgressHandler.h"
#include "mc/client/gui/ProgressAnimation.h"
#include "mc/client/services/ms_graph/GraphResponse.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/Result.h"
#include "mc/world/actor/player/LoadingState.h"
#include "mc/world/level/storage/CloudSaveLevelInfo.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
namespace EduCloud { struct IEduCloudSaveSystem; }
namespace MSGraph::Models { struct DriveItem; }
namespace MSGraph::Models { struct GraphError; }
// clang-format on

class EduCloudUploadProgressHandler : public ::EmptyProgressHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::EduCloud::IEduCloudSaveSystem>> mEduCloudSaveSystem;
    ::ll::TypedStorage<4, 4, ::LoadingState>                                               mLoadingState;
    ::ll::TypedStorage<4, 4, ::EduCloud::UploadWorldProgress>                              mUploadWorldProgress;
    ::ll::TypedStorage<8, 16, ::Bedrock::Threading::Async<::Bedrock::Result<bool>>>        mUploadHandle;
    ::ll::TypedStorage<8, 176, ::std::optional<::CloudSaveLevelInfo>>                      mCloudSaveLevelInfo;
    ::ll::TypedStorage<
        8,
        16,
        ::Bedrock::Threading::Async<::Bedrock::Result<::MSGraph::Models::DriveItem, ::MSGraph::Models::GraphError>>>
                                                          mEduCloudWorldHandle;
    ::ll::TypedStorage<8, 32, ::std::string>              mLevelId;
    ::ll::TypedStorage<8, 32, ::std::string>              mLevelName;
    ::ll::TypedStorage<4, 4, ::MSGraph::GraphResponse>    mErrorStatus;
    ::ll::TypedStorage<1, 1, bool>                        mShouldRetryAsNewFile;
    ::ll::TypedStorage<1, 1, bool>                        mHasRetriedAsNewFile;
    ::ll::TypedStorage<1, 1, bool>                        mExitingErrorScreen;
    ::ll::TypedStorage<1, 1, bool>                        mCanceled;
    ::ll::TypedStorage<8, 32, ::std::string>              mTitleText;
    ::ll::TypedStorage<8, 32, ::std::string>              mProgressText;
    ::ll::TypedStorage<8, 8, ::std::chrono::milliseconds> mEduCloudIsDoneInterval;
    ::ll::TypedStorage<1, 1, bool>                        mIsSyncing;
    ::ll::TypedStorage<8, 32, ::std::string>              mPreviousProgressText;
    ::ll::TypedStorage<4, 4, float>                       mResumableLoadingProgress;
    ::ll::TypedStorage<4, 4, float>                       mLoadingCompletedSpeed;
    ::ll::TypedStorage<8, 8, uint64>                      mFileSize;
    ::ll::TypedStorage<8, 8, uint64>                      mResumableCurrentUploadedAmount;
    ::ll::TypedStorage<8, 8, uint64>                      mResumableCurrentChunkSize;
    // NOLINTEND

public:
    // prevent constructor by default
    EduCloudUploadProgressHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void tick(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual void onComplete(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual void onCancel(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual void onStart(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual ::LoadingState getLoadingState(::MinecraftScreenModel& minecraftScreenModel) const /*override*/;

    virtual ::std::string getProgressMessage(::MinecraftScreenModel& minecraftScreenModel) const /*override*/;

    virtual float getLoadingProgress(::MinecraftScreenModel& minecraftScreenModel) const /*override*/;

    virtual ::std::string getTitleText() const /*override*/;

    virtual ::std::string getName() const /*override*/;

    virtual ::ProgressAnimation showLoadingBar() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EduCloudUploadProgressHandler(
        ::std::string                                               levelId,
        ::std::string                                               levelName,
        ::Bedrock::NonOwnerPointer<::EduCloud::IEduCloudSaveSystem> eduCloudSaveSystem,
        ::std::optional<::CloudSaveLevelInfo>                       cloudSaveLevelInfo
    );

    MCFOLD ::std::string getLevelId() const;

    MCAPI ::std::string const getUploadErrorCode() const;

    MCAPI void startUpload();

    MCAPI void updateText(::MinecraftScreenModel& minecraftScreenModel);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::string                                               levelId,
        ::std::string                                               levelName,
        ::Bedrock::NonOwnerPointer<::EduCloud::IEduCloudSaveSystem> eduCloudSaveSystem,
        ::std::optional<::CloudSaveLevelInfo>                       cloudSaveLevelInfo
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(::MinecraftScreenModel& minecraftScreenModel);

    MCFOLD void $onComplete(::MinecraftScreenModel& minecraftScreenModel);

    MCAPI void $onCancel(::MinecraftScreenModel& minecraftScreenModel);

    MCAPI void $onStart(::MinecraftScreenModel& minecraftScreenModel);

    MCAPI ::LoadingState $getLoadingState(::MinecraftScreenModel& minecraftScreenModel) const;

    MCAPI ::std::string $getProgressMessage(::MinecraftScreenModel& minecraftScreenModel) const;

    MCAPI float $getLoadingProgress(::MinecraftScreenModel& minecraftScreenModel) const;

    MCAPI ::std::string $getTitleText() const;

    MCAPI ::std::string $getName() const;

    MCFOLD ::ProgressAnimation $showLoadingBar() const;
    // NOLINTEND
};
#else // @header-generator platform
class EduCloudUploadProgressHandler {};
#endif // @header-generator platform
#endif // @header-generator platform
