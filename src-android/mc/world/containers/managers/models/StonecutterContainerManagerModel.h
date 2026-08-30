#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerID.h"
#include "mc/world/containers/managers/models/ContainerManagerModel.h"
#include "mc/world/inventory/network/TypedServerNetId.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class ContainerScreenContext;
class ItemInstance;
class ItemStack;
class Player;
// clang-format on

class StonecutterContainerManagerModel : public ::ContainerManagerModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos> mBlockPos;
    // NOLINTEND

public:
    // prevent constructor by default
    StonecutterContainerManagerModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StonecutterContainerManagerModel();

    virtual std::vector<ItemStack> getItemCopies() const;

    virtual void setSlot(int, ::ItemStack const&, bool);

    virtual ::ItemStack const& getSlot(int) const;

    virtual void setData(int, int);

    virtual void broadcastChanges();

    virtual bool isValid(float);

    virtual ::ContainerScreenContext _postInit();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StonecutterContainerManagerModel(::ContainerID, ::Player&, ::BlockPos const&);

    MCNAPI void fireItemAcquiredEvent(::ItemInstance const&, int);

    MCNAPI std::vector<std::pair<ItemInstance, TypedServerNetId<RecipeNetIdTag, uint, 0>>>
           getResultForItem(::ItemStack const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ContainerID, ::Player&, ::BlockPos const&);
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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
