#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class RakPeerInterface; }
namespace RakNet { class TCPInterface; }
// clang-format on

namespace RakNet {

class PluginInterface2 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::RakNet::RakPeerInterface*> rakPeerInterface;
    ::ll::TypedStorage<8, 8, ::RakNet::TCPInterface*>     tcpInterface;
    // NOLINTEND
};

} // namespace RakNet
