#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/network/Packet.h"
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::shared_ptr<Packet> createPacket(::MinecraftPacketIds);
#else // @header-generator platform
    MCAPI static ::std::shared_ptr<::Packet> createPacket(::MinecraftPacketIds id);
#endif // @header-generator platform
    // NOLINTEND
};
