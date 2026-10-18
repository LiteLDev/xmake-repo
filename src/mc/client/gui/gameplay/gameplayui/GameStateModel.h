#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/gameplay/data/gameplayui/ChestType.h"
#include "mc/deps/shared_types/legacy/ContainerType.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/gameplay/data/gameplayui/ChestType.h"
#include "mc/deps/shared_types/legacy/ContainerType.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace GameplayUI {

#if defined(LL_PLAT_A) // @header-generator platform
struct GameStateModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 2, std::optional<SharedTypes::Legacy::ContainerType>> activeContainer;
    ::ll::TypedStorage<4, 8, std::optional<GameplayUI::ChestType>>              chestType;
    ::ll::TypedStorage<1, 1, bool>                                              isPlayerAlive;
    ::ll::TypedStorage<1, 1, bool>                                              isPlayerSleeping;
    ::ll::TypedStorage<1, 1, bool>                                              isConnectedToGameServer;
    ::ll::TypedStorage<1, 1, bool>                                              hasActiveDataDrivenUIScreen;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct GameStateModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 2, ::std::optional<::SharedTypes::Legacy::ContainerType>> activeContainer;
    ::ll::TypedStorage<4, 8, ::std::optional<::GameplayUI::ChestType>>              chestType;
    ::ll::TypedStorage<1, 1, bool>                                                  isPlayerAlive;
    ::ll::TypedStorage<1, 1, bool>                                                  isPlayerSleeping;
    ::ll::TypedStorage<1, 1, bool>                                                  isConnectedToGameServer;
    ::ll::TypedStorage<1, 1, bool>                                                  hasActiveDataDrivenUIScreen;
    // NOLINTEND
};
#else // @header-generator platform
struct GameStateModel {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace GameplayUI
