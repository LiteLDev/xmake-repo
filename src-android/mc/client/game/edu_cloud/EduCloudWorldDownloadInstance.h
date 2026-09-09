#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/resources/ImportFailure.h"
#include "mc/client/resources/ImportState.h"
#include "mc/client/services/ms_graph/GraphResponse.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/platform/Result.h"
#include "mc/util/DownloadError.h"

// auto generated forward declare list
// clang-format off
class WorldFileDownloadManager;
namespace MSGraph::Models { struct DownloadUrlInfo; }
namespace MSGraph::Models { struct DriveItem; }
namespace MSGraph::Models { struct GraphError; }
// clang-format on

namespace EduCloud {

struct EduCloudWorldDownloadInstance {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::UntypedStorage<8, 40> pendingLaunchInfo;
    ::ll::TypedStorage<1, 1, bool> isPlaceholder;
    ::ll::TypedStorage<1, 1, bool> pendingDownload;
    ::ll::TypedStorage<1, 1, bool> launchWorldOnDownload;
    ::ll::TypedStorage<1, 1, bool> launchSettingsOnDownload;
    ::ll::TypedStorage<1, 1, bool> readyToLaunchWorld;
    ::ll::TypedStorage<1, 1, bool> readyToLaunchSettings;
    ::ll::TypedStorage<1, 1, bool> downloadProgressLogged;
    ::ll::TypedStorage<1, 1, bool> importProgressLogged;
    ::ll::TypedStorage<1, 1, bool> downloadCompleted;
    ::ll::TypedStorage<4, 4, int> sizeFromGraph;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> downloadStartTimestamp;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> importStartTimestamp;
    ::ll::TypedStorage<4, 4, ::ImportFailure> importFailure;
    ::ll::UntypedStorage<8, 24> importFilePath;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ImportState>> importState;
    ::ll::TypedStorage<8, 16, std::shared_ptr<WorldFileDownloadManager>> worldFileDownloadManager;
    ::ll::UntypedStorage<8, 16> getDownloadUrlHandle;
    ::ll::UntypedStorage<8, 24> getCloudItemByIdHandle;
    ::ll::UntypedStorage<8, 48> setSyncErrorStatus;
    ::ll::UntypedStorage<8, 48> setDownloadInstanceErrorStatus;
    ::ll::UntypedStorage<8, 48> setImportInstanceErrorStatus;
    ::ll::UntypedStorage<8, 48> setGetDownloadUrlInstanceErrorStatus;
    // clang-format on
    // NOLINTEND
};

} // namespace EduCloud
