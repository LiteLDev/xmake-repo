#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/world/ClientWaypoint.h"
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/legacy/ActorUniqueID.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Level;
class Player;
// clang-format on

class ClientEntityWaypoint : public ::ClientWaypoint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID const> mActorID;
    ::ll::TypedStorage<1, 24, ::WeakEntityRef>      mEntityRef;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientEntityWaypoint();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientEntityWaypoint();

    virtual std::optional<ActorUniqueID> tryGetActorID() const;

    virtual void update(::Player const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ClientEntityWaypoint(::ActorUniqueID const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ActorUniqueID const&);
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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class ClientEntityWaypoint {};
#endif // @header-generator platform
