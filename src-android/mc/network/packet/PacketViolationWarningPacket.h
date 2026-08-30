#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/Packet.h"
#include "mc/network/packet/PacketViolationWarningPacketPayload.h"
#include "mc/network/packet/cerealize/core/SerializationMode.h"

class PacketViolationWarningPacket : public ::ll::PayloadPacket<::PacketViolationWarningPacketPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SerializationMode> mSerializationMode;
    // NOLINTEND
};
