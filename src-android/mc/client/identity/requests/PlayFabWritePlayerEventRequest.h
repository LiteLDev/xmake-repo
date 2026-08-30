#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/identity/PlayFabStatus.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class Request; }
namespace Bedrock::Http { class Response; }
namespace Json { class Value; }
namespace Social { struct AuthToken; }
// clang-format on

namespace Social {

class PlayFabWritePlayerEventRequest {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Http::Request
    buildRequest(std::string const&, ::Social::AuthToken const&, std::string const&, ::Json::Value const&);

    MCNAPI static ::Social::PlayFabStatus processResponse(::Bedrock::Http::Response const&);
    // NOLINTEND
};

} // namespace Social
