#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace LocalServerLauncher { struct GameDependencies; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace LocalServerLauncher {

#if defined(LL_PLAT_A) // @header-generator platform
class GameDependenciesContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<LocalServerLauncher::GameDependencies>>> mGameDependencies;
    // NOLINTEND
};
#else // @header-generator platform
class GameDependenciesContext {};
#endif // @header-generator platform

} // namespace LocalServerLauncher
