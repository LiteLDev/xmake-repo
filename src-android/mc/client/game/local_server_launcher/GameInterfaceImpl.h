#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/game/local_server_launcher/IGameInterface.h"
#include "mc/client/game/local_server_launcher/InterfaceDependencies.h"

namespace LocalServerLauncher::Impl {

class GameInterfaceImpl : public ::LocalServerLauncher::IGameInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 128> mDependencies;
    // NOLINTEND
};

} // namespace LocalServerLauncher::Impl
