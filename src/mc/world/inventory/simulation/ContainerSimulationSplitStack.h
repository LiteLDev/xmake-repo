#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/ContainerValidationSlotData.h"

struct ContainerSimulationSplitStack {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::ContainerValidationSlotData> mContainerSlot;
    ::ll::TypedStorage<4, 4, int>                            mAddedCount;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ContainerSimulationSplitStack();
#else // @header-generator platform
#endif // @header-generator platform
};
