#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { struct StunRelayServer; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

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
        ::ll::TypedStorage<8, 24, std::string>              mUsername;
        ::ll::TypedStorage<8, 24, std::string>              mPassword;
        ::ll::TypedStorage<8, 24, std::vector<std::string>> mUrls;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI TurnAuthServer(::JsonRpc::TurnConfigResult::TurnAuthServer const&);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::JsonRpc::TurnConfigResult::TurnAuthServer const&);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                                     mExpiration;
    ::ll::TypedStorage<8, 24, std::vector<JsonRpc::TurnConfigResult::TurnAuthServer>> mServers;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~TurnConfigResult();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace JsonRpc
