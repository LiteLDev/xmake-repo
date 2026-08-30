#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class Request; }
namespace Bedrock::Http { class Response; }
namespace Social { struct AuthToken; }
namespace Social { struct PlayFabGetPlayerPlatformAccountIdsResult; }
// clang-format on

namespace Social {

class PlayFabGetPlayerPlatformAccountIdsRequest {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Http::Request
    buildRequest(std::string const&, ::Social::AuthToken const&, std::vector<std::string> const&);

    MCNAPI static ::Social::PlayFabGetPlayerPlatformAccountIdsResult processResponse(::Bedrock::Http::Response const&);
    // NOLINTEND
};

} // namespace Social
