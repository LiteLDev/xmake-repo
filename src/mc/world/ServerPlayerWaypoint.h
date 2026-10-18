#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/PlayerWaypointVisibilityRules.h"
#include "mc/world/ServerEntityWaypoint.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/ServerWaypoint.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class EntityWaypointVisibilityRules;
#else // @header-generator platform
#endif // @header-generator platform
class Player;
#if defined(LL_PLAT_A) // @header-generator platform
class WeakEntityRef;
struct ActorUniqueID;
namespace mce { class Color; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class ServerPlayerWaypoint : public ::ServerEntityWaypoint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::PlayerWaypointVisibilityRules> mPlayerVisibilityRules;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    ServerPlayerWaypoint();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    virtual bool calculateIsVisible(::Player const& viewingPlayer) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $calculateIsVisible(::Player const&) const;
#else // @header-generator platform
    MCAPI bool $calculateIsVisible(::Player const& viewingPlayer) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
