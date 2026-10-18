#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bx {

#if defined(LL_PLAT_C) // @header-generator platform
class RingBufferControl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint const> m_size;
    ::ll::TypedStorage<4, 4, uint>       m_current;
    ::ll::TypedStorage<4, 4, uint>       m_write;
    ::ll::TypedStorage<4, 4, uint>       m_read;
    // NOLINTEND
};
#else // @header-generator platform
class RingBufferControl {};
#endif // @header-generator platform

} // namespace bx
#endif // @header-generator platform
