#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/gameplay/api/gameplayui/ContainerItem.h"

namespace GameplayUI {

struct ContainerInteractionsContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 112, ::GameplayUI::ContainerItem> slotItem;
    ::ll::TypedStorage<8, 112, ::GameplayUI::ContainerItem> cursorItem;
    ::ll::TypedStorage<1, 1, bool>                          isDoubleClick;
    ::ll::TypedStorage<1, 1, bool>                          isShiftClick;
    // NOLINTEND
};

} // namespace GameplayUI
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
