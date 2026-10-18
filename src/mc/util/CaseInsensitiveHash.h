#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Util {

struct CaseInsensitiveHash {
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong operator()(std::string_view) const;
#else // @header-generator platform
    MCNAPI uint64 operator()(::std::string_view s) const;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Util
