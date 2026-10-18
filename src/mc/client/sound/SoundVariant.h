#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/util/NewType.h"

struct SoundVariant : public ::NewType<std::optional<ulong>> {};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/util/NewType.h"

struct SoundVariant : public ::NewType<::std::optional<uint64>> {};
#else // @header-generator platform
struct SoundVariant {};
#endif // @header-generator platform
#endif // @header-generator platform
