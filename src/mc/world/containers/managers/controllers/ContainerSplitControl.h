#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/SlotData.h"
#include "mc/world/inventory/simulation/ContainerValidationSlotData.h"

struct ContainerSplitControl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::ContainerValidationSlotData> containerSlot;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 32, ::SlotData>                    slot;
#else // @header-generator platform
    ::ll::TypedStorage<8, 40, ::SlotData>                    slot;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                            addedCount;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ContainerSplitControl& operator=(ContainerSplitControl const&);
    ContainerSplitControl(ContainerSplitControl const&);
    ContainerSplitControl();
#else // @header-generator platform
#endif // @header-generator platform
};
