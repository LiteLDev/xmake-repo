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
#if defined(LL_PLAT_A) // @header-generator platform
class Actor;
#else // @header-generator platform
#endif // @header-generator platform
class Player;
#if defined(LL_PLAT_A) // @header-generator platform
namespace mce { class Color; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class ServerEntityWaypoint : public ::ServerWaypoint {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ActorUniqueID const>           mActorID;
    ::ll::TypedStorage<1, 24, ::WeakEntityRef const>          mEntityRef;
    ::ll::TypedStorage<4, 20, std::optional<WorldPosition>>   mClientWorldPosition;
    ::ll::TypedStorage<1, 1, ::EntityWaypointVisibilityRules> mEntityVisibilityRules;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ActorUniqueID const>             mActorID;
    ::ll::TypedStorage<8, 24, ::WeakEntityRef const>            mEntityRef;
    ::ll::TypedStorage<4, 20, ::std::optional<::WorldPosition>> mClientWorldPosition;
    ::ll::TypedStorage<1, 1, ::EntityWaypointVisibilityRules>   mEntityVisibilityRules;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ServerEntityWaypoint();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ServerEntityWaypoint();
#else // @header-generator platform
    virtual ::std::optional<::ActorUniqueID> tryGetActorID() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<ActorUniqueID> tryGetActorID() const;
#else // @header-generator platform
    virtual bool calculateIsVisible(::Player const& viewingPlayer) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void update(::Player const&);
#else // @header-generator platform
    virtual void update(::Player const& viewingPlayer) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isValid() const;

    virtual bool calculateIsVisible(::Player const&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual bool isValid() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<ActorUniqueID> $tryGetActorID() const;
#else // @header-generator platform
    MCAPI ::std::optional<::ActorUniqueID> $tryGetActorID() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $update(::Player const&);
#else // @header-generator platform
    MCAPI bool $calculateIsVisible(::Player const& viewingPlayer) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isValid() const;
#else // @header-generator platform
    MCAPI void $update(::Player const& viewingPlayer);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $calculateIsVisible(::Player const&) const;
#else // @header-generator platform
    MCAPI bool $isValid() const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
