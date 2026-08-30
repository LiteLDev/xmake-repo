#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/Packet.h"
#include "mc/network/packet/ClientboundDataStorePacketPayload.h"
#include "mc/network/packet/cerealize/core/SerializationMode.h"

class ClientboundDataStorePacket : public ::ll::PayloadPacket<::ClientboundDataStorePacketPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SerializationMode> mSerializationMode;
    // NOLINTEND
};
