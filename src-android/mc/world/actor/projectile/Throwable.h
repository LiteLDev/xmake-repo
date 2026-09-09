#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/projectile/PredictableProjectile.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDefinitionGroup;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
class Mob;
class Player;
class Vec3;
struct ActorDefinitionIdentifier;
struct VariantParameterList;
// clang-format on

class Throwable : public ::PredictableProjectile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>            mInGround;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mOwnerId;
    ::ll::TypedStorage<4, 4, int>             mShakeTime;
    ::ll::TypedStorage<4, 4, int>             mLife;
    // NOLINTEND

public:
    // prevent constructor by default
    Throwable();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Throwable();

    virtual void initializeComponents(::ActorInitializationMethod, ::VariantParameterList const&);

    virtual void lerpMotion(::Vec3 const&);

    virtual ::ActorUniqueID getSourceUniqueID() const;

    virtual void readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);

    virtual void addAdditionalSaveData(::CompoundTag&) const;

    virtual float getThrowPower();

    virtual float getThrowUpAngleOffset();

    virtual float getGravity();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Throwable(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);

    MCNAPI void shoot(::Mob&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Actor* spawnPlayerProjectile(::ActorDefinitionIdentifier const&, ::Player&);
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

    MCNAPI void $lerpMotion(::Vec3 const&);

    MCNAPI ::ActorUniqueID $getSourceUniqueID() const;

    MCNAPI void $readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI void $addAdditionalSaveData(::CompoundTag&) const;

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
