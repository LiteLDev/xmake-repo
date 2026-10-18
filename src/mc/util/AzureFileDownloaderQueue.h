#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<1, 32> mRelativePath;
        ::ll::UntypedStorage<8, 48> mResultCallback;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 32> mUnke0113a;
        ::ll::UntypedStorage<8, 64> mUnk520fcd;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        Request& operator=(Request const&);
        Request(Request const&);
        Request();
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>   mUnkb9bc94;
    ::ll::UntypedStorage<8, 24>  mUnkfdadb3;
    ::ll::UntypedStorage<4, 4>   mUnk58c758;
    ::ll::UntypedStorage<4, 4>   mUnk50ab63;
    ::ll::UntypedStorage<4, 4>   mUnk49da4c;
    ::ll::UntypedStorage<8, 64>  mUnk78a364;
    ::ll::UntypedStorage<8, 32>  mUnk59a870;
    ::ll::UntypedStorage<8, 40>  mUnkb52fee;
    ::ll::UntypedStorage<8, 80>  mUnkd8a3b1;
    ::ll::UntypedStorage<8, 16>  mUnka30588;
    ::ll::UntypedStorage<8, 336> mUnkf5bec8;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    AzureFileDownloaderQueue& operator=(AzureFileDownloaderQueue const&);
    AzureFileDownloaderQueue(AzureFileDownloaderQueue const&);
#endif // @header-generator platform
    AzureFileDownloaderQueue();
};
