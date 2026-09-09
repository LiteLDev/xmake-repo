#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/game/edu_cloud/CloudItemType.h"
#include "mc/client/game/edu_cloud/ConflictResolutionStatus.h"
#include "mc/client/game/edu_cloud/DrivePaths.h"
#include "mc/client/game/edu_cloud/IEduCloudSaveSystem.h"
#include "mc/client/game/edu_cloud/LaunchOptions.h"
#include "mc/client/game/edu_cloud/UploadWorldProgress.h"
#include "mc/client/services/ms_graph/DriveItem.h"
#include "mc/client/services/ms_graph/GraphResponse.h"
#include "mc/client/util/edu_cloud_utils/Operation.h"
#include "mc/client/util/edu_cloud_utils/UploadType.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class DateManager;
class ExternalContentManager;
class FileArchiver;
class IContentAccessibilityProvider;
class ILevelListCache;
class IMinecraftEventing;
class IResourcePackRepository;
class LevelDbEnv;
class ResourcePackManager;
class SceneFactory;
class ToastManager;
class WorldImportContext;
class WorldTemplateManager;
struct LevelSummary;
namespace Core { class FilePathManager; }
namespace EduCloud { struct EduCloudSavePolicy; }
namespace EduCloud { struct EduCloudWorldDownloadInstance; }
namespace MSGraph { struct IGraphApi; }
namespace MSGraph::Models { struct DownloadUrlInfo; }
namespace MSGraph::Models { struct DriveItemCollection; }
namespace MSGraph::Models { struct GraphError; }
namespace MSGraph::Models { struct UploadSession; }
// clang-format on

namespace EduCloud {

class EduCloudSaveSystem : public ::EduCloud::IEduCloudSaveSystem {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::UntypedStorage<8, 24> mEduGraphService;
    ::ll::UntypedStorage<8, 24> mFileArchiver;
    ::ll::UntypedStorage<8, 24> mLevelDbEnv;
    ::ll::UntypedStorage<8, 24> mAccessibilityProvider;
    ::ll::UntypedStorage<8, 24> mExternalContentManager;
    ::ll::UntypedStorage<8, 24> mWorldTemplateManager;
    ::ll::UntypedStorage<8, 24> mDateManager;
    ::ll::TypedStorage<8, 8, ::SceneFactory&> mSceneFactory;
    ::ll::TypedStorage<8, 8, ::ILevelListCache&> mLevelListCache;
    ::ll::UntypedStorage<8, 24> mFilePathManager;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&> mEventing;
    ::ll::TypedStorage<8, 8, ::IResourcePackRepository&> mResourcePackRepository;
    ::ll::TypedStorage<8, 8, ::ResourcePackManager&> mResourcePackManager;
    ::ll::TypedStorage<8, 8, ::ToastManager&> mToastManager;
    ::ll::TypedStorage<8, 8, std::unique_ptr<EduCloud::EduCloudSavePolicy>> mEduCloudSavePolicy;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::shared_ptr<EduCloud::EduCloudWorldDownloadInstance>>> mDownloadInstances;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mDownloadInstancesPendingDeletion;
    ::ll::UntypedStorage<8, 48> mResumableUploadCallback;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, MSGraph::Models::DriveItem>> mFetchedDriveItems;
    ::ll::TypedStorage<8, 24, std::string const> mUserOid;
    ::ll::TypedStorage<8, 24, std::string> mCloudWorldCorrelationId;
    ::ll::TypedStorage<1, 1, bool> mShowingConflictPopup;
    ::ll::TypedStorage<4, 4, ::EduCloudUtils::Operation> mCurrentOperation;
    ::ll::TypedStorage<4, 4, ::EduCloudUtils::UploadType> mWorldUploadType;
    ::ll::UntypedStorage<8, 248> mTaskGroup;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    EduCloudSaveSystem& operator=(EduCloudSaveSystem const&);
    EduCloudSaveSystem(EduCloudSaveSystem const&);
    EduCloudSaveSystem();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~EduCloudSaveSystem();

    virtual void update();

    virtual bool needsCloudChecks(::LevelSummary&, ::EduCloud::LaunchOptions const);

    virtual bool readyToLaunch(std::string&, ::EduCloud::LaunchOptions&);

    virtual void onLocalLaunch(std::string const&);

    virtual bool getShowingConflictPopup();

