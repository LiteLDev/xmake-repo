#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/block/block_geometry/ElementBox.h"

namespace BlockGeometry {

struct Element {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                             mName;
    ::ll::TypedStorage<8, 24, std::string>                             mParent;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mPivot;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mRotation;
    ::ll::TypedStorage<8, 24, std::vector<BlockGeometry::ElementBox>>  mBoxes;
    // NOLINTEND
};

} // namespace BlockGeometry
