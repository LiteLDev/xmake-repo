#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/Packet.h"
#include "mc/network/packet/MotionPredictionHintsPacketPayload.h"
#include "mc/network/packet/cerealize/core/SerializationMode.h"

class MotionPredictionHintsPacket : public ::ll::PayloadPacket<::MotionPredictionHintsPacketPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SerializationMode> mSerializationMode;
    // NOLINTEND
};
