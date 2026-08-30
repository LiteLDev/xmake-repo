#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ImportMode : uchar {
    ImportIfNoExistingVersion = 0,
    OverwriteExisting         = 1,
};
