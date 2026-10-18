#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SoundDataEvent {

struct SetPitch {
public:
    ::ll::UntypedStorage<4, 4> mUnk74b2c8;

    SetPitch& operator=(SetPitch const&);
    SetPitch(SetPitch const&);
    SetPitch();
};

} // namespace SoundDataEvent
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
