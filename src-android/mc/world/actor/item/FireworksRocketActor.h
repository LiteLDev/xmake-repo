#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/actor/projectile/PredictableProjectile.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
class Level;
class Random;
class SynchedActorDataEntityWrapper;
class Vec3;
struct ActorDefinitionIdentifier;
struct ActorUniqueID;
// clang-format on

class FireworksRocketActor : public ::PredictableProjectile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>  mLife;
    ::ll::TypedStorage<4, 4, int>  mLifeTime;
    ::ll::TypedStorage<1, 1, bool> mDispensed;
    // NOLINTEND

public:
    // prevent constructor by default
    FireworksRocketActor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FireworksRocketActor();

    virtual void lerpMotion(::Vec3 const&);

    virtual float getShadowRadius() const;

    virtual void handleEntityEvent(::ActorEvent, int);

    virtual void onSynchedDataUpdate(int);

    virtual void readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);

    virtual void addAdditionalSaveData(::CompoundTag&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FireworksRocketActor(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);

    MCNAPI int getLifeTime() const;

    MCNAPI void init(::Level&, ::Vec3 const&, ::CompoundTag const&, ::Vec3 const&, ::ActorUniqueID, bool);

    MCNAPI bool isAttachedToEntity() const;

    MCNAPI void postNormalTick();

    MCNAPI void setDispensed(bool);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void initData(::SynchedActorDataEntityWrapper&, ::CompoundTag const&, ::Vec3 const&, ::ActorUniqueID);
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
    MCNAPI void $lerpMotion(::Vec3 const&);

    MCNAPI float $getShadowRadius() const;

    MCNAPI void $handleEntityEvent(::ActorEvent, int);

    MCNAPI void $onSynchedDataUpdate(int);

    MCNAPI void $readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI void $addAdditionalSaveData(::CompoundTag&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