    virtual void setShowingConflictPopup(bool const);

    virtual void queueCloudWorldDownload(std::string const&, std::string const&, ::EduCloud::LaunchOptions const, bool const);

    virtual ::EduCloudUtils::Operation getCurrentOperation();

    virtual ::EduCloudUtils::UploadType getWorldUploadType();

    virtual ::Bedrock::Threading::Async<Bedrock::Result<std::string, MSGraph::Models::GraphError>> getUploadFolderUrl();

    virtual ::Bedrock::Threading::Async<Bedrock::Result<bool, std::error_code>> uploadWorld(std::string const&, std::string const&, std::function<void (EduCloud::UploadWorldProgress, MSGraph::GraphResponse)>, std::function<void (ulong, ulong)>, bool);

    virtual std::string getFolderDisplayName();

    virtual ::Bedrock::Threading::Async<Bedrock::Result<MSGraph::Models::DriveItemCollection, MSGraph::Models::GraphError>> fetch(std::string, ::EduCloud::DrivePaths);

    virtual ::Bedrock::Threading::Async<Bedrock::Result<MSGraph::Models::DownloadUrlInfo, MSGraph::Models::GraphError>> getDownloadUrlInfo(::EduCloud::CloudItemType const, std::string const&);

    virtual ::Bedrock::Threading::Async<Bedrock::Result<MSGraph::Models::DriveItem, MSGraph::Models::GraphError>> getCloudItemById(::EduCloud::CloudItemType const, std::string const&);

    virtual ::EduCloud::ConflictResolutionStatus determineConflictResolutionStatus(std::string const&, std::string const&, bool const, bool const);

    virtual ::Bedrock::Threading::Async<Bedrock::Result<MSGraph::Models::GraphError, std::error_code>> deleteItemById(std::string const&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _handleInstanceFailure(
        std::string const,
        std::shared_ptr<EduCloud::EduCloudWorldDownloadInstance> const,
        std::function<void()>,
        bool
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
    MCNAPI void $update();

    MCNAPI bool $needsCloudChecks(::LevelSummary&, ::EduCloud::LaunchOptions const);

    MCNAPI bool $readyToLaunch(std::string&, ::EduCloud::LaunchOptions&);

    MCNAPI void $onLocalLaunch(std::string const&);

    MCNAPI bool $getShowingConflictPopup();

    MCNAPI void $setShowingConflictPopup(bool const);

    MCNAPI void
    $queueCloudWorldDownload(std::string const&, std::string const&, ::EduCloud::LaunchOptions const, bool const);

    MCNAPI ::EduCloudUtils::Operation $getCurrentOperation();

    MCNAPI ::EduCloudUtils::UploadType $getWorldUploadType();

    MCNAPI ::Bedrock::Threading::Async<Bedrock::Result<std::string, MSGraph::Models::GraphError>> $getUploadFolderUrl();

    MCNAPI ::Bedrock::Threading::Async<Bedrock::Result<bool, std::error_code>> $uploadWorld(
        std::string const&,
        std::string const&,
        std::function<void(EduCloud::UploadWorldProgress, MSGraph::GraphResponse)>,
        std::function<void(ulong, ulong)>,
        bool
    );

    MCNAPI std::string $getFolderDisplayName();

    MCNAPI ::Bedrock::Threading::Async<
        Bedrock::Result<MSGraph::Models::DriveItemCollection, MSGraph::Models::GraphError>>
        $fetch(std::string, ::EduCloud::DrivePaths);

    MCNAPI ::Bedrock::Threading::Async<Bedrock::Result<MSGraph::Models::DownloadUrlInfo, MSGraph::Models::GraphError>>
    $getDownloadUrlInfo(::EduCloud::CloudItemType const, std::string const&);

    MCNAPI ::Bedrock::Threading::Async<Bedrock::Result<MSGraph::Models::DriveItem, MSGraph::Models::GraphError>>
    $getCloudItemById(::EduCloud::CloudItemType const, std::string const&);

    MCNAPI ::EduCloud::ConflictResolutionStatus
    $determineConflictResolutionStatus(std::string const&, std::string const&, bool const, bool const);

    MCNAPI ::Bedrock::Threading::Async<Bedrock::Result<MSGraph::Models::GraphError, std::error_code>>
    $deleteItemById(std::string const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace EduCloud
