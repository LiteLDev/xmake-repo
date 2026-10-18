#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/LocatorBarWaypointPayload.h"

struct LocatorBarPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<LocatorBarWaypointPayload>> mWaypoints;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~LocatorBarPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::LocatorBarWaypointPayload>> mWaypoints;
#endif // @header-generator platform
    // NOLINTEND
};
