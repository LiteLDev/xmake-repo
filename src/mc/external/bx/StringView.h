#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bx {

#if defined(LL_PLAT_C) // @header-generator platform
class StringView {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, char const*> m_ptr;
    ::ll::TypedStorage<4, 4, int>         m_len;
    // NOLINTEND
};
#else // @header-generator platform
class StringView {};
#endif // @header-generator platform

} // namespace bx
#endif // @header-generator platform
