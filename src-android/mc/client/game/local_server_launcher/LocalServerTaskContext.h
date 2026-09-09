#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/game/local_server_launcher/GameDependenciesContext.h"
#include "mc/client/game/local_server_launcher/GameInterfaceContext.h"

// auto generated forward declare list
// clang-format off
namespace LocalServerLauncher { class IServerInstanceBuilder; }
namespace LocalServerLauncher { struct ServerLaunchResult; }
// clang-format on

namespace LocalServerLauncher {

class LocalServerTaskContext : public ::LocalServerLauncher::GameDependenciesContext,
                               public ::LocalServerLauncher::GameInterfaceContext {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<1, 1, bool> mExpectedComplete;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<LocalServerLauncher::IServerInstanceBuilder>>> mServerBuilder;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<LocalServerLauncher::ServerLaunchResult>>> mResult;
    // clang-format on
    // NOLINTEND
};

} // namespace LocalServerLauncher
