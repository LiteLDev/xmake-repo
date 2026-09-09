#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/Packet.h"
#include "mc/network/packet/ClientboundUpdateSoundDataPacketPayload.h"
#include "mc/network/packet/cerealize/core/SerializationMode.h"

class ClientboundUpdateSoundDataPacket : public ::ll::PayloadPacket<::ClientboundUpdateSoundDataPacketPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SerializationMode> mSerializationMode;
    // NOLINTEND
};
