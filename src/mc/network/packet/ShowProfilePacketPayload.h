#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ShowProfilePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mPlayerXUID;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string> mPlayerXUID;
#endif // @header-generator platform
    // NOLINTEND
};
