#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/gameplay/data/gameplayui/ContainerActionType.h"
#include "mc/client/gui/gameplay/data/gameplayui/ContainerSlot.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace GameplayUI {

#if defined(LL_PLAT_C) // @header-generator platform
struct ContainerAction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::GameplayUI::ContainerActionType> type;
    ::ll::TypedStorage<4, 8, ::GameplayUI::ContainerSlot>       source;
    ::ll::TypedStorage<4, 8, ::GameplayUI::ContainerSlot>       destination;
    ::ll::TypedStorage<4, 8, ::GameplayUI::ContainerSlot>       splitStart;
    // NOLINTEND
};
#else // @header-generator platform
struct ContainerAction {};
#endif // @header-generator platform

} // namespace GameplayUI
#endif // @header-generator platform
