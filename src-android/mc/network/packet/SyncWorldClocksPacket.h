#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/Packet.h"
#include "mc/network/packet/SyncWorldClocksPacketPayload.h"
#include "mc/network/packet/cerealize/core/SerializationMode.h"

class SyncWorldClocksPacket : public ::ll::PayloadPacket<::SyncWorldClocksPacketPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SerializationMode> mSerializationMode;
    // NOLINTEND
};
