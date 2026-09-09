#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/NetworkID.h"

namespace NetherNet::LanEvents {

struct MessageSent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::error_code>        mResult;
    ::ll::TypedStorage<8, 24, ::NetherNet::NetworkID> mTo;
    ::ll::TypedStorage<8, 24, std::string>            mDestinationIp;
    ::ll::TypedStorage<8, 24, std::vector<std::byte>> mMessage;
    // NOLINTEND
};

} // namespace NetherNet::LanEvents
