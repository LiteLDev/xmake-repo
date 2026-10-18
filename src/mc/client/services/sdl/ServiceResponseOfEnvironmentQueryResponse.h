#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/network/services/EnvironmentQueryResponse.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace SDL {

#if defined(LL_PLAT_A) // @header-generator platform
struct ServiceResponseOfEnvironmentQueryResponse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::Bedrock::Services::EnvironmentQueryResponse> mResult;
    ::ll::TypedStorage<8, 24, std::string>                                   mContinuationToken;
    // NOLINTEND
};
#else // @header-generator platform
struct ServiceResponseOfEnvironmentQueryResponse {};
#endif // @header-generator platform

} // namespace SDL
