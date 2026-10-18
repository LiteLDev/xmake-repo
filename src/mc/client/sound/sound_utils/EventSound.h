#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SoundUtils {

#if defined(LL_PLAT_A) // @header-generator platform
struct EventSound {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> eventName;
    ::ll::TypedStorage<8, 24, std::string> soundName;
    ::ll::TypedStorage<4, 4, float>        pitch;
    ::ll::TypedStorage<4, 4, float>        volume;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct EventSound {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> eventName;
    ::ll::TypedStorage<8, 32, ::std::string> soundName;
    ::ll::TypedStorage<4, 4, float>          pitch;
    ::ll::TypedStorage<4, 4, float>          volume;
    // NOLINTEND
};
#else // @header-generator platform
struct EventSound {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace SoundUtils
