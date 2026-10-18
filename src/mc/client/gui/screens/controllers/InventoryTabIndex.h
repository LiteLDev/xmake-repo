#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class InventoryTabIndex : uint {
    OWNED               = 0,
    REALMS_PLUS_CURRENT = 1,
    REALMS_PLUS_REMOVED = 2,
    SEARCH_TABS_COUNT   = 3,
    SUBSCRIPTIONS       = 3,
    INVENTORY_TAB_COUNT = 4,
    INVALID             = 5,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class InventoryTabIndex : uint {
    Owned             = 0,
    RealmsPlusCurrent = 1,
    RealmsPlusRemoved = 2,
    SearchTabsCount   = 3,
    Subscriptions     = 3,
    InventoryTabCount = 4,
    Invalid           = 5,
};
#else // @header-generator platform
enum class InventoryTabIndex : uint {};
#endif // @header-generator platform
#endif // @header-generator platform
