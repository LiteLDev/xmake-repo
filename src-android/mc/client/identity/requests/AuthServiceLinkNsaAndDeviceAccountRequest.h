#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/identity/AuthServiceStatus.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class Request; }
namespace Bedrock::Http { class Response; }
namespace Bedrock::Http { struct Url; }
namespace Social { struct AuthToken; }
// clang-format on

namespace Social {

class AuthServiceLinkNsaAndDeviceAccountRequest {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Http::Request buildRequest(
        ::Social::AuthToken const&,
        ::Bedrock::Http::Url const&,
        std::string const&,
        ::Social::AuthToken const&
    );

    MCNAPI static ::Social::AuthServiceStatus processResponse(::Bedrock::Http::Response const&);
    // NOLINTEND
};

} // namespace Social
