#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bx {

#if defined(LL_PLAT_C) // @header-generator platform
struct MemoryBlockI {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void* more(uint _size) = 0;

    virtual uint getSize() = 0;
    // NOLINTEND
};
#else // @header-generator platform
struct MemoryBlockI {};
#endif // @header-generator platform

} // namespace bx
#endif // @header-generator platform
