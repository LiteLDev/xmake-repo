#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/bgfx/TextureHandle.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace bgfx {

#if defined(LL_PLAT_A) // @header-generator platform
struct Attachment {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ::bgfx::TextureHandle> handle;
    ::ll::TypedStorage<2, 2, ushort>                mip;
    ::ll::TypedStorage<2, 2, ushort>                layer;
    // NOLINTEND
};
#else // @header-generator platform
struct Attachment {};
#endif // @header-generator platform

} // namespace bgfx
