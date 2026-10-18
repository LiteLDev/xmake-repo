#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SDL {

#if defined(LL_PLAT_A) // @header-generator platform
struct ServiceResponseOf5x5 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mResult;
    // NOLINTEND
};
#else // @header-generator platform
struct ServiceResponseOf5x5 {};
#endif // @header-generator platform

} // namespace SDL
