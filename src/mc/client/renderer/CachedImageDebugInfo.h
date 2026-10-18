#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core_graphics/ImageDescription.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
struct CachedImageDebugInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>            mResourceLocation;
    ::ll::TypedStorage<4, 20, ::cg::ImageDescription> mImageDescription;
    // NOLINTEND
};
#else // @header-generator platform
struct CachedImageDebugInfo {};
#endif // @header-generator platform

} // namespace mce
