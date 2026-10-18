#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/util/NewType.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
struct AuthToken : public ::NewType<std::string> {
public:
    // prevent constructor by default
    AuthToken& operator=(AuthToken const&);
};
#else // @header-generator platform
struct AuthToken {};
#endif // @header-generator platform

} // namespace Social
