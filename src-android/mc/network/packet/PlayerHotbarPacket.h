#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/Packet.h"
#include "mc/network/packet/PlayerHotbarPacketPayload.h"
#include "mc/network/packet/cerealize/core/SerializationMode.h"

class PlayerHotbarPacket : public ::ll::PayloadPacket<::PlayerHotbarPacketPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SerializationMode> mSerializationMode;
    // NOLINTEND
};
