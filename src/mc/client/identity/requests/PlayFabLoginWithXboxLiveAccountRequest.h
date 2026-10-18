#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class Request; }
namespace Bedrock::Http { class Response; }
namespace Social { struct AuthToken; }
namespace Social { struct PlayFabSignInResult; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
class PlayFabLoginWithXboxLiveAccountRequest {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Http::Request
    buildRequest(std::string const&, ::Social::AuthToken const&, bool, bool, bool);

    MCNAPI static ::Social::PlayFabSignInResult processResponse(::Bedrock::Http::Response const&);
    // NOLINTEND
};
#else // @header-generator platform
class PlayFabLoginWithXboxLiveAccountRequest {};
#endif // @header-generator platform

} // namespace Social
