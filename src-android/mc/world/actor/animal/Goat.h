#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/animal/Animal.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
class Mob;
struct ActorDefinitionIdentifier;
struct VariantParameterList;
// clang-format on

class Goat : public ::Animal {
public:
    // prevent constructor by default
    Goat();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Goat();

    virtual void initializeComponents(::ActorInitializationMethod, ::VariantParameterList const&);

    virtual ::SharedTypes::Legacy::LevelSoundEvent getAmbientSound() const;

    virtual void handleEntityEvent(::ActorEvent, int);

    virtual void readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);

    virtual void addAdditionalSaveData(::CompoundTag&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Goat(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);

    MCNAPI int getHornCount() const;

    MCNAPI bool isScreaming();

    MCNAPI void reduceHornCount();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::optional<SharedTypes::Legacy::LevelSoundEvent> getCustomDeathSound(::Mob const&);

    MCNAPI static std::optional<SharedTypes::Legacy::LevelSoundEvent> getCustomHurtSound(::Mob const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int& DEFAULT_HORN_COUNT();

    MCNAPI static int& SCREAMING_GOAT_VARIANT();
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

    MCNAPI ::SharedTypes::Legacy::LevelSoundEvent $getAmbientSound() const;

    MCNAPI void $handleEntityEvent(::ActorEvent, int);

    MCNAPI void $readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI void $addAdditionalSaveData(::CompoundTag&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
