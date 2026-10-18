#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/nether_net/ESessionError.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace NetherNet {

class ConnectError {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, unsigned long long>         mSessionId;
    ::ll::TypedStorage<4, 4, ::NetherNet::ESessionError> mError;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk7df1f2;
    ::ll::UntypedStorage<4, 4> mUnkcb94fc;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string_view const& kIdentifier();
    // NOLINTEND
#else // @header-generator platform
    // prevent constructor by default
    ConnectError& operator=(ConnectError const&);
    ConnectError(ConnectError const&);
    ConnectError();
#endif // @header-generator platform
};

} // namespace NetherNet
