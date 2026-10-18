#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/safety/EventCode.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace Bedrock::Safety {

#if defined(LL_PLAT_A) // @header-generator platform
class BannedSkinVerificationCode : public ::Bedrock::Safety::EventCode {};
#else // @header-generator platform
class BannedSkinVerificationCode {};
#endif // @header-generator platform

} // namespace Bedrock::Safety
