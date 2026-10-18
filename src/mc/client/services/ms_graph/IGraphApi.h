#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace MSGraph {

#if defined(LL_PLAT_A) // @header-generator platform
struct IGraphApi : public ::Bedrock::EnableNonOwnerReferences {};
#else // @header-generator platform
struct IGraphApi {};
#endif // @header-generator platform

} // namespace MSGraph
