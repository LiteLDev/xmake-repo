#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LevelExternalLinkConfig {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool> enabled;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1> mUnk4910de;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    LevelExternalLinkConfig& operator=(LevelExternalLinkConfig const&);
    LevelExternalLinkConfig(LevelExternalLinkConfig const&);
    LevelExternalLinkConfig();
#endif // @header-generator platform
};
