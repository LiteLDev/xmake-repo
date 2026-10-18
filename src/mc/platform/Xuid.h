#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/NewType.h"

namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
struct Xuid : public ::NewType<std::string> {
public:
    // prevent constructor by default
    Xuid& operator=(Xuid const&);
    Xuid(Xuid const&);
    Xuid();
};
#else // @header-generator platform
struct Xuid : public ::NewType<::std::string> {};
#endif // @header-generator platform

} // namespace Social
