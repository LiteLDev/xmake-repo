#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/util/DownloaderResult.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/util/FileDownloadManager.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class AppPlatform;
namespace Core { class Path; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class AzureFileDownloader : public ::FileDownloadManager {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>                 mDownloadPath;
    ::ll::TypedStorage<1, 1, std::atomic<bool>> mWaitingOnDownload;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkf3ab6d;
    ::ll::UntypedStorage<1, 1>  mUnkae9c0d;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    AzureFileDownloader& operator=(AzureFileDownloader const&);
    AzureFileDownloader(AzureFileDownloader const&);
#endif // @header-generator platform
    AzureFileDownloader();
};
