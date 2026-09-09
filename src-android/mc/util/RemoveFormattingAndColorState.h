#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Util {

enum class RemoveFormattingAndColorState : int {
    Output       = 0,
    SawCodeByte1 = 1,
    SawCodeByte2 = 2,
};

}
