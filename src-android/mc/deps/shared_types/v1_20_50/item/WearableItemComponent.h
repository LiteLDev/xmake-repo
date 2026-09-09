#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/EquipmentSlot.h"

namespace SharedTypes::v1_20_50 {

struct WearableItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::EquipmentSlot> mSlot;
    ::ll::TypedStorage<4, 4, int>                                  mProtection;
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_50
