#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/NewType.h"

struct DimensionIdType : public ::NewType<ushort> {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // static variables
    // NOLINTBEGIN
    MCNAPI static ushort const& INVALID_ID();
    // NOLINTEND
#else // @header-generator platform
    using NewType<ushort>::NewType;
#endif // @header-generator platform
};
