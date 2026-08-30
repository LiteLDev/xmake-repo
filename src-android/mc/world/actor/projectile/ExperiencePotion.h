#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/projectile/Throwable.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
class EntityContext;
struct ActorDefinitionIdentifier;
// clang-format on

class ExperiencePotion : public ::Throwable {
public:
    // prevent constructor by default
    ExperiencePotion();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ExperiencePotion();

    virtual float getThrowPower();

    virtual float getThrowUpAngleOffset();

    virtual float getGravity();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ExperiencePotion(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);
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
    MCNAPI float $getThrowPower();

    MCNAPI float $getThrowUpAngleOffset();

    MCNAPI float $getGravity();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
