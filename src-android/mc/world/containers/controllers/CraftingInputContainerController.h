#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/controllers/CraftingContainerController.h"
#include "mc/world/item/ItemInstance.h"

// auto generated forward declare list
// clang-format off
class ContainerModel;
class Recipe;
class RecipeIngredient;
// clang-format on

class CraftingInputContainerController : public ::CraftingContainerController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<ItemInstance>> mRecipeItems;
    // NOLINTEND

public:
    // prevent constructor by default
    CraftingInputContainerController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CraftingInputContainerController();

    virtual ::ItemInstance const& getRecipeItem(int) const;

    virtual int getBackgroundStyle(int, bool) const;

    virtual void clearSelectedRecipe();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit CraftingInputContainerController(std::shared_ptr<ContainerModel>);
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

    MCNAPI void $clearSelectedRecipe();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
