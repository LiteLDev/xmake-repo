#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TickingSystemId {
public:
    // TickingSystemId inner types define
    using underlying_type = uint;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> value;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    TickingSystemId();
#else // @header-generator platform
#endif // @header-generator platform
};
