#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/entry/game_factory_impl/IGameBuilder.h"

// auto generated forward declare list
// clang-format off
class IMinecraftGame;
// clang-format on

namespace GameFactory {

class GameBuilder : public ::GameFactoryImpl::IGameBuilder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<IMinecraftGame>> mGame;
    // NOLINTEND
};

} // namespace GameFactory
