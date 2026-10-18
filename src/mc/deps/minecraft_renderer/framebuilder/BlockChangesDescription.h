#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce::framebuilder {

#if defined(LL_PLAT_A) // @header-generator platform
struct BlockChangesDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mAabbMin;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mAabbMax;
    // NOLINTEND
};
#else // @header-generator platform
struct BlockChangesDescription {};
#endif // @header-generator platform

} // namespace mce::framebuilder
