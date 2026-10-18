#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/GameplayUI__ContainerSlot.h"
#include "mc/world/containers/ContainerEnumName.h"

// auto generated forward declare list
// clang-format off
namespace GameplayUI { struct ContainerAction; }
namespace GameplayUI { struct ContainerInteractionsContext; }
// clang-format on

namespace GameplayUI {

class ContainerInteractionsHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                        mDoneActionThisClick;
    ::ll::TypedStorage<1, 1, bool>                        mPressWasDoubleClick;
    ::ll::TypedStorage<1, 1, bool>                        mIsSplitting;
    ::ll::TypedStorage<4, 8, ::GameplayUI::ContainerSlot> mSplitStart;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::GameplayUI::ContainerAction handleBackgroundMouseRelease(int);

    MCNAPI void handlePanelMouseRelease();

    MCNAPI ::GameplayUI::ContainerAction
    handleSlotMouseDrag(::GameplayUI::ContainerInteractionsContext, int, ::ContainerEnumName, int);

    MCNAPI ::GameplayUI::ContainerAction
    handleSlotMousePress(::GameplayUI::ContainerInteractionsContext, int, ::ContainerEnumName, int);

    MCNAPI ::GameplayUI::ContainerAction
    handleSlotMouseRelease(::GameplayUI::ContainerInteractionsContext, int, ::ContainerEnumName, int);
    // NOLINTEND
};

} // namespace GameplayUI
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
