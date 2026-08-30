#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/Status.h"

namespace Bedrock::Services {

struct AzureGetTokenHttpResponse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::Http::Status> status;
    ::ll::TypedStorage<8, 24, std::string>             token;
    // NOLINTEND
};

} // namespace Bedrock::Services
