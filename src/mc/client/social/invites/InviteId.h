#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/util/NewType.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace Invites {

#if defined(LL_PLAT_A) // @header-generator platform
struct InviteId : public ::NewType<std::string> {};
#else // @header-generator platform
struct InviteId {};
#endif // @header-generator platform

} // namespace Invites
