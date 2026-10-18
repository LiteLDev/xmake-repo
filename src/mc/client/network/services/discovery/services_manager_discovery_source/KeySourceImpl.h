#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/certificates/IMinecraftServiceKeySource.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace ServicesManagerDiscoverySource {

#if defined(LL_PLAT_A) // @header-generator platform
class KeySourceImpl : public ::IMinecraftServiceKeySource {};
#else // @header-generator platform
class KeySourceImpl {};
#endif // @header-generator platform

} // namespace ServicesManagerDiscoverySource
