#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/world/item/HumanoidArmorItem.h"
#else // @header-generator platform
#endif // @header-generator platform

class ArmorBuilder {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                 mDurabilityMultiplier;
    ::ll::TypedStorage<4, 16, std::array<int, 4>> mProtectionBySlot;
    ::ll::TypedStorage<4, 4, int>                 mToughnessValue;
    ::ll::TypedStorage<4, 4, int>                 mEnchantValue;
    ::ll::TypedStorage<4, 4, float>               mKnockBackResistance;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                   mDurabilityMultiplier;
    ::ll::TypedStorage<4, 16, ::std::array<int, 4>> mProtectionBySlot;
    ::ll::TypedStorage<4, 4, int>                   mToughnessValue;
    ::ll::TypedStorage<4, 4, int>                   mEnchantValue;
    ::ll::TypedStorage<4, 4, float>                 mKnockBackResistance;
#endif // @header-generator platform
    // NOLINTEND
};
