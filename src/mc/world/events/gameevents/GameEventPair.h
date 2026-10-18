#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
class GameEvent;
// clang-format on

struct GameEventPair {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, ::HashedString const> mHashedName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 48, ::HashedString const> mHashedName;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 8, ::GameEvent const&>    mGameEvent;
    // NOLINTEND

public:
    // prevent constructor by default
    GameEventPair& operator=(GameEventPair const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    GameEventPair(GameEventPair const&);
#endif // @header-generator platform
    GameEventPair();
};
