#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class Request; }
namespace Bedrock::Http { class Response; }
namespace Social { struct PlayFabGetTitleKeyResult; }
// clang-format on

namespace Social {

class PlayFabGetTitlePublicKeyRequest {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Http::Request buildRequest(std::string const&, std::string const&);

    MCNAPI static ::Social::PlayFabGetTitleKeyResult processResponse(::Bedrock::Http::Response const&);
    // NOLINTEND
};

} // namespace Social
