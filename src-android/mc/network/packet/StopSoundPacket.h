#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/Packet.h"
#include "mc/network/packet/StopSoundPacketPayload.h"
#include "mc/network/packet/cerealize/core/SerializationMode.h"

class StopSoundPacket : public ::ll::PayloadPacket<::StopSoundPacketPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SerializationMode> mSerializationMode;
    // NOLINTEND
};
