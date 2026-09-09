#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class Request; }
namespace Bedrock::Http { class Response; }
namespace Social { struct AuthToken; }
namespace Social { struct PlayFabSignInResult; }
// clang-format on

namespace Social {

class PlayFabLoginWithXboxLiveAccountRequest {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Http::Request
    buildRequest(std::string const&, ::Social::AuthToken const&, bool, bool, bool);

    MCNAPI static ::Social::PlayFabSignInResult processResponse(::Bedrock::Http::Response const&);
    // NOLINTEND
};

} // namespace Social
