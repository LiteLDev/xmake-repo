#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/ArmorSlot.h"
#include "mc/network/packet/ArmorSlotAndDamagePair.h"

struct PlayerArmorDamagePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<ArmorSlotAndDamagePair>> mSlotAndDamagePairs;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addArmorDamage(::SharedTypes::Legacy::ArmorSlot, short);
    // NOLINTEND
};
