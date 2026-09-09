#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class Request; }
namespace Bedrock::Http { class Response; }
namespace Social { struct AuthToken; }
namespace Social { struct PlayFabGetUserDataResult; }
// clang-format on

namespace Social {

class PlayFabGetUserPublisherDataRequest {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Http::Request buildRequest(std::string const&, ::Social::AuthToken const&);

    MCNAPI static ::Social::PlayFabGetUserDataResult processResponse(::Bedrock::Http::Response const&);
    // NOLINTEND
};

} // namespace Social
