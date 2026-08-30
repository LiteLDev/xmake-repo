#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/config/gathering/server_configuration/GatheringsConfigurationJoinInfo.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { struct NetworkID; }
// clang-format on

struct TransferPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::string> mDestination;
    ::ll::TypedStorage<2, 2, ushort> mDestinationPort;
    ::ll::TypedStorage<1, 1, bool> mReloadWorld;
    ::ll::TypedStorage<8, 216, std::optional<ServerConfiguration::GatheringsConfigurationJoinInfo>> mGatheringsConfiguration;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TransferPacketPayload(::TransferPacketPayload&&);

    MCNAPI ~TransferPacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::TransferPacketPayload&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
