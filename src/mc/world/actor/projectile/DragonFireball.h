#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/comprehensive/ParticleType.h"
#include "mc/world/actor/projectile/Fireball.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
#if defined(LL_PLAT_A) // @header-generator platform
class ActorDefinitionGroup;
#else // @header-generator platform
#endif // @header-generator platform
class ActorHurtResult;
#if defined(LL_PLAT_A) // @header-generator platform
class EntityContext;
struct ActorDefinitionIdentifier;
#else // @header-generator platform
#endif // @header-generator platform
struct HurtParameters;
// clang-format on

class DragonFireball : public ::Fireball {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    DragonFireball();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~DragonFireball();
#else // @header-generator platform
    virtual ::ParticleType getTrailParticle() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ActorHurtResult _hurt(::ActorDamageSource const&, float, ::HurtParameters const&);
#else // @header-generator platform
    virtual bool shouldBurn() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ParticleType getTrailParticle();

    virtual bool shouldBurn();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DragonFireball(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static float& SPLASH_RANGE();
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
#else // @header-generator platform
    virtual ::ActorHurtResult _hurt(::ActorDamageSource const&, float, ::HurtParameters const&) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorHurtResult $_hurt(::ActorDamageSource const&, float, ::HurtParameters const&);
#else // @header-generator platform
    MCAPI ::ParticleType $getTrailParticle();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ParticleType $getTrailParticle();
#else // @header-generator platform
    MCFOLD bool $shouldBurn();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $shouldBurn();
#else // @header-generator platform
    MCFOLD ::ActorHurtResult $_hurt(::ActorDamageSource const&, float, ::HurtParameters const&);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};
