#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/Response.h"

namespace Bedrock::Http {

#if defined(LL_PLAT_A) // @header-generator platform
struct WebServiceError : public ::std::variant<std::error_code, Bedrock::Http::Response> {};
#else // @header-generator platform
struct WebServiceError : public ::std::variant<::std::error_code, ::Bedrock::Http::Response> {};
#endif // @header-generator platform

} // namespace Bedrock::Http
