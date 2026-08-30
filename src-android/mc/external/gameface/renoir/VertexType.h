#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

enum VertexType : uint {
    VT_Standard         = 0,
    VT_Slim             = 1,
    VT_SlimInstanceData = 2,
    VT_Glyph            = 3,
    VT_FillPathAtlas    = 4,
    VT_Custom           = 5,
    VT_Count            = 6,
};

}
