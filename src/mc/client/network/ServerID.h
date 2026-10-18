#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/util/NewType.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace Network {

#if defined(LL_PLAT_A) // @header-generator platform
struct ServerID : public ::NewType<std::string> {};
#else // @header-generator platform
struct ServerID {};
#endif // @header-generator platform

} // namespace Network
