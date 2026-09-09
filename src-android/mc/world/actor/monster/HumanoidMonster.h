#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/monster/Monster.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
struct ActorDefinitionIdentifier;
// clang-format on

class HumanoidMonster : public ::Monster {
public:
    // prevent constructor by default
    HumanoidMonster();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HumanoidMonster();

    virtual void readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);

    virtual void addAdditionalSaveData(::CompoundTag&) const;

    virtual int getItemUseDuration() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI HumanoidMonster(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static float const& MAX_ENCHANTED_ARMOR_CHANCE();

    MCNAPI static float const& MAX_ENCHANTED_WEAPON_CHANCE();

    MCNAPI static float const& MAX_PICKUP_LOOT_CHANCE();

    MCNAPI static float const& MAX_WEARING_ARMOR_CHANCE();
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
    MCNAPI void $readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI void $addAdditionalSaveData(::CompoundTag&) const;

    MCNAPI int $getItemUseDuration() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
