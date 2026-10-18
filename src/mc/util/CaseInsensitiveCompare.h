#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Util {

#if defined(LL_PLAT_A) // @header-generator platform
struct CaseInsensitiveCompare {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator()(std::string_view, std::string_view) const;
    // NOLINTEND
};
#else // @header-generator platform
struct CaseInsensitiveCompare {};
#endif // @header-generator platform

} // namespace Util
