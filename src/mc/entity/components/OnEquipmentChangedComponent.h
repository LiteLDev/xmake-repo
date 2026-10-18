#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/entity/components/OnEquipmentChangedSlotEntry.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
struct OnEquipmentChangedSlotEntry;
// clang-format on
#endif // @header-generator platform

struct OnEquipmentChangedComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<OnEquipmentChangedSlotEntry>> mSlots;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::OnEquipmentChangedSlotEntry>> mSlots;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    OnEquipmentChangedComponent& operator=(OnEquipmentChangedComponent const&);
#else // @header-generator platform
#endif // @header-generator platform
};
