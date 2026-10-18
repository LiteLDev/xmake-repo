#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace NetherNet { class IdentityAssertion; }
namespace webrtc { class SessionDescriptionInterface; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace NetherNet {

class ConnectResponse {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, unsigned long long> mSessionId;
    ::ll::TypedStorage<8, 24, std::string>       mSdp;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnk6205dd;
    ::ll::UntypedStorage<8, 32> mUnkc2d6fb;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ConnectResponse& operator=(ConnectResponse const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ConnectResponse(ConnectResponse const&);
#endif // @header-generator platform
    ConnectResponse();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string_view const& kIdentifier();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace NetherNet
