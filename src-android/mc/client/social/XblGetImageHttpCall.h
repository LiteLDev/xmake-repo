#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/social/XblHttpRequestHandler.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class Request; }
namespace Bedrock::Http { class Response; }
// clang-format on

namespace Social {

class XblGetImageHttpCall : public ::Social::XblHttpRequestHandler<Social::XblGetImageHttpCall> {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Http::Request _buildRequest(std::string const&, std::string const&);

    MCNAPI static std::vector<uchar> processResponse(::Bedrock::Http::Response const&);
    // NOLINTEND
};

} // namespace Social
