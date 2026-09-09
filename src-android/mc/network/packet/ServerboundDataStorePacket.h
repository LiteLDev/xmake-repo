#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/Packet.h"
#include "mc/network/packet/ServerboundDataStorePacketPayload.h"
#include "mc/network/packet/cerealize/core/SerializationMode.h"

class ServerboundDataStorePacket : public ::ll::PayloadPacket<::ServerboundDataStorePacketPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SerializationMode> mSerializationMode;
    // NOLINTEND
};
