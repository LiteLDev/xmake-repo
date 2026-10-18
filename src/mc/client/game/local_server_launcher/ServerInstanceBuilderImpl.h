#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/game/local_server_launcher/IServerInstanceBuilder.h"
#include "mc/client/game/local_server_launcher/ServerDependencies.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace LocalServerLauncher::Impl {

#if defined(LL_PLAT_A) // @header-generator platform
class ServerInstanceBuilderImpl : public ::LocalServerLauncher::IServerInstanceBuilder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 320> mDependencies;
    // NOLINTEND
};
#else // @header-generator platform
class ServerInstanceBuilderImpl {};
#endif // @header-generator platform

} // namespace LocalServerLauncher::Impl
