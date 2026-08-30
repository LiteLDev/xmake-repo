#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

enum class RealmsWorldEditorStateStatus : int {
    NoAction   = 0,
    InProgress = 1,
    Done       = 2,
    Error      = 3,
};

}
