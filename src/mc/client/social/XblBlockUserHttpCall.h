#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/social/XblHttpRequestHandler.h"
#include "mc/deps/core/threading/Async.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class Request; }
namespace Bedrock::Http { class Response; }
namespace Json { class Value; }
namespace Social { struct AuthToken; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
class XblBlockUserHttpCall : public ::Social::XblHttpRequestHandler<Social::XblBlockUserHttpCall> {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Http::Request _buildRequest(::Json::Value const&, std::string const&, std::string const&);

    MCNAPI static std::string buildUrl(std::string const&, std::string const&);

    MCNAPI static ::Bedrock::Threading::Async<Bedrock::Http::Response>
    makeRequest(std::string const&, ::Social::AuthToken const&, std::string const&, std::string const&);

    MCNAPI static bool processResponse(::Bedrock::Http::Response const&);
    // NOLINTEND
};
#else // @header-generator platform
class XblBlockUserHttpCall {};
#endif // @header-generator platform

} // namespace Social
