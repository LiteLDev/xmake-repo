#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/ContainerID.h"
#include "mc/world/containers/managers/models/ContainerManagerModel.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/actor/BlockActorType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockActor;
class Container;
class ContainerScreenContext;
class ItemStack;
class Player;
// clang-format on

class LevelContainerManagerModel : public ::ContainerManagerModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos>      mBlockPos;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>  mEntityUniqueID;
    ::ll::TypedStorage<1, 1, ::BlockActorType> mBlockActorType;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelContainerManagerModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LevelContainerManagerModel();

    virtual std::vector<ItemStack> getItemCopies() const;

    virtual void setSlot(int, ::ItemStack const&, bool);

    virtual ::ItemStack const& getSlot(int) const;

    virtual void setData(int, int);

    virtual void broadcastChanges();

    virtual bool isValid(float);

    virtual ::ContainerScreenContext _postInit();

    virtual void _onDynamicContainerContentsChanged();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LevelContainerManagerModel(::ContainerID, ::Player&, ::ActorUniqueID const);

    MCNAPI LevelContainerManagerModel(::ContainerID, ::Player&, ::BlockPos const&, ::BlockActorType);

    MCNAPI ::BlockActor* _getBlockEntity();

    MCNAPI ::Container* _getRawContainer();

    MCNAPI ::BlockPos const& getBlockPos() const;

    MCNAPI ::ActorUniqueID getEntityUniqueID() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ContainerID, ::Player&, ::ActorUniqueID const);

    MCNAPI void* $ctor(::ContainerID, ::Player&, ::BlockPos const&, ::BlockActorType);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::vector<ItemStack> $getItemCopies() const;

    MCNAPI void $setSlot(int, ::ItemStack const&, bool);

    MCNAPI ::ItemStack const& $getSlot(int) const;

    MCNAPI void $setData(int, int);

    MCNAPI void $broadcastChanges();

    MCNAPI bool $isValid(float);

    MCNAPI ::ContainerScreenContext $_postInit();

    MCNAPI void $_onDynamicContainerContentsChanged();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
