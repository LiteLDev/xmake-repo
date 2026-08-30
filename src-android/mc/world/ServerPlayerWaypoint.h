#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/PlayerWaypointVisibilityRules.h"
#include "mc/world/ServerEntityWaypoint.h"
#include "mc/world/ServerWaypoint.h"

// auto generated forward declare list
// clang-format off
class EntityWaypointVisibilityRules;
class Player;
class WeakEntityRef;
struct ActorUniqueID;
namespace mce { class Color; }
// clang-format on

class ServerPlayerWaypoint : public ::ServerEntityWaypoint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::PlayerWaypointVisibilityRules> mPlayerVisibilityRules;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerPlayerWaypoint();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerPlayerWaypoint();

    virtual bool calculateIsVisible(::Player const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ServerPlayerWaypoint(
        ::WeakEntityRef const&,
        ::ActorUniqueID const&,
        ::PlayerWaypointVisibilityRules,
        ::EntityWaypointVisibilityRules,
        ::ServerWaypoint::TextureSelector const&,
        std::optional<mce::Color> const&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::WeakEntityRef const&,
        ::ActorUniqueID const&,
        ::PlayerWaypointVisibilityRules,
        ::EntityWaypointVisibilityRules,
        ::ServerWaypoint::TextureSelector const&,
        std::optional<mce::Color> const&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $calculateIsVisible(::Player const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
