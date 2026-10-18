#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class Request; }
namespace Bedrock::Http { class Response; }
namespace Bedrock::Http { struct Url; }
namespace Social { struct AuthServiceSession; }
namespace Social { struct AuthToken; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
class AuthServiceStartSessionSecondaryRequest {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Http::Request buildRequest(
        ::Social::AuthToken const&,
        ::Bedrock::Http::Url const&,
        std::string const&,
        std::string const&,
        std::optional<std::chrono::duration<long, std::ratio<60, 1>>>
    );

    MCNAPI static ::Social::AuthServiceSession processResponse(::Bedrock::Http::Response const&);
    // NOLINTEND
};
#else // @header-generator platform
class AuthServiceStartSessionSecondaryRequest {};
#endif // @header-generator platform

} // namespace Social
