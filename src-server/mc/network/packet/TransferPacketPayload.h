#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/config/gathering/server_configuration/GatheringsConfigurationJoinInfo.h"

struct TransferPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mDestination;
    ::ll::TypedStorage<2, 2, ushort>         mDestinationPort;
    ::ll::TypedStorage<1, 1, bool>           mReloadWorld;
    ::ll::TypedStorage<8, 256, ::std::optional<::ServerConfiguration::GatheringsConfigurationJoinInfo>>
        mGatheringsConfiguration;
    // NOLINTEND
};
