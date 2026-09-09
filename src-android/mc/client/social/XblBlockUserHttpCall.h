#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

namespace Social {

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

} // namespace Social
