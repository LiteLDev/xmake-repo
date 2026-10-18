#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/http/FileRequestBody.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace MSGraph::Models {

#if defined(LL_PLAT_A) // @header-generator platform
struct GraphUploadBody : public ::Bedrock::Http::FileRequestBody {};
#else // @header-generator platform
struct GraphUploadBody {};
#endif // @header-generator platform

} // namespace MSGraph::Models
