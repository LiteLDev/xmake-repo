#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/network/MinecraftPacketIds.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
// clang-format on

class PacketHeader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mHeaderData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI uint getChannel() const;
    // NOLINTEND
};
