#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/bgfx/RangedBinding.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace bgfx {

#if defined(LL_PLAT_A) // @header-generator platform
struct RangedBindings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 1024, ::bgfx::RangedBinding[64]> m_binding;
    ::ll::TypedStorage<4, 4, uint>                         m_totalRangedBindings;
    // NOLINTEND
};
#else // @header-generator platform
struct RangedBindings {};
#endif // @header-generator platform

} // namespace bgfx
