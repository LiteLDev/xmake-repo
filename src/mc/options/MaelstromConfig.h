#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MaelstromConfig {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool> enabled;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1> mUnkd7c8b7;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    MaelstromConfig& operator=(MaelstromConfig const&);
    MaelstromConfig(MaelstromConfig const&);
    MaelstromConfig();
#endif // @header-generator platform
};
