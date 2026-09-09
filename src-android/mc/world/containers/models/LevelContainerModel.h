#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/containers/models/ContainerCategory.h"
#include "mc/world/containers/models/ContainerModel.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/actor/BlockActorType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockActor;
class Container;
class ContainerWeakRef;
class ItemStack;
class Player;
// clang-format on

class LevelContainerModel : public ::ContainerModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Player&>                        mPlayer;
    ::ll::TypedStorage<4, 12, ::BlockPos>                      mBlockPos;
    ::ll::TypedStorage<1, 1, ::BlockActorType>                 mBlockEntityType;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                  mEntityUniqueId;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mContainerRemovedSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelContainerModel& operator=(LevelContainerModel const&);
    LevelContainerModel(LevelContainerModel const&);
    LevelContainerModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LevelContainerModel();

    virtual void containerContentChanged(int);

    virtual void postInit();

    virtual void releaseResources();

    virtual ::ContainerWeakRef getContainerWeakRef() const;

    virtual bool isValid();

    virtual bool isSlotDisabled(int) const;

    virtual ::Container* _getContainer() const;

    virtual int _getContainerOffset() const;

    virtual void _onItemChanged(int, ::ItemStack const&, ::ItemStack const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LevelContainerModel(::ContainerEnumName, int, ::Player&, ::ActorUniqueID, ::ContainerCategory);

    MCNAPI
    LevelContainerModel(::ContainerEnumName, int, ::Player&, ::BlockActorType, ::BlockPos const&, ::ContainerCategory);

    MCNAPI void containerRemoved();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Container* getContainerHelper(::Player&, ::ActorUniqueID const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ContainerEnumName, int, ::Player&, ::ActorUniqueID, ::ContainerCategory);

    MCNAPI void* $ctor(::ContainerEnumName, int, ::Player&, ::BlockActorType, ::BlockPos const&, ::ContainerCategory);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $containerContentChanged(int);

    MCNAPI void $postInit();

    MCNAPI void $releaseResources();

    MCNAPI ::ContainerWeakRef $getContainerWeakRef() const;

    MCNAPI bool $isValid();

    MCNAPI bool $isSlotDisabled(int) const;

    MCNAPI ::Container* $_getContainer() const;

    MCNAPI int $_getContainerOffset() const;

    MCNAPI void $_onItemChanged(int, ::ItemStack const&, ::ItemStack const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
