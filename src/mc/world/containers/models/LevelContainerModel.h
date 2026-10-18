#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/legacy/ActorUniqueID.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/containers/models/ContainerCategory.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/containers/models/ContainerModel.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/actor/BlockActorType.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Actor;
class BlockActor;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~LevelContainerModel();
#else // @header-generator platform
    virtual ~LevelContainerModel() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void containerContentChanged(int);
#else // @header-generator platform
    virtual void releaseResources() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void postInit();
#else // @header-generator platform
    virtual void containerContentChanged(int slot) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void releaseResources();
#else // @header-generator platform
    virtual bool isValid() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ContainerWeakRef getContainerWeakRef() const;
#else // @header-generator platform
    virtual ::ContainerWeakRef getContainerWeakRef() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isValid();
#else // @header-generator platform
    virtual void postInit() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isSlotDisabled(int) const;
#else // @header-generator platform
    virtual bool isSlotDisabled(int slot) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Container* _getContainer() const;
#else // @header-generator platform
    virtual int _getContainerOffset() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int _getContainerOffset() const;
#else // @header-generator platform
    virtual void _onItemChanged(int modelSlot, ::ItemStack const& oldItem, ::ItemStack const& newItem) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _onItemChanged(int, ::ItemStack const&, ::ItemStack const&);
#else // @header-generator platform
    virtual ::Container* _getContainer() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI LevelContainerModel(::ContainerEnumName, int, ::Player&, ::ActorUniqueID, ::ContainerCategory);

    MCNAPI
    LevelContainerModel(::ContainerEnumName, int, ::Player&, ::BlockActorType, ::BlockPos const&, ::ContainerCategory);

    MCNAPI void containerRemoved();
#else // @header-generator platform
    MCAPI void containerRemoved();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Container* getContainerHelper(::Player&, ::ActorUniqueID const&);
    // NOLINTEND
#else // @header-generator platform
    MCAPI static ::Container* getContainerHelper(::Player& player, ::ActorUniqueID const& actorUniqueId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI static ::Container*
    getContainerHelper(::Player& player, ::BlockActorType blockActorType, ::BlockPos const& blockPos);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $containerContentChanged(int);
#else // @header-generator platform
    MCAPI void $releaseResources();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $postInit();
#else // @header-generator platform
    MCAPI void $containerContentChanged(int slot);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $releaseResources();
#else // @header-generator platform
    MCAPI bool $isValid();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ContainerWeakRef $getContainerWeakRef() const;
#else // @header-generator platform
    MCAPI ::ContainerWeakRef $getContainerWeakRef() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isValid();
#else // @header-generator platform
    MCAPI void $postInit();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isSlotDisabled(int) const;
#else // @header-generator platform
    MCAPI bool $isSlotDisabled(int slot) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Container* $_getContainer() const;
#else // @header-generator platform
    MCAPI int $_getContainerOffset() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $_getContainerOffset() const;
#else // @header-generator platform
    MCAPI void $_onItemChanged(int modelSlot, ::ItemStack const& oldItem, ::ItemStack const& newItem);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_onItemChanged(int, ::ItemStack const&, ::ItemStack const&);
#else // @header-generator platform
    MCAPI ::Container* $_getContainer() const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};
