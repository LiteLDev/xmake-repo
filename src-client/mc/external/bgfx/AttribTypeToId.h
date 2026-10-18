#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bgfx/AttribType.h"

namespace bgfx {

struct AttribTypeToId {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>       type;
    ::ll::TypedStorage<2, 2, ushort> id;
    // NOLINTEND
};

} // namespace bgfx
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
