#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/gameplay/data/gameplayui/ContainerItem.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace GameplayUI {

#if defined(LL_PLAT_C) // @header-generator platform
struct ContainerInteractionsContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 136, ::GameplayUI::ContainerItem> slotItem;
    ::ll::TypedStorage<8, 136, ::GameplayUI::ContainerItem> cursorItem;
    ::ll::TypedStorage<1, 1, bool>                          isDoubleClick;
    ::ll::TypedStorage<1, 1, bool>                          isShiftClick;
    // NOLINTEND
};
#else // @header-generator platform
struct ContainerInteractionsContext {};
#endif // @header-generator platform

} // namespace GameplayUI
#endif // @header-generator platform
