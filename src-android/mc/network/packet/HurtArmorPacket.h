#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/Packet.h"
#include "mc/network/packet/HurtArmorPacketPayload.h"
#include "mc/network/packet/cerealize/core/SerializationMode.h"

class HurtArmorPacket : public ::ll::PayloadPacket<::HurtArmorPacketPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SerializationMode> mSerializationMode;
    // NOLINTEND
};
