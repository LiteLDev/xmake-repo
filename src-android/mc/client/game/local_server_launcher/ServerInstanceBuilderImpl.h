#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/game/local_server_launcher/IServerInstanceBuilder.h"
#include "mc/client/game/local_server_launcher/ServerDependencies.h"

namespace LocalServerLauncher::Impl {

class ServerInstanceBuilderImpl : public ::LocalServerLauncher::IServerInstanceBuilder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 320> mDependencies;
    // NOLINTEND
};

} // namespace LocalServerLauncher::Impl
