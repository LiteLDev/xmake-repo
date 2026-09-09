#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace texd {

enum class PixelFormat : int {
    Unknown       = 0,
    R8_UINT       = 1,
    R8G8_UINT     = 2,
    R8G8B8_UINT   = 3,
    R8G8B8A8_UINT = 4,
};

}
