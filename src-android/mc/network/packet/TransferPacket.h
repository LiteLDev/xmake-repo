#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/Packet.h"
#include "mc/network/packet/TransferPacketPayload.h"
#include "mc/network/packet/cerealize/core/SerializationMode.h"

class TransferPacket : public ::ll::PayloadPacket<::TransferPacketPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SerializationMode> mSerializationMode;
    // NOLINTEND
};
