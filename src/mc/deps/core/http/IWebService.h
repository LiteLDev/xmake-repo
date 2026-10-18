#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class Request; }
namespace Bedrock::Http { class Response; }
namespace Bedrock::Http { struct WebServiceError; }
namespace Bedrock::Threading { struct DelayableTaskGroup; }
// clang-format on

#endif // @header-generator platform
namespace Bedrock::Http {

#if defined(LL_PLAT_A) // @header-generator platform
class IWebService {};
#else // @header-generator platform
class IWebService {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Bedrock::Threading::Async<::Bedrock::Http::Response> sendRawRequest(::Bedrock::Http::Request request) = 0;

    virtual ::Bedrock::Threading::DelayableTaskGroup& getTaskGroup() = 0;
    // NOLINTEND
};
#endif // @header-generator platform

} // namespace Bedrock::Http
