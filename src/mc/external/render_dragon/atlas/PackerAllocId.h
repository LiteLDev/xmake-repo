#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::atlas {

#if defined(LL_PLAT_A) // @header-generator platform
struct PackerAllocId {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mId;
    // NOLINTEND
};
#else // @header-generator platform
struct PackerAllocId {};
#endif // @header-generator platform

} // namespace dragon::atlas
