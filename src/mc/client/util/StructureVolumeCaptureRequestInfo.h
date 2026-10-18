#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/phys/AABB.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace mce::StructureVolumeOffscreenUtils {

#if defined(LL_PLAT_A) // @header-generator platform
struct StructureVolumeCaptureRequestInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> canvasRenderPosition;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> canvasRenderSize;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> rotation;
    ::ll::TypedStorage<4, 24, ::AABB>                                 worldSpaceBlockBoundingBox;
    ::ll::TypedStorage<4, 4, float>                                   zoomFactor;
    // NOLINTEND
};
#else // @header-generator platform
struct StructureVolumeCaptureRequestInfo {};
#endif // @header-generator platform

} // namespace mce::StructureVolumeOffscreenUtils
