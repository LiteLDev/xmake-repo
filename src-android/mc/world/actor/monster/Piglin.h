#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/monster/HumanoidMonster.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
class ActorInteraction;
class EntityContext;
class InteractionResult;
class Player;
class Vec3;
struct ActorDefinitionIdentifier;
// clang-format on

class Piglin : public ::HumanoidMonster {
public:
    // prevent constructor by default
    Piglin();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Piglin();

    virtual ::InteractionResult getInteraction(::Player&, ::ActorInteraction&, ::Vec3 const&);

    virtual bool isDarkEnoughToSpawn() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Piglin(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);
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
    MCNAPI ::InteractionResult $getInteraction(::Player&, ::ActorInteraction&, ::Vec3 const&);

    MCNAPI bool $isDarkEnoughToSpawn() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
