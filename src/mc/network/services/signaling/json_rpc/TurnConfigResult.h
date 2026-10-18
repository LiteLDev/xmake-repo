#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace NetherNet { struct StunRelayServer; }
namespace cereal { struct ReflectionCtx; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace JsonRpc {

class TurnConfigResult {
public:
    // TurnConfigResult inner types declare
    // clang-format off
    struct TurnAuthServer;
    // clang-format on

    // TurnConfigResult inner types define
    struct TurnAuthServer {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string>              mUsername;
        ::ll::TypedStorage<8, 24, std::string>              mPassword;
        ::ll::TypedStorage<8, 24, std::vector<std::string>> mUrls;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 32> mUnkeafb0b;
        ::ll::UntypedStorage<8, 32> mUnk6adfd9;
        ::ll::UntypedStorage<8, 24> mUnka4596c;
#endif // @header-generator platform
        // NOLINTEND

    public:
#if defined(LL_PLAT_A) // @header-generator platform
        // member functions
        // NOLINTBEGIN
        MCNAPI TurnAuthServer(::JsonRpc::TurnConfigResult::TurnAuthServer const&);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::JsonRpc::TurnConfigResult::TurnAuthServer const&);
        // NOLINTEND
#else // @header-generator platform
        // prevent constructor by default
        TurnAuthServer& operator=(TurnAuthServer const&);
        TurnAuthServer(TurnAuthServer const&);
        TurnAuthServer();
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                                                     mExpiration;
    ::ll::TypedStorage<8, 24, std::vector<JsonRpc::TurnConfigResult::TurnAuthServer>> mServers;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4>  mUnk44be47;
    ::ll::UntypedStorage<8, 24> mUnk2b2519;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI ~TurnConfigResult();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    // prevent constructor by default
    TurnConfigResult& operator=(TurnConfigResult const&);
    TurnConfigResult(TurnConfigResult const&);
    TurnConfigResult();
#endif // @header-generator platform
};

} // namespace JsonRpc
