#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/PluginInterface2.h"

namespace RakNet {

class PacketLogger : public ::RakNet::PluginInterface2 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>        logDirectMessages;
    ::ll::TypedStorage<1, 1, bool>        printId;
    ::ll::TypedStorage<1, 1, bool>        printAcks;
    ::ll::TypedStorage<1, 256, char[256]> prefix;
    ::ll::TypedStorage<1, 256, char[256]> suffix;
    // NOLINTEND
};

} // namespace RakNet
