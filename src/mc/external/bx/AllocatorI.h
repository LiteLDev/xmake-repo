#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bx {

#if defined(LL_PLAT_C) // @header-generator platform
struct AllocatorI {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AllocatorI() = 0;

    virtual void* realloc(void* _ptr, uint64 _size, uint64 _align, char const* _file, uint _line) = 0;
    // NOLINTEND
};
#else // @header-generator platform
struct AllocatorI {};
#endif // @header-generator platform

} // namespace bx
#endif // @header-generator platform
