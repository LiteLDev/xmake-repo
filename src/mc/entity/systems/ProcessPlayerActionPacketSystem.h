#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class ActorRuntimeID;
class BlockPalette;
class InventoryTransactionPacket;
class NetEventCallback;
class NetworkIdentifier;
class PlayerActionPacket;
class PlayerAuthInputPacket;
class ServerPlayer;
struct PlayerActionComponent;
#else // @header-generator platform
#endif // @header-generator platform
struct TickingSystemWithInfo;
// clang-format on

class ProcessPlayerActionPacketSystem {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createSystem();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createSystem();
#endif // @header-generator platform
    // NOLINTEND
};
