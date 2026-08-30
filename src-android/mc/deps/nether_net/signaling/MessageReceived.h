#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/NetworkID.h"

namespace NetherNet::SignalingEvents {

struct MessageReceived {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::NetherNet::NetworkID> mFrom;
    ::ll::TypedStorage<8, 24, std::string>            mMessage;
    ::ll::TypedStorage<8, 24, std::string>            mMessageId;
    // NOLINTEND
};

} // namespace NetherNet::SignalingEvents
