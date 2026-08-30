#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace TextureShift {

struct TextureUV {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mUV;
    ::ll::TypedStorage<2, 2, ushort>                                  mPBRId;
    // NOLINTEND
};

} // namespace TextureShift
