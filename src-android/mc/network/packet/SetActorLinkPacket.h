#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/Packet.h"
#include "mc/network/packet/SetActorLinkPacketPayload.h"
#include "mc/network/packet/cerealize/core/SerializationMode.h"

class SetActorLinkPacket : public ::ll::PayloadPacket<::SetActorLinkPacketPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SerializationMode> mSerializationMode;
    // NOLINTEND
};
