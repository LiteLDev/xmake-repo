#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/comprehensive/ParticleType.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/actor/projectile/PredictableProjectile.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
class IConstBlockSource;
class Vec3;
struct ActorDefinitionIdentifier;
// clang-format on

class Fireball : public ::PredictableProjectile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> ownerId;
    ::ll::TypedStorage<1, 1, bool>            mInGround;
    // NOLINTEND

public:
    // prevent constructor by default
    Fireball();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Fireball();

    virtual void normalTick();

    virtual float getBrightness(float, ::IConstBlockSource const&) const;

    virtual ::ActorUniqueID getSourceUniqueID() const;

    virtual void readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);

    virtual void addAdditionalSaveData(::CompoundTag&) const;

    virtual float getInertia();

    virtual ::ParticleType getTrailParticle();

    virtual bool shouldBurn();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Fireball(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);

    MCNAPI void _setPower(::Vec3 const&);
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

    MCNAPI float $getBrightness(float, ::IConstBlockSource const&) const;

    MCNAPI ::ActorUniqueID $getSourceUniqueID() const;

    MCNAPI void $readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI void $addAdditionalSaveData(::CompoundTag&) const;

    MCNAPI float $getInertia();

    MCNAPI ::ParticleType $getTrailParticle();

    MCNAPI bool $shouldBurn();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
