#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SoundDataEvent {

struct Fade {
public:
    ::ll::UntypedStorage<4, 4> mUnk1cffff;
    ::ll::UntypedStorage<4, 4> mUnka52e01;

    Fade& operator=(Fade const&);
    Fade(Fade const&);
    Fade();
};

} // namespace SoundDataEvent
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
