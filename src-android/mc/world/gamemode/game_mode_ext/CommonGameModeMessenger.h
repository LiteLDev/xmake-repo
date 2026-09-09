#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/gamemode/IGameModeMessenger.h"

// auto generated forward declare list
// clang-format off
class Player;
// clang-format on

namespace GameModeExt {

struct CommonGameModeMessenger : public ::IGameModeMessenger {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Player&> mPlayer;
    // NOLINTEND

public:
    // prevent constructor by default
    CommonGameModeMessenger& operator=(CommonGameModeMessenger const&);
    CommonGameModeMessenger(CommonGameModeMessenger const&);
    CommonGameModeMessenger();
};

} // namespace GameModeExt
