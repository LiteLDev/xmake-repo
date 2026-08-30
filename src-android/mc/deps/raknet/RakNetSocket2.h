#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/RNS2Type.h"
#include "mc/deps/raknet/SystemAddress.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class RNS2EventHandler; }
// clang-format on

namespace RakNet {

class RakNetSocket2 : public ::std::enable_shared_from_this<RakNet::RakNetSocket2> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::RakNet::RNS2EventHandler*> eventHandler;
    ::ll::TypedStorage<4, 4, ::RakNet::RNS2Type>          socketType;
    ::ll::TypedStorage<4, 4, int>                         socketProtocolType;
    ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress>   boundAddress;
    ::ll::TypedStorage<4, 4, uint>                        userConnectionSocketIndex;
    // NOLINTEND
};

} // namespace RakNet
