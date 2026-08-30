#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/item/ItemStack.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
struct ActorDefinitionIdentifier;
// clang-format on

class OminousItemSpawner : public ::Actor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>              mTicksBeforeRemoval;
    ::ll::TypedStorage<4, 4, int>              mHasTicked;
    ::ll::TypedStorage<8, 152, ::ItemStack>    mItemToSpawn;
    ::ll::TypedStorage<1, 24, ::WeakEntityRef> mDisplayEntity;
    // NOLINTEND

public:
    // prevent constructor by default
    OminousItemSpawner();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OminousItemSpawner();

    virtual void remove();

    virtual void baseTick();

    virtual void readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);

    virtual void addAdditionalSaveData(::CompoundTag&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI OminousItemSpawner(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);

    MCNAPI ::ItemStack const& _getItem();

    MCNAPI void init(::ItemStack const&, int);

    MCNAPI ::Actor* tryGetOrCreateDisplayEntity();
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
    MCNAPI void $remove();

    MCNAPI void $baseTick();

    MCNAPI void $readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI void $addAdditionalSaveData(::CompoundTag&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
