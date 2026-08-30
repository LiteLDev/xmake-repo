#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/actor/animal/Animal.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
class EntityContext;
struct ActorDefinitionIdentifier;
// clang-format on

class Cat : public ::Animal {
public:
    // prevent constructor by default
    Cat();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Cat();

    virtual void onTame();

    virtual ::SharedTypes::Legacy::LevelSoundEvent getAmbientSound() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Cat(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static float const& SNEAK_SPEED_MOD();

    MCNAPI static float const& SPRINT_SPEED_MOD();
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
    MCNAPI void $onTame();

    MCNAPI ::SharedTypes::Legacy::LevelSoundEvent $getAmbientSound() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
