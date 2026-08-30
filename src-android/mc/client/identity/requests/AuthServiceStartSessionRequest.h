#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class Request; }
namespace Bedrock::Http { class Response; }
namespace Bedrock::Http { struct Url; }
namespace Social { struct AuthServiceSession; }
namespace Social { struct AuthServiceStartSessionRequestData; }
// clang-format on

namespace Social {

class AuthServiceStartSessionRequest {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Http::Request buildRequest(
        std::string const&,
        ::Bedrock::Http::Url const&,
        std::string const&,
        ::Social::AuthServiceStartSessionRequestData const&
    );

    MCNAPI static ::Social::AuthServiceSession processResponse(::Bedrock::Http::Response const&);
    // NOLINTEND
};

} // namespace Social
