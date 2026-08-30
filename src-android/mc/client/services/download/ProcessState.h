#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ProcessState : uint {
    // bitfield representation
    DownloadPending      = 1u << 0,
    Downloading          = 1u << 1,
    DownloadPaused       = 1u << 3,
    ImportWaiting        = 1u << 6,
    ImportPending        = 1u << 7,
    Importing            = 1u << 8,
    Done                 = 1u << 15,
    Cancelled            = 1u << 16,
    Unknown              = 1u << 17,
    ProcessMask_Download = DownloadPending | Downloading | DownloadPaused,
    ProcessMask_Import   = ImportWaiting | ImportPending | Importing,
};
