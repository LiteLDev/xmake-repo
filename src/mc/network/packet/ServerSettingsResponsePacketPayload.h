#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ServerSettingsResponsePacketPayload {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>         mFormId;
    ::ll::TypedStorage<8, 24, std::string> mFormJSON;
    // NOLINTEND
#else // @header-generator platform
    uint          mFormId;
    ::std::string mFormJSON;
#endif // @header-generator platform
};
