#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/util/DownloaderResult.h"
#include "mc/util/FileDownloadManager.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
namespace Core { class Path; }
// clang-format on

class AzureFileDownloader : public ::FileDownloadManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                 mDownloadPath;
    ::ll::TypedStorage<1, 1, std::atomic<bool>> mWaitingOnDownload;
    // NOLINTEND

public:
    // prevent constructor by default
    AzureFileDownloader();
};
