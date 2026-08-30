#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/animal/Fish.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
class ActorDefinitionGroup;
class ActorHurtResult;
class EntityContext;
struct ActorDefinitionIdentifier;
struct HurtParameters;
// clang-format on

class Pufferfish : public ::Fish {
public:
    // prevent constructor by default
    Pufferfish();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Pufferfish();

    virtual void normalTick();

    virtual bool startRiding(::Actor&, bool);

    virtual ::ActorHurtResult _hurt(::ActorDamageSource const&, float, ::HurtParameters const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Pufferfish(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);
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

    MCNAPI bool $startRiding(::Actor&, bool);

    MCNAPI ::ActorHurtResult $_hurt(::ActorDamageSource const&, float, ::HurtParameters const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
