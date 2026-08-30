#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/actor/Mob.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
class ActorDefinitionGroup;
class ActorHurtResult;
class EntityContext;
struct ActorDefinitionIdentifier;
struct HurtEffectsSettings;
// clang-format on

class IronGolem : public ::Mob {
public:
    // IronGolem inner types define
    enum CrackedAmount : uint {
        HIGH = 0,
        MED  = 1,
        LOW  = 2,
        NONE = 3,
    };

public:
    // prevent constructor by default
    IronGolem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IronGolem();

    virtual float getShadowRadius() const;

    virtual void handleEntityEvent(::ActorEvent, int);

    virtual void die(::ActorDamageSource const&);

    virtual void hurtEffects(::ActorDamageSource const&, float, ::HurtEffectsSettings const&);

    virtual ::ActorHurtResult doHurtTarget(::Actor*, ::SharedTypes::Legacy::ActorDamageCause const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI IronGolem(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);
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

    MCNAPI void $handleEntityEvent(::ActorEvent, int);

    MCNAPI void $die(::ActorDamageSource const&);

    MCNAPI void $hurtEffects(::ActorDamageSource const&, float, ::HurtEffectsSettings const&);

    MCNAPI ::ActorHurtResult $doHurtTarget(::Actor*, ::SharedTypes::Legacy::ActorDamageCause const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
