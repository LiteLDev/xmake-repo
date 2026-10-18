#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/bgfx/Binding.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace bgfx {

#if defined(LL_PLAT_A) // @header-generator platform
struct RenderBind {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 1280, ::bgfx::Binding[64]> m_bind;
    // NOLINTEND
};
#else // @header-generator platform
struct RenderBind {};
#endif // @header-generator platform

} // namespace bgfx
