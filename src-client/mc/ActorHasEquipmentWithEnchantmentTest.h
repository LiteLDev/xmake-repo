#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/SimpleHashStringFilterTest.h"

class ActorHasEquipmentWithEnchantmentTest : public ::SimpleHashStringFilterTest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mEquipmentSlot;
    // NOLINTEND
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
