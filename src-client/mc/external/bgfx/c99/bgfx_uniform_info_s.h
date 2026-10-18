#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bgfx/c99/bgfx_uniform_type.h"

struct bgfx_uniform_info_s {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 256, char[256]>         name;
    ::ll::TypedStorage<4, 4, ::bgfx_uniform_type> type;
    ::ll::TypedStorage<2, 2, ushort>              num;
    // NOLINTEND
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
