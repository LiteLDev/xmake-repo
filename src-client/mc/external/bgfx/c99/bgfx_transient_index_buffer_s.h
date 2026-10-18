#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bgfx/c99/bgfx_index_buffer_handle_s.h"

struct bgfx_transient_index_buffer_s {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uchar*>                       data;
    ::ll::TypedStorage<4, 4, uint>                         size;
    ::ll::TypedStorage<2, 2, ::bgfx_index_buffer_handle_s> handle;
    ::ll::TypedStorage<4, 4, uint>                         startIndex;
    // NOLINTEND
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
