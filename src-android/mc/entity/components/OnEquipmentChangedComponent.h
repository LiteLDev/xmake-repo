#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/OnEquipmentChangedSlotEntry.h"

struct OnEquipmentChangedComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<OnEquipmentChangedSlotEntry>> mSlots;
    // NOLINTEND

public:
    // prevent constructor by default
    OnEquipmentChangedComponent& operator=(OnEquipmentChangedComponent const&);
};
