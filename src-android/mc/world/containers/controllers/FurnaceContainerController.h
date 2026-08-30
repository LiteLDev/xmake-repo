#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/controllers/ContainerController.h"
#include "mc/world/item/ItemInstance.h"

// auto generated forward declare list
// clang-format off
class ContainerModel;
// clang-format on

class FurnaceContainerController : public ::ContainerController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 128, ::ItemInstance> mRecipeItem;
    ::ll::TypedStorage<8, 128, ::ItemInstance> mGhostItem;
    ::ll::TypedStorage<1, 1, bool>             mDisplayOnlyGhostItems;
    ::ll::TypedStorage<1, 1, bool>             mIsRecipeSmeltable;
    // NOLINTEND

public:
    // prevent constructor by default
    FurnaceContainerController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FurnaceContainerController();

    virtual ::ItemInstance const& getRecipeItem(int) const;

    virtual int getBackgroundStyle(int, bool) const;

    virtual void onRecipeSelected(::ItemInstance const&, bool);

    virtual void setGhostItem(::ItemInstance const&);

    virtual ::ItemInstance const& getGhostItem() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FurnaceContainerController(std::shared_ptr<ContainerModel>, bool);

    MCNAPI void clearSelectedRecipe();

    MCNAPI bool isRecipeSmeltable() const;

    MCNAPI void setIsRecipeSmeltable(bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<ContainerModel>, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ItemInstance const& $getRecipeItem(int) const;

    MCNAPI int $getBackgroundStyle(int, bool) const;

    MCNAPI void $onRecipeSelected(::ItemInstance const&, bool);

    MCNAPI void $setGhostItem(::ItemInstance const&);

    MCNAPI ::ItemInstance const& $getGhostItem() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
