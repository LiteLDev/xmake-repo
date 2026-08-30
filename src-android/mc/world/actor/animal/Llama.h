#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/animal/Animal.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class ActorDefinitionGroup;
class EntityContext;
struct ActorDefinitionIdentifier;
// clang-format on

class Llama : public ::Animal {
public:
    // prevent constructor by default
    Llama();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Llama();

    virtual void onFailedTame();

    virtual float causeFallDamageToActor(float, float, ::ActorDamageSource);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Llama(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);
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
    MCNAPI void $onFailedTame();

    MCNAPI float $causeFallDamageToActor(float, float, ::ActorDamageSource);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
