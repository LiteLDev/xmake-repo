#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bx {

#if defined(LL_PLAT_C) // @header-generator platform
struct ThreadInternal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, void*> m_handle;
    ::ll::TypedStorage<4, 4, ulong> m_threadId;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ulong threadFunc(void* _arg);
    // NOLINTEND
};
#else // @header-generator platform
struct ThreadInternal {};
#endif // @header-generator platform

} // namespace bx
#endif // @header-generator platform
