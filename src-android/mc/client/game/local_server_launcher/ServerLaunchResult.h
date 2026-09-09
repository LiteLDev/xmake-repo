#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ServerInstance;
// clang-format on

namespace LocalServerLauncher {

struct ServerLaunchResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                            mServerProcessInitializedOK;
    ::ll::TypedStorage<1, 1, bool>                            mNewLevel;
    ::ll::TypedStorage<1, 1, bool>                            mEarlyOut;
    ::ll::TypedStorage<1, 1, bool>                            mTriedToInitializeServer;
    ::ll::TypedStorage<1, 2, std::optional<bool>>             mHasDestroyedGame;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ServerInstance>> mServerInstance;
    // NOLINTEND
};

} // namespace LocalServerLauncher
