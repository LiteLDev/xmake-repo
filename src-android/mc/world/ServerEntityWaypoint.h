#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/EntityWaypointVisibilityRules.h"
#include "mc/world/ServerWaypoint.h"
#include "mc/world/level/WorldPosition.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Player;
namespace mce { class Color; }
// clang-format on

class ServerEntityWaypoint : public ::ServerWaypoint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID const>           mActorID;
    ::ll::TypedStorage<1, 24, ::WeakEntityRef const>          mEntityRef;
    ::ll::TypedStorage<4, 20, std::optional<WorldPosition>>   mClientWorldPosition;
    ::ll::TypedStorage<1, 1, ::EntityWaypointVisibilityRules> mEntityVisibilityRules;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerEntityWaypoint();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerEntityWaypoint();

    virtual std::optional<ActorUniqueID> tryGetActorID() const;

    virtual void update(::Player const&);

    virtual bool isValid() const;

    virtual bool calculateIsVisible(::Player const&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::optional<ActorUniqueID> $tryGetActorID() const;

    MCNAPI void $update(::Player const&);

    MCNAPI bool $isValid() const;

    MCNAPI bool $calculateIsVisible(::Player const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
