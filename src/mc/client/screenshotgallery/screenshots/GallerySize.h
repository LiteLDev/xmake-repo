#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Screenshots {

#if defined(LL_PLAT_A) // @header-generator platform
struct GallerySize {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong> imageCount;
    ::ll::TypedStorage<8, 8, ulong> galleryLimit;
    // NOLINTEND
};
#else // @header-generator platform
struct GallerySize {};
#endif // @header-generator platform

} // namespace Screenshots
