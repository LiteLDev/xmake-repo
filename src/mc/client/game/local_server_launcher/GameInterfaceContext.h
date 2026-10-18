#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace LocalServerLauncher { class IGameInterface; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace LocalServerLauncher {

#if defined(LL_PLAT_A) // @header-generator platform
class GameInterfaceContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<LocalServerLauncher::IGameInterface>>> mGameInterface;
    // NOLINTEND
};
#else // @header-generator platform
class GameInterfaceContext {};
#endif // @header-generator platform

} // namespace LocalServerLauncher
