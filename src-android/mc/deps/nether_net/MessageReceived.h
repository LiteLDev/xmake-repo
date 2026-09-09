#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/NetworkID.h"

namespace NetherNet::LanEvents {

struct MessageReceived {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::NetherNet::NetworkID> mFrom;
    ::ll::TypedStorage<8, 24, ::NetherNet::NetworkID> mTo;
    ::ll::TypedStorage<8, 24, std::string>            mSourceIp;
    ::ll::TypedStorage<8, 24, std::vector<std::byte>> mMessage;
    // NOLINTEND
};

} // namespace NetherNet::LanEvents
