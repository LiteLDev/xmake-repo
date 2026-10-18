#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx {

#if defined(LL_PLAT_A) // @header-generator platform
struct PlatformData {
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
struct PlatformData {};
#endif // @header-generator platform

} // namespace bgfx
