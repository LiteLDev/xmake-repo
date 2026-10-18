#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/controllers/ContainerController.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/item/ItemInstance.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class ContainerModel;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class ItemInstance;
#endif // @header-generator platform
class Recipe;
// clang-format on

class CraftingContainerController : public ::ContainerController {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Recipe const*>            mCurrentRecipe;
    ::ll::TypedStorage<4, 4, int>                        mGridSize;
    ::ll::TypedStorage<1, 1, bool>                       mDisplayOnlyGhostItems;
    ::ll::TypedStorage<8, 24, std::vector<ItemInstance>> mGhostItems;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Recipe const*>                mCurrentRecipe;
    ::ll::TypedStorage<4, 4, int>                            mGridSize;
    ::ll::TypedStorage<1, 1, bool>                           mDisplayOnlyGhostItems;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemInstance>> mGhostItems;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // prevent constructor by default
    CraftingContainerController();

#else // @header-generator platform
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    CraftingContainerController();

#endif
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~CraftingContainerController();
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual ~CraftingContainerController() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~CraftingContainerController() /*override*/;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemInstance const& getRecipeItem(int) const = 0;
#else // @header-generator platform
    virtual ::ItemInstance const& getRecipeItem(int slot) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onRecipeSelected(::Recipe const*, ulong, bool);
#else // @header-generator platform
    virtual void onRecipeSelected(::Recipe const* recipe, uint64 gridSize, bool displayGhostItems);
#endif // @header-generator platform

    virtual void clearSelectedRecipe();

    virtual ::Recipe const* getSelectedRecipe() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setGhostItem(::ItemInstance const&, int, bool);
#else // @header-generator platform
    virtual void setGhostItem(::ItemInstance const& item, int slot, bool showStackSize);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemInstance const& getGhostItem(int) const;
#else // @header-generator platform
    virtual ::ItemInstance const& getGhostItem(int slot) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI CraftingContainerController(std::shared_ptr<ContainerModel>, bool);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI CraftingContainerController(::std::shared_ptr<::ContainerModel> containerModel, bool dropOnDelete);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::shared_ptr<ContainerModel>, bool);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::std::shared_ptr<::ContainerModel> containerModel, bool dropOnDelete);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onRecipeSelected(::Recipe const*, ulong, bool);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void $onRecipeSelected(::Recipe const* recipe, uint64 gridSize, bool displayGhostItems);

    MCAPI void $clearSelectedRecipe();

    MCFOLD ::Recipe const* $getSelectedRecipe() const;

    MCAPI void $setGhostItem(::ItemInstance const& item, int slot, bool showStackSize);

    MCAPI ::ItemInstance const& $getGhostItem(int slot) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $clearSelectedRecipe();
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Recipe const* $getSelectedRecipe() const;

    MCNAPI void $setGhostItem(::ItemInstance const&, int, bool);

    MCNAPI ::ItemInstance const& $getGhostItem(int) const;
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
