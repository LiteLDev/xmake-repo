#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

enum class StorageResult : uint {
    Unexpected        = 0,
    Success           = 1,
    Started           = 2,
    QuotaExceeded     = 3,
    OutOfLocalStorage = 4,
    NotFound          = 5,
};

}
