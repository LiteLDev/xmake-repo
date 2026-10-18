#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/NewType.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct LoadingScreenId : public ::NewType<std::optional<uint>> {};
#else // @header-generator platform
struct LoadingScreenId : public ::NewType<::std::optional<uint>> {};
#endif // @header-generator platform
