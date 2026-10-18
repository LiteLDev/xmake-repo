#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
#else // @header-generator platform
// auto generated inclusion list
#include "mc/server/config/server_configuration/ServerConfigurationJoinInfo.h"

#endif // @header-generator platform
namespace ServerConfiguration {

#if defined(LL_PLAT_C) // @header-generator platform
struct ServerConfigInfo {};
#else // @header-generator platform
struct ServerConfigInfo : public ::ServerConfiguration::ServerConfigurationJoinInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 104> mUnk8a1a69;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerConfigInfo& operator=(ServerConfigInfo const&);
    ServerConfigInfo(ServerConfigInfo const&);
    ServerConfigInfo();
};
#endif // @header-generator platform

} // namespace ServerConfiguration
#endif // @header-generator platform
