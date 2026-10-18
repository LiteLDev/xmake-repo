#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/WaypointGroup.h"

// auto generated forward declare list
// clang-format off
class ClientWaypoint;
class Player;
// clang-format on

class ClientWaypointGroup : public ::WaypointGroup {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mWaypoints;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientWaypointGroup();

    virtual bool has(::WaypointGroup::WaypointHandle const&) const;

    virtual bool remove(::WaypointGroup::WaypointHandle const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool add(::WaypointGroup::WaypointHandle const&, std::unique_ptr<ClientWaypoint>);

    MCNAPI ulong count() const;

    MCNAPI ::ClientWaypoint* get(::WaypointGroup::WaypointHandle const&);

    MCNAPI std::vector<gsl::not_null<ClientWaypoint*>> getClientWaypoints();

    MCNAPI void update(::Player const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $has(::WaypointGroup::WaypointHandle const&) const;

    MCNAPI bool $remove(::WaypointGroup::WaypointHandle const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class ClientWaypointGroup {};
#endif // @header-generator platform
