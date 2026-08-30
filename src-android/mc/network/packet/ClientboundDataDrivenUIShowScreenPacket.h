#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/Packet.h"
#include "mc/network/packet/ClientboundDataDrivenUIShowScreenPacketPayload.h"
#include "mc/network/packet/cerealize/core/SerializationMode.h"

class ClientboundDataDrivenUIShowScreenPacket
: public ::ll::PayloadPacket<::ClientboundDataDrivenUIShowScreenPacketPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SerializationMode> mSerializationMode;
    // NOLINTEND
};
