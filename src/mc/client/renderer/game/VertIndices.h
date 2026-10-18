#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct VertIndices {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> vrt_i;
    ::ll::TypedStorage<4, 4, int> tex_i;
    ::ll::TypedStorage<4, 4, int> nrm_i;
    // NOLINTEND
};
#else // @header-generator platform
struct VertIndices {};
#endif // @header-generator platform
