#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/animal/Animal.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class ActorDefinitionGroup;
class BlockPos;
class EntityContext;
struct ActorDefinitionIdentifier;
// clang-format on

class Turtle : public ::Animal {
public:
    // prevent constructor by default
    Turtle();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Turtle();

    virtual float getShadowRadius() const;

    virtual void die(::ActorDamageSource const&);

    virtual float _getWalkTargetValue(::BlockPos const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Turtle(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);
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
    MCNAPI float $getShadowRadius() const;

    MCNAPI void $die(::ActorDamageSource const&);

    MCNAPI float $_getWalkTargetValue(::BlockPos const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
