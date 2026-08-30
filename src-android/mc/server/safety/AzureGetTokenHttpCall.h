#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/server/safety/ClientAssertion.h"

// auto generated forward declare list
// clang-format off
class TaskGroup;
namespace Bedrock::Http { class Request; }
namespace Bedrock::Http { class Response; }
namespace Bedrock::Services { struct AzureGetTokenHttpResponse; }
namespace Bedrock::Services { struct AzureIdentityConfig; }
// clang-format on

namespace Bedrock::Services {

class AzureGetTokenHttpCall {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                          mTenantId;
    ::ll::TypedStorage<8, 24, std::string>                          mClientId;
    ::ll::TypedStorage<8, 24, std::string>                          mScope;
    ::ll::TypedStorage<8, 24, ::Bedrock::Services::ClientAssertion> mClientAssertionAuth;
    // NOLINTEND

public:
    // prevent constructor by default
    AzureGetTokenHttpCall();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AzureGetTokenHttpCall() = default;
    // NOLINTEND
};

} // namespace Bedrock::Services
