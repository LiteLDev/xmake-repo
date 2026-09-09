#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/actor/monster/HumanoidMonster.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class ActorDefinitionGroup;
class EntityContext;
class Vec3;
struct ActorDefinitionIdentifier;
// clang-format on

class Witch : public ::HumanoidMonster {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mUsingTime;
    // NOLINTEND

public:
    // prevent constructor by default
    Witch();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Witch();

    virtual ::Vec3 getFiringPos() const;

    virtual void handleEntityEvent(::ActorEvent, int);

    virtual float getDamageAfterEnchantReduction(::ActorDamageSource const&, float) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Witch(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);

    MCNAPI void preAiStep();
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
    MCNAPI ::Vec3 $getFiringPos() const;

    MCNAPI void $handleEntityEvent(::ActorEvent, int);

    MCNAPI float $getDamageAfterEnchantReduction(::ActorDamageSource const&, float) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
