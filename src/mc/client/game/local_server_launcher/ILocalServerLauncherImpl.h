#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace LocalServerLauncher { class IGameInterface; }
namespace LocalServerLauncher { class IServerInstanceBuilder; }
namespace LocalServerLauncher { struct GameDependencies; }
namespace LocalServerLauncher { struct ServerInitData; }
namespace LocalServerLauncher { struct ServerLaunchResult; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace LocalServerLauncher {

#if defined(LL_PLAT_A) // @header-generator platform
class ILocalServerLauncherImpl {};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class ILocalServerLauncherImpl {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ILocalServerLauncherImpl() = default;

    virtual ::std::unique_ptr<::LocalServerLauncher::IGameInterface> createGameInterface() = 0;

    virtual ::std::unique_ptr<::LocalServerLauncher::IServerInstanceBuilder> createServerBuilder() = 0;

    virtual ::std::unique_ptr<::LocalServerLauncher::GameDependencies> createGameDependencies() = 0;

    virtual void completeServerStartup(
        ::std::shared_ptr<::LocalServerLauncher::ServerInitData> serverInitData,
        ::LocalServerLauncher::ServerLaunchResult&&              result
    ) = 0;
    // NOLINTEND
};
#else // @header-generator platform
class ILocalServerLauncherImpl {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace LocalServerLauncher
