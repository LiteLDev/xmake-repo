#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/gameplay/data/gameplayui/ChestType.h"
#include "mc/client/gui/gameplay/gameplayui/GameStateModel.h"
#include "mc/deps/shared_types/legacy/ContainerType.h"

// auto generated forward declare list
// clang-format off
class IOptionRegistry;
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/gameplay/gameplayui/GameStateModel.h"

// auto generated forward declare list
// clang-format off
class IOptionRegistry;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace GameplayUI {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class GameplayUIRouteHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mExpectedRoute;
    ::ll::TypedStorage<4, 16, ::GameplayUI::GameStateModel>   mModel;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void onLeaveWorld();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool isManagedRoute(::std::string const& route, ::IOptionRegistry const& options);
    // NOLINTEND
};
#else // @header-generator platform
class GameplayUIRouteHandler {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace GameplayUI
