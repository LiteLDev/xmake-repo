#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/projectile/Fireball.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class ActorDefinitionGroup;
class ActorHurtResult;
class Block;
class EntityContext;
struct ActorDefinitionIdentifier;
struct HurtParameters;
struct VariantParameterList;
// clang-format on

class WitherSkull : public ::Fireball {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mLifetime;
    // NOLINTEND

public:
    // prevent constructor by default
    WitherSkull();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WitherSkull();

    virtual void initializeComponents(::ActorInitializationMethod, ::VariantParameterList const&);

    virtual bool isOnFire() const;

    virtual bool canDestroyBlock(::Block const&) const;

    virtual ::ActorHurtResult _hurt(::ActorDamageSource const&, float, ::HurtParameters const&);

    virtual float getInertia();

    virtual bool shouldBurn();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WitherSkull(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);
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
    MCNAPI void $initializeComponents(::ActorInitializationMethod, ::VariantParameterList const&);

    MCNAPI bool $isOnFire() const;

    MCNAPI bool $canDestroyBlock(::Block const&) const;

    MCNAPI ::ActorHurtResult $_hurt(::ActorDamageSource const&, float, ::HurtParameters const&);

    MCNAPI float $getInertia();

    MCNAPI bool $shouldBurn();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
