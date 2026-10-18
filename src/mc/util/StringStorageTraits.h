#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Util::Detail {

#if defined(LL_PLAT_A) // @header-generator platform
class StringStorageTraits {
public:
    // StringStorageTraits inner types define
    using Storage = std::string;
};
#else // @header-generator platform
class StringStorageTraits {};
#endif // @header-generator platform

} // namespace Util::Detail
