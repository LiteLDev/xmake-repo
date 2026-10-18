#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce::framebuilder {

#if defined(LL_PLAT_A) // @header-generator platform
struct PerCascadeUpdateParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mUpdateFrequency;
    ::ll::TypedStorage<4, 4, int> mUpdateOffset;
    // NOLINTEND
};
#else // @header-generator platform
struct PerCascadeUpdateParameters {};
#endif // @header-generator platform

} // namespace mce::framebuilder
