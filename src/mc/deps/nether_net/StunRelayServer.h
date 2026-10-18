#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

struct StunRelayServer {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mUri;
    ::ll::TypedStorage<8, 24, std::string> mUsername;
    ::ll::TypedStorage<8, 24, std::string> mPassword;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk86c3e4;
    ::ll::UntypedStorage<8, 32> mUnkf37c87;
    ::ll::UntypedStorage<8, 32> mUnkc4c5ea;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    StunRelayServer& operator=(StunRelayServer const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    StunRelayServer(StunRelayServer const&);
    StunRelayServer();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~StunRelayServer();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace NetherNet
