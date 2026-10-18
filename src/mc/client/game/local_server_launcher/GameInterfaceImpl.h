#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/game/local_server_launcher/IGameInterface.h"
#include "mc/client/game/local_server_launcher/InterfaceDependencies.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace LocalServerLauncher::Impl {

#if defined(LL_PLAT_A) // @header-generator platform
class GameInterfaceImpl : public ::LocalServerLauncher::IGameInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 128> mDependencies;
    // NOLINTEND
};
#else // @header-generator platform
class GameInterfaceImpl {};
#endif // @header-generator platform

} // namespace LocalServerLauncher::Impl
