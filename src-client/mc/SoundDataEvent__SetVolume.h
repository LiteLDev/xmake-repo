#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SoundDataEvent {

struct SetVolume {
public:
    ::ll::UntypedStorage<4, 4> mUnkd51e17;

    SetVolume& operator=(SetVolume const&);
    SetVolume(SetVolume const&);
    SetVolume();
};

} // namespace SoundDataEvent
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
