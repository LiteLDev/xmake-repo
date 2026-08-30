#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

enum class RealmsWorldEditorState : int {
    Unknown   = 0,
    Idle      = 1,
    Fetching  = 2,
    Posting   = 3,
    Resetting = 4,
    Replacing = 5,
};

}
