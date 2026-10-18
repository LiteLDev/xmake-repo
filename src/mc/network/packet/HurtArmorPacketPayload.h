#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"

struct HurtArmorPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::ActorDamageCause> mCause;
    ::ll::TypedStorage<4, 4, int>                                     mDmg;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::bitset<5>>                          mArmorSlots;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, ::std::bitset<5>>                        mArmorSlots;
#endif // @header-generator platform
    // NOLINTEND
};
