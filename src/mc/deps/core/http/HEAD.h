#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Http::MethodType {

#if defined(LL_PLAT_A) // @header-generator platform
struct HEAD {};
#else // @header-generator platform
struct HEAD {
public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string const& name();
    // NOLINTEND
};
#endif // @header-generator platform

} // namespace Bedrock::Http::MethodType
