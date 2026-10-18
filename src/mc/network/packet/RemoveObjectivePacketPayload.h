#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RemoveObjectivePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mObjectiveName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string> mObjectiveName;
#endif // @header-generator platform
    // NOLINTEND
};
