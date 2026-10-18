#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce::framebuilder::gamecomponents {

#if defined(LL_PLAT_A) // @header-generator platform
struct Gameface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<glm::mat<4, 4, float, (glm::qualifier)0>>> mInstanceData;
    // NOLINTEND
};
#else // @header-generator platform
struct Gameface {};
#endif // @header-generator platform

} // namespace mce::framebuilder::gamecomponents
