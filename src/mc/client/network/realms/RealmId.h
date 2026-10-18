#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/util/NewType.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace Realms {

#if defined(LL_PLAT_A) // @header-generator platform
struct RealmId : public ::NewType<long> {};
#else // @header-generator platform
struct RealmId {};
#endif // @header-generator platform

} // namespace Realms
