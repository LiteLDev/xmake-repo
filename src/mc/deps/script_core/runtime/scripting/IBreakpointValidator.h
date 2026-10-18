#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class IBreakpointValidator {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IBreakpointValidator() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool validatePath(std::string_view const) = 0;
#else // @header-generator platform
    virtual bool validatePath(::std::string_view const) = 0;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Scripting
