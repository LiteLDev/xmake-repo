#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/NewType.h"

// auto generated forward declare list
// clang-format off
struct RawGameServerToken;
// clang-format on

struct LocalGameServerToken : public ::NewType<std::string> {
public:
    // prevent constructor by default
    LocalGameServerToken();
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
