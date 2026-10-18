#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/NewType.h"

namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
struct PsnId : public ::NewType<std::string> {};
#else // @header-generator platform
struct PsnId : public ::NewType<::std::string> {};
#endif // @header-generator platform

} // namespace Social
