#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor {

enum class ExportResult : int {
    ValidWorldExport            = 0,
    LevelFetchFailed            = 1,
    FileArchiverFetchFailed     = 2,
    ProjectConverterFetchFailed = 3,
    PlayerNotFound              = 4,
    WorldExportFailed           = 5,
    WorldExportBusy             = 6,
    EditorSystemFailure         = 7,
};

}
#endif // @header-generator platform
