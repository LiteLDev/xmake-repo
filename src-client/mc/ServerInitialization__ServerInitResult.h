#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/SharedAsync.h"

// auto generated forward declare list
// clang-format off
class ServerNetworkSystem;
// clang-format on

namespace ServerInitialization {

struct ServerInitResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mInitialized;
    ::ll::UntypedStorage<8, 16> mNetworkSystem;
    // NOLINTEND
};

} // namespace ServerInitialization
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
