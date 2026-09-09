#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/Waypoint.h"

class ClientWaypoint : public ::Waypoint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, std::optional<Vec3>> mLastShownPosition;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientWaypoint();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void clearLastShownPosition();

    MCNAPI std::optional<Vec3> const& getLastShownPosition() const;

    MCNAPI void setLastShownPosition(::Vec3 const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
