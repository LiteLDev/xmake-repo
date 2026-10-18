#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/NewType.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct BiomeHashType : public ::NewType<ulong> {};
#else // @header-generator platform
struct BiomeHashType : public ::NewType<uint64> {};
#endif // @header-generator platform
