#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PartyDestinationCookieResponsePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mCookie;
    ::ll::TypedStorage<1, 1, bool>         mAccepted;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string> mCookie;
    ::ll::TypedStorage<1, 1, bool>           mAccepted;
#endif // @header-generator platform
    // NOLINTEND
};
