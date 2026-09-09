#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class PermissionRequestReason : int {
    ImportPack            = 0,
    ChangeStorageLocation = 1,
    DebugCopySettingsFile = 2,
    ExportPDF             = 3,
    ExpansionFile         = 4,
};
