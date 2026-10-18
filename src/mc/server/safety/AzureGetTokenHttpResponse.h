#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/http/Status.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace Bedrock::Services {

struct AzureGetTokenHttpResponse {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, ::Bedrock::Http::Status> status;
    ::ll::TypedStorage<8, 24, std::string>             token;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnkfb5979;
    ::ll::UntypedStorage<8, 32> mUnk36300f;
    // NOLINTEND

public:
    // prevent constructor by default
    AzureGetTokenHttpResponse& operator=(AzureGetTokenHttpResponse const&);
    AzureGetTokenHttpResponse(AzureGetTokenHttpResponse const&);
    AzureGetTokenHttpResponse();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI ~AzureGetTokenHttpResponse();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock::Services
