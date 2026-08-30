#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/projectile/Fireball.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
class EntityContext;
struct ActorDefinitionIdentifier;
// clang-format on

class LargeFireball : public ::Fireball {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mExplosionPower;
    // NOLINTEND

public:
    // prevent constructor by default
    LargeFireball();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LargeFireball();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LargeFireball(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);
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
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
