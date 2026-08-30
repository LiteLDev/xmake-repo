#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class PlayerAuthInputPacket;
struct ServerScriptInputPacketQueueComponent;
struct TickingSystemWithInfo;
// clang-format on

struct ServerScriptInputSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::TickingSystemWithInfo createSystem();

    MCNAPI static bool
    onPlayerAuthInputPacket(::ServerScriptInputPacketQueueComponent&, ::PlayerAuthInputPacket const&);
    // NOLINTEND
};
