#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/gameplay/data/gameplayui/ChestType.h"
#include "mc/client/gui/gameplay/gameplayui/GameStateModel.h"
#include "mc/deps/shared_types/legacy/ContainerType.h"

// auto generated forward declare list
// clang-format off
class IOptionRegistry;
// clang-format on

namespace GameplayUI {

class GameplayUIRouteHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, std::optional<std::string>>   mExpectedRoute;
    ::ll::TypedStorage<4, 16, ::GameplayUI::GameStateModel> mModel;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void closeDataDrivenScreens();

    MCNAPI void onGameServerConnectionChanged(bool);

    MCNAPI void onLeaveWorld();

    MCNAPI void onPlayerOpenContainer(::SharedTypes::Legacy::ContainerType, std::optional<GameplayUI::ChestType>);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool isManagedRoute(std::string const&, ::IOptionRegistry const&);
    // NOLINTEND
};

} // namespace GameplayUI
