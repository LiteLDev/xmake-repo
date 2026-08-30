#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Screenshots {

struct GallerySize {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong> imageCount;
    ::ll::TypedStorage<8, 8, ulong> galleryLimit;
    // NOLINTEND
};

} // namespace Screenshots
