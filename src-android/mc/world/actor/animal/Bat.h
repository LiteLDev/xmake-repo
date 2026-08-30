#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/actor/Mob.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class ActorDefinitionGroup;
class ActorHurtResult;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
struct ActorDefinitionIdentifier;
struct HurtParameters;
// clang-format on

class Bat : public ::Mob {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>    mWasResting;
    ::ll::TypedStorage<4, 12, ::Vec3> mTargetPosition;
    // NOLINTEND

public:
    // prevent constructor by default
    Bat();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Bat();

    virtual ::ActorHurtResult _hurt(::ActorDamageSource const&, float, ::HurtParameters const&);

    virtual void readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);

    virtual void addAdditionalSaveData(::CompoundTag&) const;

    virtual void pushActors();

    virtual void newServerAiStep();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Bat(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);

    MCNAPI void postNormalTick();
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
    MCNAPI ::ActorHurtResult $_hurt(::ActorDamageSource const&, float, ::HurtParameters const&);

    MCNAPI void $readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI void $addAdditionalSaveData(::CompoundTag&) const;

    MCNAPI void $pushActors();

    MCNAPI void $newServerAiStep();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
