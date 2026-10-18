#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/bgfx/UniformHandle.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::framerenderer::drawcommands {

#if defined(LL_PLAT_A) // @header-generator platform
struct UniformBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ::bgfx::UniformHandle> mHandle;
    ::ll::TypedStorage<8, 8, void const*>           mValue;
    ::ll::TypedStorage<2, 2, ushort>                mNum;
    // NOLINTEND
};
#else // @header-generator platform
struct UniformBinding {};
#endif // @header-generator platform

} // namespace dragon::framerenderer::drawcommands
