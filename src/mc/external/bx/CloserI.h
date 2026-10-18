#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bx {

#if defined(LL_PLAT_C) // @header-generator platform
struct CloserI {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CloserI() = 0;

    virtual void close() = 0;
    // NOLINTEND
};
#else // @header-generator platform
struct CloserI {};
#endif // @header-generator platform

} // namespace bx
#endif // @header-generator platform
