#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace World {

#if defined(LL_PLAT_A) // @header-generator platform
enum class DownloadWorldTemplateError : uint {
    AlreadyDownloaded         = 0,
    DownloadAlreadyInProgress = 1,
    DownloadFailed            = 2,
    ItemNotOwned              = 3,
    CancelledByUser           = 4,
    InsufficientStorage       = 5,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class DownloadWorldTemplateError : uint {
    AlreadyDownloaded         = 0,
    DownloadAlreadyInProgress = 1,
    DownloadFailed            = 2,
    ItemNotOwned              = 3,
    CancelledByUser           = 4,
    InsufficientStorage       = 5,
};
#else // @header-generator platform
enum class DownloadWorldTemplateError : uint {};
#endif // @header-generator platform
#endif // @header-generator platform

}
