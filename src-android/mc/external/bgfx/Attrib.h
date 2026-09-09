#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx {

struct Attrib {
public:
    // Attrib inner types define
    enum Enum : uint {
        Position  = 0,
        Normal    = 1,
        Tangent   = 2,
        Bitangent = 3,
        Color0    = 4,
        Color1    = 5,
        Color2    = 6,
        Color3    = 7,
        Indices   = 8,
        Weight    = 9,
        TexCoord0 = 10,
        TexCoord1 = 11,
        TexCoord2 = 12,
        TexCoord3 = 13,
        TexCoord4 = 14,
        TexCoord5 = 15,
        TexCoord6 = 16,
        TexCoord7 = 17,
        TexCoord8 = 18,
        Count     = 19,
    };
};

} // namespace bgfx
