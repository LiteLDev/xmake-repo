#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/DurationMode.h"

namespace SharedTypes::Beta::Sound {

struct DurationInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::SharedTypes::Beta::Sound::DurationMode> mMode;
    ::ll::TypedStorage<4, 4, float>                                    mSeconds;
    // NOLINTEND
};

} // namespace SharedTypes::Beta::Sound
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
