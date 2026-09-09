#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/Packet.h"
#include "mc/network/packet/EditorNetworkPacketVariantPayload.h"
#include "mc/network/packet/cerealize/core/SerializationMode.h"

class EditorNetworkPacket : public ::Packet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 56, ::EditorNetworkPacketVariantPayload> mPayload;
    ::ll::TypedStorage<4, 4, ::SerializationMode>                  mSerializationMode;
    // NOLINTEND
};
