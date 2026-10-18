#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class PermissionRequestReason : int {
    ImportPack            = 0,
    ChangeStorageLocation = 1,
    DebugCopySettingsFile = 2,
    ExportPDF             = 3,
    ExpansionFile         = 4,
};
#else // @header-generator platform
enum class PermissionRequestReason : int {};
#endif // @header-generator platform
