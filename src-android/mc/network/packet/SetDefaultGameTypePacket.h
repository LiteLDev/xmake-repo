#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/Packet.h"
#include "mc/network/packet/SetDefaultGameTypePacketPayload.h"
#include "mc/network/packet/cerealize/core/SerializationMode.h"

class SetDefaultGameTypePacket : public ::ll::PayloadPacket<::SetDefaultGameTypePacketPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SerializationMode> mSerializationMode;
    // NOLINTEND
};
