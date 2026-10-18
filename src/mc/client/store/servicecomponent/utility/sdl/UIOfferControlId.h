#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace sdl {

#if defined(LL_PLAT_A) // @header-generator platform
enum class UIOfferControlId : uint {
    Generic               = 0,
    Persona               = 1,
    ThumbnailOnly         = 2,
    Count                 = 3,
    ShowMoreButton        = 4,
    PersonaShowMoreButton = 5,
    Padding               = 6,
};
#else // @header-generator platform
enum class UIOfferControlId : uint {};
#endif // @header-generator platform

}
