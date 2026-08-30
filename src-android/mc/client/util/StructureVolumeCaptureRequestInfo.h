#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/phys/AABB.h"

namespace mce::StructureVolumeOffscreenUtils {

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

} // namespace mce::StructureVolumeOffscreenUtils
