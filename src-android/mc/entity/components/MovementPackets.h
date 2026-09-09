#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/InteractPacket.h"
#include "mc/network/packet/InventoryPacketHandler.h"
#include "mc/network/packet/PlayerAuthInputPacket.h"

struct MovementPackets {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 240>                                   mInput;
    ::ll::TypedStorage<8, 24, std::vector<InventoryPacketHandler>> mTransactions;
    ::ll::UntypedStorage<8, 96>                                    mInteraction;
    // NOLINTEND

public:
    // prevent constructor by default
    MovementPackets& operator=(MovementPackets const&);
    MovementPackets(MovementPackets const&);
};
