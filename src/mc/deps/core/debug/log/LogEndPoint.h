#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class LogEndPoint {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LogEndPoint() = default;

    virtual void log(char const*) = 0;

    virtual void flush() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setEnabled(bool) = 0;
#else // @header-generator platform
    virtual void setEnabled(bool newState) = 0;
#endif // @header-generator platform

    virtual bool isEnabled() const = 0;
    // NOLINTEND
};

} // namespace Bedrock
