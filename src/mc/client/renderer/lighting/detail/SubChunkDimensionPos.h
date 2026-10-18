#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/lighting/light_propagation/LightVolumeLayer.h"
#include "mc/world/level/SubChunkPos.h"
#include "mc/world/level/dimension/DimensionType.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace LightPropagation::Detail {

#if defined(LL_PLAT_A) // @header-generator platform
struct SubChunkDimensionPos {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::SubChunkPos>                               mPos;
    ::ll::TypedStorage<1, 1, ::LightPropagation::Detail::LightVolumeLayer> mLayer;
    ::ll::TypedStorage<4, 4, ::DimensionType>                              mDimensionId;
    // NOLINTEND
};
#else // @header-generator platform
struct SubChunkDimensionPos {};
#endif // @header-generator platform

} // namespace LightPropagation::Detail
