#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/ItemChargeEvent.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
struct ItemCompleteUseEvent : public ::ItemChargeEvent {};
#endif // @header-generator platform
