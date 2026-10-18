#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace brstd {

struct once_flag {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, std::atomic<uint>> mState;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnkc91192;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    once_flag& operator=(once_flag const&);
    once_flag(once_flag const&);
    once_flag();
#endif // @header-generator platform
};

} // namespace brstd
