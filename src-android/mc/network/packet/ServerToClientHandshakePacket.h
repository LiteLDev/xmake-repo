#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/Packet.h"
#include "mc/network/packet/ServerToClientHandshakePacketPayload.h"
#include "mc/network/packet/cerealize/core/SerializationMode.h"

class ServerToClientHandshakePacket : public ::ll::PayloadPacket<::ServerToClientHandshakePacketPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SerializationMode> mSerializationMode;
    // NOLINTEND
};
