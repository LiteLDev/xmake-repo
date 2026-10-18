#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce::framebuilder {

#if defined(LL_PLAT_A) // @header-generator platform
struct ShadowRange {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mNear;
    ::ll::TypedStorage<4, 4, float> mFar;
    // NOLINTEND
};
#else // @header-generator platform
struct ShadowRange {};
#endif // @header-generator platform

} // namespace mce::framebuilder
