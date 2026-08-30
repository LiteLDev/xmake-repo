#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BrightnessPair.h"

namespace EntityLightingUtils {

struct LightAccumulator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 2, ::BrightnessPair>                         mLightColorUV;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mBlockLightColor;
    ::ll::TypedStorage<4, 4, uint>                                     mBlockLightColorCount;
    // NOLINTEND
};

} // namespace EntityLightingUtils
