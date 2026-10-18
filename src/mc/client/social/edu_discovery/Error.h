#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/social/edu_discovery/ErrorType.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace EDUDiscovery {

#if defined(LL_PLAT_A) // @header-generator platform
struct Error {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::EDUDiscovery::ErrorType> type;
    ::ll::TypedStorage<4, 4, int>                       code;
    ::ll::TypedStorage<8, 24, std::string>              reason;
    // NOLINTEND

public:
    // prevent constructor by default
    Error();
};
#else // @header-generator platform
struct Error {};
#endif // @header-generator platform

} // namespace EDUDiscovery
