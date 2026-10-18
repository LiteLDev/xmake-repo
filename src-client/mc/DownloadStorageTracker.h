#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/DownloadStoragePendingInfo.h"
#include "mc/IDownloadStorageTracker.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/game_refs/OwnerPtr.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class DownloadStorageQueue;
namespace Core { class PathView; }
// clang-format on

class DownloadStorageTracker : public ::IDownloadStorageTracker {
public:
    // DownloadStorageTracker inner types define
    using StorageCleanupFn = std::function<Bedrock::Threading::Async<bool>(Core::PathView)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 240, ::TaskGroup> mTaskGroup;
    ::ll::UntypedStorage<1, 8>              mStorageCheckInProgress;
    ::ll::UntypedStorage<1, 16>             mDownloadQueue;
    ::ll::UntypedStorage<8, 40>             mPendingByArea;
    ::ll::UntypedStorage<8, 24>             mAppPlatform;
    ::ll::UntypedStorage<8, 48>             mStorageCleanupFn;
    // NOLINTEND
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
