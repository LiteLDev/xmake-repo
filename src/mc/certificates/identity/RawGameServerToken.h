#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/NewType.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct RawGameServerToken : public ::NewType<std::string> {
public:
    // prevent constructor by default
    RawGameServerToken& operator=(RawGameServerToken const&);
};
#else // @header-generator platform
struct RawGameServerToken : public ::NewType<::std::string> {};
#endif // @header-generator platform
