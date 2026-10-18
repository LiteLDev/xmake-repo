#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/PartyDestinationCookieIntent.h"

struct SendPartyDestinationCookiePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                   mCookie;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                 mCookie;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, ::PartyDestinationCookieIntent> mIntent;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                   mDestinationName;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ulong const& MAX_DESTINATION_NAME_SIZE();
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                 mDestinationName;
#endif // @header-generator platform
    // NOLINTEND
};
