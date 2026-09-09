#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/SystemAddress.h"

// auto generated forward declare list
// clang-format off
struct ChunkLoadTelemetryData;
struct NetworkAddress;
namespace Json { class Value; }
namespace RakNet { class TCPInterface; }
// clang-format on

class ServerCommunicationInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<RakNet::TCPInterface>> mTCPConnection;
    ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress>             mHostAddress;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerCommunicationInterface();
};
