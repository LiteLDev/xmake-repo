#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class Request; }
namespace Bedrock::Http { class Response; }
// clang-format on

namespace Bedrock::Http {

class DispatcherInterface : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~DispatcherInterface() = default;
#else // @header-generator platform
    virtual ~DispatcherInterface() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Threading::Async<Bedrock::Http::Response> send(::Bedrock::Http::Request&&) = 0;
#else // @header-generator platform
    virtual ::Bedrock::Threading::Async<::Bedrock::Http::Response> send(::Bedrock::Http::Request&& request) = 0;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock::Http
