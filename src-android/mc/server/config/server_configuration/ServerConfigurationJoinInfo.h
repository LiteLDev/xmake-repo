#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/config/gathering/server_configuration/ClientStoreEntryPointConfiguration.h"
#include "mc/server/config/gathering/server_configuration/GatheringsConfigurationJoinInfo.h"
#include "mc/server/config/gathering/server_configuration/PresenceConfiguration.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace ServerConfiguration {

struct ServerConfigurationJoinInfo {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 216, std::optional<ServerConfiguration::GatheringsConfigurationJoinInfo>> mGatheringsConfiguration;
    ::ll::TypedStorage<8, 56, std::optional<ServerConfiguration::ClientStoreEntryPointConfiguration>> mClientStoreEntryPointConfiguration;
    ::ll::TypedStorage<8, 40, std::optional<ServerConfiguration::PresenceConfiguration>> mPresenceConfiguration;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ServerConfigurationJoinInfo(ServerConfigurationJoinInfo const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ServerConfiguration::ServerConfigurationJoinInfo&
    operator=(::ServerConfiguration::ServerConfigurationJoinInfo&&);

    MCNAPI ~ServerConfigurationJoinInfo();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ServerConfiguration
