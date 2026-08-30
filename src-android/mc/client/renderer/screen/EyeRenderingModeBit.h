#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum EyeRenderingModeBit : uint64 {
    Unspecified          = 0,
    MonoEye              = 1,
    MonoFlat             = 2,
    MonoUI               = 4,
    AllEyeRenderingModes = 7,
};
