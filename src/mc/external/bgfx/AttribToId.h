#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/bgfx/Attrib.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace bgfx {

#if defined(LL_PLAT_A) // @header-generator platform
struct AttribToId {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>       attr;
    ::ll::TypedStorage<2, 2, ushort> id;
    // NOLINTEND
};
#else // @header-generator platform
struct AttribToId {};
#endif // @header-generator platform

} // namespace bgfx
