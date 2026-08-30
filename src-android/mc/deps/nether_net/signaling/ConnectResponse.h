#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { class IdentityAssertion; }
namespace webrtc { class SessionDescriptionInterface; }
// clang-format on

namespace NetherNet {

class ConnectResponse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, unsigned long long> mSessionId;
    ::ll::TypedStorage<8, 24, std::string>       mSdp;
    // NOLINTEND

public:
    // prevent constructor by default
    ConnectResponse& operator=(ConnectResponse const&);
    ConnectResponse();

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string_view const& kIdentifier();
    // NOLINTEND
};

} // namespace NetherNet
