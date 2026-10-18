#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/ContainerID.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/containers/managers/models/ContainerManagerModel.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/actor/BlockActorType.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Actor;
#else // @header-generator platform
#endif // @header-generator platform
class BlockActor;
class Container;
class ContainerScreenContext;
class ItemStack;
#if defined(LL_PLAT_A) // @header-generator platform
class Player;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    LevelContainerManagerModel();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~LevelContainerManagerModel();
#else // @header-generator platform
    virtual ~LevelContainerManagerModel() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<ItemStack> getItemCopies() const;
#else // @header-generator platform
    virtual ::std::vector<::ItemStack> getItemCopies() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setSlot(int, ::ItemStack const&, bool);
#else // @header-generator platform
    virtual void setSlot(int slot, ::ItemStack const& item, bool fromNetwork) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemStack const& getSlot(int) const;
#else // @header-generator platform
    virtual ::ItemStack const& getSlot(int slot) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setData(int, int);
#else // @header-generator platform
    virtual void setData(int id, int value) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void broadcastChanges();
#else // @header-generator platform
    virtual void broadcastChanges() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isValid(float);
#else // @header-generator platform
    virtual bool isValid(float pickRange) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ContainerScreenContext _postInit();
#else // @header-generator platform
    virtual ::ContainerScreenContext _postInit() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _onDynamicContainerContentsChanged();
#else // @header-generator platform
    virtual void _onDynamicContainerContentsChanged() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI LevelContainerManagerModel(::ContainerID, ::Player&, ::ActorUniqueID const);
#else // @header-generator platform
    MCAPI ::BlockActor* _getBlockEntity();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::Container* _getRawContainer();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<ItemStack> $getItemCopies() const;
#else // @header-generator platform
    MCAPI ::std::vector<::ItemStack> $getItemCopies() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setSlot(int, ::ItemStack const&, bool);
#else // @header-generator platform
    MCAPI void $setSlot(int slot, ::ItemStack const& item, bool fromNetwork);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStack const& $getSlot(int) const;
#else // @header-generator platform
    MCAPI ::ItemStack const& $getSlot(int slot) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setData(int, int);
#else // @header-generator platform
    MCFOLD void $setData(int id, int value);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $broadcastChanges();
#else // @header-generator platform
    MCAPI void $broadcastChanges();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isValid(float);
#else // @header-generator platform
    MCAPI bool $isValid(float pickRange);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ContainerScreenContext $_postInit();
#else // @header-generator platform
    MCAPI ::ContainerScreenContext $_postInit();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_onDynamicContainerContentsChanged();
#else // @header-generator platform
    MCAPI void $_onDynamicContainerContentsChanged();


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
