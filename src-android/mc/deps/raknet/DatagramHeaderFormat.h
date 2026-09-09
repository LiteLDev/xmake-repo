#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/uint24_t.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class BitStream; }
// clang-format on

struct DatagramHeaderFormat {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::RakNet::uint24_t> datagramNumber;
    ::ll::TypedStorage<4, 4, float>              AS;
    ::ll::TypedStorage<1, 1, bool>               isACK;
    ::ll::TypedStorage<1, 1, bool>               isNAK;
    ::ll::TypedStorage<1, 1, bool>               isPacketPair;
    ::ll::TypedStorage<1, 1, bool>               hasBAndAS;
    ::ll::TypedStorage<1, 1, bool>               isContinuousSend;
    ::ll::TypedStorage<1, 1, bool>               needsBAndAs;
    ::ll::TypedStorage<1, 1, bool>               isValid;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void Serialize(::RakNet::BitStream*);
    // NOLINTEND
};
