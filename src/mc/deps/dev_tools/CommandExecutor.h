#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace Bedrock::DevTools {

#if defined(LL_PLAT_A) // @header-generator platform
class CommandExecutor : public ::Bedrock::EnableNonOwnerReferences {};
#else // @header-generator platform
class CommandExecutor {};
#endif // @header-generator platform

} // namespace Bedrock::DevTools
