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
    ::ll::TypedStorage<8, 32, ::SlotData>                    slot;
    ::ll::TypedStorage<4, 4, int>                            addedCount;
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerSplitControl& operator=(ContainerSplitControl const&);
    ContainerSplitControl(ContainerSplitControl const&);
    ContainerSplitControl();
};
