#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ActorRuntimeID;
class BlockPalette;
class InventoryTransactionPacket;
class NetEventCallback;
class NetworkIdentifier;
class PlayerActionPacket;
class PlayerAuthInputPacket;
class ServerPlayer;
struct PlayerActionComponent;
struct TickingSystemWithInfo;
// clang-format on

class ProcessPlayerActionPacketSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
