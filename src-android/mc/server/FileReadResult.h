#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class FileReadResult : int {
    SUCCESS             = 0,
    FAILED_TO_OPEN_FILE = 1,
    MALFORMED           = 2,
};
