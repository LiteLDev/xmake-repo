#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/platform/NonCopyable.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace Bedrock::Detail {

#if defined(LL_PLAT_A) // @header-generator platform
class NonCopyableField : public ::Bedrock::NonCopyable {};
#else // @header-generator platform
class NonCopyableField {};
#endif // @header-generator platform

} // namespace Bedrock::Detail
