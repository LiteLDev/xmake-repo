#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class Request; }
namespace Bedrock::Http { class Response; }
namespace Bedrock::Http { struct Url; }
namespace Social { struct AuthServiceSession; }
namespace Social { struct AuthServiceStartSessionRequestData; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
class AuthServiceStartSessionRequest {};
#endif // @header-generator platform

} // namespace Social
