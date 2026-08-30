#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/Packet.h"
#include "mc/network/packet/PartyDestinationCookieResponsePacketPayload.h"
#include "mc/network/packet/cerealize/core/SerializationMode.h"

class PartyDestinationCookieResponsePacket : public ::ll::PayloadPacket<::PartyDestinationCookieResponsePacketPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SerializationMode> mSerializationMode;
    // NOLINTEND
};
