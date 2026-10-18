#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/server/config/gathering/server_configuration/ClientStoreEntryPointConfiguration.h"
#include "mc/server/config/gathering/server_configuration/GatheringsConfigurationJoinInfo.h"
#include "mc/server/config/gathering/server_configuration/PresenceConfiguration.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace ServerConfiguration {

struct ServerConfigurationJoinInfo {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 216, std::optional<ServerConfiguration::GatheringsConfigurationJoinInfo>> mGatheringsConfiguration;
    ::ll::TypedStorage<8, 56, std::optional<ServerConfiguration::ClientStoreEntryPointConfiguration>> mClientStoreEntryPointConfiguration;
    ::ll::TypedStorage<8, 40, std::optional<ServerConfiguration::PresenceConfiguration>> mPresenceConfiguration;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<8, 256> mUnkbcd9a2;
    ::ll::UntypedStorage<8, 72>  mUnk2be4db;
    ::ll::UntypedStorage<8, 48>  mUnkb6979c;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    ServerConfigurationJoinInfo(ServerConfigurationJoinInfo const&);
#else // @header-generator platform
    ServerConfigurationJoinInfo();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    MCNAPI ServerConfigurationJoinInfo(::ServerConfiguration::ServerConfigurationJoinInfo const&);

#endif // @header-generator platform
    MCNAPI ::ServerConfiguration::ServerConfigurationJoinInfo&
#if defined(LL_PLAT_A) // @header-generator platform
    operator=(::ServerConfiguration::ServerConfigurationJoinInfo&&);
#else // @header-generator platform
    operator=(::ServerConfiguration::ServerConfigurationJoinInfo const&);
#endif // @header-generator platform

    MCNAPI ~ServerConfigurationJoinInfo();
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // static functions
#else // @header-generator platform
    // constructor thunks
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCNAPI void* $ctor(::ServerConfiguration::ServerConfigurationJoinInfo const&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ServerConfiguration
