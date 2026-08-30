#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/PartyDestinationCookieIntent.h"

struct SendPartyDestinationCookiePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                   mCookie;
    ::ll::TypedStorage<1, 1, ::PartyDestinationCookieIntent> mIntent;
    ::ll::TypedStorage<8, 24, std::string>                   mDestinationName;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ulong const& MAX_DESTINATION_NAME_SIZE();
    // NOLINTEND
};
