#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/social/edu_discovery/JoinCode.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace EDUDiscovery {

#if defined(LL_PLAT_A) // @header-generator platform
struct ServerID {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::EDUDiscovery::JoinCode> joinCode;
    ::ll::TypedStorage<8, 24, std::string>              passcode;
    ::ll::TypedStorage<8, 24, std::string>              token;
    // NOLINTEND
};
#else // @header-generator platform
struct ServerID {};
#endif // @header-generator platform

} // namespace EDUDiscovery
