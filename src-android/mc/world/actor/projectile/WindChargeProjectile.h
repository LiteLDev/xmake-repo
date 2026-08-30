#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/projectile/PredictableProjectile.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
struct ActorDefinitionIdentifier;
struct ActorUniqueID;
struct VariantParameterList;
// clang-format on

class WindChargeProjectile : public ::PredictableProjectile {
public:
    // prevent constructor by default
    WindChargeProjectile();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void outOfWorld();

    virtual ~WindChargeProjectile();

    virtual void reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);

    virtual void initializeComponents(::ActorInitializationMethod, ::VariantParameterList const&);

    virtual ::ActorUniqueID getSourceUniqueID() const;

    virtual void readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);

    virtual void addAdditionalSaveData(::CompoundTag&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WindChargeProjectile(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);
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
    MCNAPI void $outOfWorld();

    MCNAPI void $reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);

    MCNAPI void $initializeComponents(::ActorInitializationMethod, ::VariantParameterList const&);

    MCNAPI ::ActorUniqueID $getSourceUniqueID() const;

    MCNAPI void $readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI void $addAdditionalSaveData(::CompoundTag&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
