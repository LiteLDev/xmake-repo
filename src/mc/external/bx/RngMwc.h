#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bx {

#if defined(LL_PLAT_C) // @header-generator platform
class RngMwc {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> m_z;
    ::ll::TypedStorage<4, 4, uint> m_w;
    // NOLINTEND
};
#else // @header-generator platform
class RngMwc {};
#endif // @header-generator platform

} // namespace bx
#endif // @header-generator platform
