#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/controllers/CraftingContainerController.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/item/ItemInstance.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class ContainerModel;
#if defined(LL_PLAT_A) // @header-generator platform
class Recipe;
class RecipeIngredient;
#else // @header-generator platform
class ItemInstance;
#endif // @header-generator platform
// clang-format on

class CraftingInputContainerController : public ::CraftingContainerController {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<ItemInstance>> mRecipeItems;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemInstance>> mRecipeItems;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // prevent constructor by default
    CraftingInputContainerController();

#else // @header-generator platform
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    CraftingInputContainerController();

#endif
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~CraftingInputContainerController();
#else // @header-generator platform
    virtual ~CraftingInputContainerController() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemInstance const& getRecipeItem(int) const;
#else // @header-generator platform
    virtual int getBackgroundStyle(int slot, bool inventoryContainsItem) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getBackgroundStyle(int, bool) const;
#else // @header-generator platform
    virtual ::ItemInstance const& getRecipeItem(int slot) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void clearSelectedRecipe();
#else // @header-generator platform
    virtual void clearSelectedRecipe() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit CraftingInputContainerController(std::shared_ptr<ContainerModel>);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI explicit CraftingInputContainerController(::std::shared_ptr<::ContainerModel> containerModel);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::shared_ptr<ContainerModel>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::std::shared_ptr<::ContainerModel> containerModel);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemInstance const& $getRecipeItem(int) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI int $getBackgroundStyle(int slot, bool inventoryContainsItem) const;

    MCNAPI ::ItemInstance const& $getRecipeItem(int slot) const;

    MCNAPI void $clearSelectedRecipe();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getBackgroundStyle(int, bool) const;
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $clearSelectedRecipe();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
