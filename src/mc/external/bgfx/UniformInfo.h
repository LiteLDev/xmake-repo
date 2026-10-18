#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/bgfx/UniformType.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace bgfx {

#if defined(LL_PLAT_A) // @header-generator platform
struct UniformInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 256, char[256]> name;
    ::ll::UntypedStorage<4, 4>            type;
    ::ll::TypedStorage<2, 2, ushort>      num;
    // NOLINTEND
};
#else // @header-generator platform
struct UniformInfo {};
#endif // @header-generator platform

} // namespace bgfx
