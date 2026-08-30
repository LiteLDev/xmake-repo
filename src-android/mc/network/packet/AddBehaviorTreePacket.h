#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/Packet.h"
#include "mc/network/packet/AddBehaviorTreePacketPayload.h"
#include "mc/network/packet/cerealize/core/SerializationMode.h"

class AddBehaviorTreePacket : public ::ll::PayloadPacket<::AddBehaviorTreePacketPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SerializationMode> mSerializationMode;
    // NOLINTEND
};
