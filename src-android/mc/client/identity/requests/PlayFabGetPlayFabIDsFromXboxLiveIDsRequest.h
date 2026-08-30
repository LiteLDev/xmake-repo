#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class Request; }
namespace Bedrock::Http { class Response; }
namespace Social { struct AuthToken; }
namespace Social { struct PlayFabGetPlayFabIDsResult; }
// clang-format on

namespace Social {

class PlayFabGetPlayFabIDsFromXboxLiveIDsRequest {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Http::Request
    buildRequest(std::string const&, ::Social::AuthToken const&, std::string const&, std::vector<std::string> const&);

    MCNAPI static ::Social::PlayFabGetPlayFabIDsResult processResponse(::Bedrock::Http::Response const&);
    // NOLINTEND
};

} // namespace Social
