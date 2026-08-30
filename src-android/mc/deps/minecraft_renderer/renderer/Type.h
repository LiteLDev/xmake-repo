#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce::Font {

enum class Type : int {
    Bitmap       = 0,
    BitmapSmooth = 1,
    TrueType     = 2,
    MSDF         = 3,
};

}
