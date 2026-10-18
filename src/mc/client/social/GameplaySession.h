#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/level/GameType.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace Social::XblRichPresence {

#if defined(LL_PLAT_A) // @header-generator platform
struct GameplaySession {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::GameType> gameType;
    ::ll::TypedStorage<1, 1, bool>       inRealm;
    // NOLINTEND
};
#else // @header-generator platform
struct GameplaySession {};
#endif // @header-generator platform

} // namespace Social::XblRichPresence
