#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BaseGameVersion.h"

struct BaseGameVersionComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 32> mBaseGameVersion;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::BaseGameVersion> mBaseGameVersion;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    BaseGameVersionComponent& operator=(BaseGameVersionComponent const&);
#else // @header-generator platform
#endif // @header-generator platform
};
