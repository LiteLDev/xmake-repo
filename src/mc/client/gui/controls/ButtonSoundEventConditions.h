#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct ButtonSoundEventConditions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> id;
    bool                           matchSpecificButtonId : 1;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct ButtonSoundEventConditions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> id;
    bool                           matchSpecificButtonId : 1;
    // NOLINTEND
};
#else // @header-generator platform
struct ButtonSoundEventConditions {};
#endif // @header-generator platform
#endif // @header-generator platform
