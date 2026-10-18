#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core_graphics/TextureDescription.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::rendering {

#if defined(LL_PLAT_A) // @header-generator platform
struct TextureResourceDesc {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 24, ::cg::TextureDescription> mDesc;
    ::ll::TypedStorage<4, 4, uint>                      mFlags;
    ::ll::TypedStorage<1, 1, bool>                      mIsExternal;
    // NOLINTEND
};
#else // @header-generator platform
struct TextureResourceDesc {};
#endif // @header-generator platform

} // namespace dragon::rendering
