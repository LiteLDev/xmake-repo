#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce::framebuilder::gamecomponents {

struct BlockChanges {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mAabbMin;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mAabbMax;
    // NOLINTEND
};

} // namespace mce::framebuilder::gamecomponents
