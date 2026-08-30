#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/Packet.h"
#include "mc/network/packet/CameraAimAssistPacketPayload.h"
#include "mc/network/packet/cerealize/core/SerializationMode.h"

class CameraAimAssistPacket : public ::ll::PayloadPacket<::CameraAimAssistPacketPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SerializationMode> mSerializationMode;
    // NOLINTEND
};
