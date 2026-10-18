#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct bgfx_platform_data {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, void*> ndt;
    ::ll::TypedStorage<8, 8, void*> nwh;
    ::ll::TypedStorage<8, 8, void*> context;
    ::ll::TypedStorage<8, 8, void*> backBuffer;
    ::ll::TypedStorage<8, 8, void*> backBufferDS;
    ::ll::TypedStorage<8, 8, void*> session;
    // NOLINTEND
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
