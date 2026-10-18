#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace GeometryAtlas {

#if defined(LL_PLAT_A) // @header-generator platform
struct PaperdollCaptureFrame {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                   rotation;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> translation;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct PaperdollCaptureFrame {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>       rotation;
    ::ll::TypedStorage<4, 8, ::glm::vec2> translation;
    // NOLINTEND
};
#else // @header-generator platform
struct PaperdollCaptureFrame {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace GeometryAtlas
