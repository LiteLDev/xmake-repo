#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
#else // @header-generator platform
// auto generated inclusion list
#include "mc/server/initialization/Dependency.h"

#endif // @header-generator platform
namespace DedicatedServerInitialization {

#if defined(LL_PLAT_C) // @header-generator platform
struct NetworkSystemDep {};
#else // @header-generator platform
struct NetworkSystemDep : public ::DedicatedServerInitialization::Dependency {};
#endif // @header-generator platform

} // namespace DedicatedServerInitialization
#endif // @header-generator platform
