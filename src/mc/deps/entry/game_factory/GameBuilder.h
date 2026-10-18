#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/entry/game_factory_impl/IGameBuilder.h"

// auto generated forward declare list
// clang-format off
class IMinecraftGame;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace GameFactory {

#if defined(LL_PLAT_A) // @header-generator platform
class GameBuilder : public ::GameFactoryImpl::IGameBuilder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<IMinecraftGame>> mGame;
    // NOLINTEND
};
#else // @header-generator platform
class GameBuilder {};
#endif // @header-generator platform

} // namespace GameFactory
