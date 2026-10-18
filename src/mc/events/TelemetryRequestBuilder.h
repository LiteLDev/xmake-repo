#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/RequestBuilder.h"

namespace Bedrock::Http {

#if defined(LL_PLAT_A) // @header-generator platform
class TelemetryRequestBuilder : public ::Bedrock::Http::RequestBuilder {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TelemetryRequestBuilder();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
#else // @header-generator platform
class TelemetryRequestBuilder : public ::Bedrock::Http::RequestBuilder {};
#endif // @header-generator platform

} // namespace Bedrock::Http
