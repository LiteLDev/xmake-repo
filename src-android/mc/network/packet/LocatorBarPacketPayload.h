#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/LocatorBarWaypointPayload.h"

struct LocatorBarPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND
};
