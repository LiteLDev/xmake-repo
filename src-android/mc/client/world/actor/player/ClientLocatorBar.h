#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/world/ClientWaypointGroup.h"
#include "mc/world/WaypointGroup.h"

// auto generated forward declare list
// clang-format off
class ClientWaypoint;
class LocatorBarPacket;
class Player;
// clang-format on

class ClientLocatorBar {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::ClientWaypointGroup> mWaypoints;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::vector<gsl::not_null<ClientWaypoint*>> getClientWaypoints();

    MCNAPI ulong getWaypointCount() const;

    MCNAPI void handleServerPacket(::LocatorBarPacket const&);

    MCNAPI void update(::Player const&);

    MCNAPI ~ClientLocatorBar();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
