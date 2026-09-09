#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/GameType.h"

namespace Social::XblRichPresence {

struct GameplaySession {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::GameType> gameType;
    ::ll::TypedStorage<1, 1, bool>       inRealm;
    // NOLINTEND
};

} // namespace Social::XblRichPresence
