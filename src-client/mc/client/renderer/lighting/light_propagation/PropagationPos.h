#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/lighting/light_propagation/LightVolumeLayer.h"
#include "mc/world/level/SubChunkPos.h"

namespace LightPropagation::Detail {

struct PropagationPos {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::SubChunkPos>                               mSubchunkPos;
    ::ll::TypedStorage<1, 1, ::LightPropagation::Detail::LightVolumeLayer> mVolumeLayer;
    // NOLINTEND
};

} // namespace LightPropagation::Detail
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
