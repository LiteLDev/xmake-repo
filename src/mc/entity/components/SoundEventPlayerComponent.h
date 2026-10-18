#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/StrictEntityContext.h"

struct SoundEventPlayerComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::StrictEntityContext> mSoundPlayer;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    SoundEventPlayerComponent& operator=(SoundEventPlayerComponent const&);
#else // @header-generator platform
#endif // @header-generator platform
};
