#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/ArmorSlot.h"
#include "mc/network/packet/ArmorSlotAndDamagePair.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
struct ArmorSlotAndDamagePair;
// clang-format on
#endif // @header-generator platform

struct PlayerArmorDamagePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<ArmorSlotAndDamagePair>> mSlotAndDamagePairs;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addArmorDamage(::SharedTypes::Legacy::ArmorSlot, short);
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::ArmorSlotAndDamagePair>> mSlotAndDamagePairs;
#endif // @header-generator platform
    // NOLINTEND
};
