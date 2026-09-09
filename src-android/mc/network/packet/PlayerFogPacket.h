#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/Packet.h"
#include "mc/network/packet/PlayerFogPacketPayload.h"
#include "mc/network/packet/cerealize/core/SerializationMode.h"

class PlayerFogPacket : public ::ll::PayloadPacket<::PlayerFogPacketPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SerializationMode> mSerializationMode;
    // NOLINTEND
};
