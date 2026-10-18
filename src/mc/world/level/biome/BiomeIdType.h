#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/NewType.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct BiomeIdType : public ::NewType<ushort> {
public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ushort const& INVALID_ID();
    // NOLINTEND
};
#else // @header-generator platform
struct BiomeIdType : public ::NewType<ushort> {};
#endif // @header-generator platform
