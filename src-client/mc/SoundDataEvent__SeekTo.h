#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SoundDataEvent {

struct SeekTo {
public:
    ::ll::UntypedStorage<4, 4> mUnk5a7918;

    SeekTo& operator=(SeekTo const&);
    SeekTo(SeekTo const&);
    SeekTo();
};

} // namespace SoundDataEvent
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
