#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/ItemChargeEvent.h"

// auto generated forward declare list
// clang-format off
class ItemInstance;
class WeakEntityRef;
// clang-format on

struct ItemCompleteUseEvent : public ::ItemChargeEvent {
public:
    // prevent constructor by default
    ItemCompleteUseEvent& operator=(ItemCompleteUseEvent const&);
};
