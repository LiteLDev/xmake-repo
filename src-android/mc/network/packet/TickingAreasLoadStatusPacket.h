#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/Packet.h"
#include "mc/network/packet/TickingAreasLoadStatusPacketPayload.h"
#include "mc/network/packet/cerealize/core/SerializationMode.h"

class TickingAreasLoadStatusPacket : public ::ll::PayloadPacket<::TickingAreasLoadStatusPacketPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SerializationMode> mSerializationMode;
    // NOLINTEND
};
