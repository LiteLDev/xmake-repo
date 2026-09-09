#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/Path.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/util/CallbackLogLevel.h"
#include "mc/util/DownloaderResult.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class AzureFileDownloader;
class AzureFileStorageEndpoint;
class Scheduler;
class WorkerPool;
namespace Bedrock::Http { class Response; }
namespace Util::Url { struct Components; }
// clang-format on

class AzureFileDownloaderQueue {
public:
    // AzureFileDownloaderQueue inner types declare
    // clang-format off
    struct Request;
    // clang-format on

    // AzureFileDownloaderQueue inner types define
    struct Request {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 32> mRelativePath;
        ::ll::UntypedStorage<8, 48> mResultCallback;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, std::unique_ptr<AzureFileStorageEndpoint>> mStorageEndpoint;
    ::ll::UntypedStorage<8, 24> mAppPlatform;
    ::ll::TypedStorage<4, 4, std::atomic<int>> mListFilesRequestCount;
    ::ll::TypedStorage<4, 4, std::atomic<int>> mFailedRequestCount;
    ::ll::TypedStorage<4, 4, int> mMaxRequestAttempts;
    ::ll::UntypedStorage<8, 48> mLogOutputCallback;
    ::ll::UntypedStorage<8, 24> mRootDestinationFolder;
    ::ll::TypedStorage<8, 48, std::queue<AzureFileDownloaderQueue::Request, std::deque<AzureFileDownloaderQueue::Request>>> mDownloadQueue;
    ::ll::TypedStorage<4, 40, std::mutex> mDownloadQueueMutex;
    ::ll::TypedStorage<8, 16, std::shared_ptr<AzureFileDownloader>> mCurrentDownloader;
    ::ll::TypedStorage<8, 240, ::TaskGroup> mTaskGroup;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    AzureFileDownloaderQueue();
};
