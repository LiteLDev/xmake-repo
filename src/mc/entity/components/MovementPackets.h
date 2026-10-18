#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/InteractPacket.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/network/packet/InventoryPacketHandler.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/network/packet/PlayerAuthInputPacket.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
class InventoryPacketHandler;
// clang-format on
#endif // @header-generator platform

struct MovementPackets {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 240>                                   mInput;
    ::ll::TypedStorage<8, 24, std::vector<InventoryPacketHandler>> mTransactions;
    ::ll::UntypedStorage<8, 96>                                    mInteraction;
#else // @header-generator platform
    ::ll::TypedStorage<8, 240, ::std::optional<::PlayerAuthInputPacket>> mInput;
    ::ll::TypedStorage<8, 24, ::std::vector<::InventoryPacketHandler>>   mTransactions;
    ::ll::TypedStorage<8, 96, ::std::optional<::InteractPacket>>         mInteraction;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    MovementPackets& operator=(MovementPackets const&);
    MovementPackets(MovementPackets const&);
#else // @header-generator platform
#endif // @header-generator platform
};
