#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"

// auto generated forward declare list
// clang-format off
class Packet;
// clang-format on

class MinecraftPackets {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::shared_ptr<Packet> createPacket(::MinecraftPacketIds);
    // NOLINTEND
};
