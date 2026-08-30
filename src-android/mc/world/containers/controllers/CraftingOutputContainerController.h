#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/controllers/CraftingContainerController.h"
#include "mc/world/item/ItemInstance.h"

// auto generated forward declare list
// clang-format off
class ContainerModel;
class Recipe;
// clang-format on

class CraftingOutputContainerController : public ::CraftingContainerController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 128, ::ItemInstance> mRecipeItem;
    ::ll::TypedStorage<1, 1, bool>             mIsRecipeCraftable;
    // NOLINTEND

public:
    // prevent constructor by default
    CraftingOutputContainerController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CraftingOutputContainerController();

    virtual ::ItemInstance const& getRecipeItem(int) const;

    virtual int getBackgroundStyle(int, bool) const;

    virtual bool _canRemove(int, int) const;

    virtual void onRecipeSelected(::Recipe const*, ulong, bool);

    virtual void clearSelectedRecipe();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit CraftingOutputContainerController(std::shared_ptr<ContainerModel>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<ContainerModel>);
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

    MCNAPI bool $_canRemove(int, int) const;

    MCNAPI void $onRecipeSelected(::Recipe const*, ulong, bool);

    MCNAPI void $clearSelectedRecipe();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
