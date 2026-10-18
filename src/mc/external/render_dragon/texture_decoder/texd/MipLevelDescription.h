#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace texd {

#if defined(LL_PLAT_A) // @header-generator platform
struct MipLevelDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uchar const*> data;
    ::ll::TypedStorage<4, 4, uint>         size;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct MipLevelDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uchar const*> data;
    ::ll::TypedStorage<4, 4, uint>         size;
    // NOLINTEND
};
#else // @header-generator platform
struct MipLevelDescription {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace texd
