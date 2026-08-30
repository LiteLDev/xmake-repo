#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/actor/projectile/PredictableProjectile.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
class ActorDefinitionGroup;
class ActorHurtResult;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
class Vec3;
struct ActorDefinitionIdentifier;
struct HurtParameters;
struct VariantParameterList;
// clang-format on

class PrimedTnt : public ::PredictableProjectile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mOwnerID;
    ::ll::TypedStorage<4, 4, ::ActorType>     mOwnerEntityType;
    // NOLINTEND

public:
    // prevent constructor by default
    PrimedTnt();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PrimedTnt();

    virtual void reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);

    virtual void reloadHardcodedClient(::ActorInitializationMethod);

    virtual void initializeComponents(::ActorInitializationMethod, ::VariantParameterList const&);

    virtual ::ActorType getOwnerEntityType();

    virtual void teleportTo(::Vec3 const&, bool, int, int, bool);

    virtual void normalTick();

    virtual float getShadowRadius() const;

    virtual ::ActorUniqueID getSourceUniqueID() const;

    virtual ::ActorHurtResult _hurt(::ActorDamageSource const&, float, ::HurtParameters const&);

    virtual void readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);

    virtual void addAdditionalSaveData(::CompoundTag&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PrimedTnt(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);

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
    MCNAPI void $reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);

    MCNAPI void $reloadHardcodedClient(::ActorInitializationMethod);

    MCNAPI void $initializeComponents(::ActorInitializationMethod, ::VariantParameterList const&);

    MCNAPI ::ActorType $getOwnerEntityType();

    MCNAPI void $teleportTo(::Vec3 const&, bool, int, int, bool);

    MCNAPI void $normalTick();

    MCNAPI float $getShadowRadius() const;

    MCNAPI ::ActorUniqueID $getSourceUniqueID() const;

    MCNAPI ::ActorHurtResult $_hurt(::ActorDamageSource const&, float, ::HurtParameters const&);

    MCNAPI void $readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI void $addAdditionalSaveData(::CompoundTag&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
