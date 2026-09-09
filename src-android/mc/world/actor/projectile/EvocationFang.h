#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/ActorEvent.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
class EntityContext;
class Mob;
struct ActorDefinitionIdentifier;
struct ActorUniqueID;
// clang-format on

class EvocationFang : public ::Actor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mClientSideAttackStarted;
    // NOLINTEND

public:
    // prevent constructor by default
    EvocationFang();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EvocationFang();

    virtual void normalTick();

    virtual float getShadowRadius() const;

    virtual void handleEntityEvent(::ActorEvent, int);

    virtual ::ActorUniqueID getSourceUniqueID() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EvocationFang(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $normalTick();

    MCNAPI float $getShadowRadius() const;

    MCNAPI void $handleEntityEvent(::ActorEvent, int);

    MCNAPI ::ActorUniqueID $getSourceUniqueID() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
