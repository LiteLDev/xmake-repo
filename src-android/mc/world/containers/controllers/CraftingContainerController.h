#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/controllers/ContainerController.h"
#include "mc/world/item/ItemInstance.h"

// auto generated forward declare list
// clang-format off
class ContainerModel;
class Recipe;
// clang-format on

class CraftingContainerController : public ::ContainerController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Recipe const*>            mCurrentRecipe;
    ::ll::TypedStorage<4, 4, int>                        mGridSize;
    ::ll::TypedStorage<1, 1, bool>                       mDisplayOnlyGhostItems;
    ::ll::TypedStorage<8, 24, std::vector<ItemInstance>> mGhostItems;
    // NOLINTEND

public:
    // prevent constructor by default
    CraftingContainerController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CraftingContainerController();

    virtual ::ItemInstance const& getRecipeItem(int) const = 0;

    virtual void onRecipeSelected(::Recipe const*, ulong, bool);

    virtual void clearSelectedRecipe();

    virtual ::Recipe const* getSelectedRecipe() const;

    virtual void setGhostItem(::ItemInstance const&, int, bool);

    virtual ::ItemInstance const& getGhostItem(int) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CraftingContainerController(std::shared_ptr<ContainerModel>, bool);
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
    MCNAPI void $onRecipeSelected(::Recipe const*, ulong, bool);

    MCNAPI void $clearSelectedRecipe();

    MCNAPI ::Recipe const* $getSelectedRecipe() const;

    MCNAPI void $setGhostItem(::ItemInstance const&, int, bool);

    MCNAPI ::ItemInstance const& $getGhostItem(int) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
