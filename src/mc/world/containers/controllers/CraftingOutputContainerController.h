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

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // prevent constructor by default
    CraftingOutputContainerController();

#else // @header-generator platform
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    CraftingOutputContainerController();

#endif
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~CraftingOutputContainerController();
#else // @header-generator platform
    virtual ~CraftingOutputContainerController() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemInstance const& getRecipeItem(int) const;
#else // @header-generator platform
    virtual int getBackgroundStyle(int slot, bool inventoryContainsItem) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getBackgroundStyle(int, bool) const;
#else // @header-generator platform
    virtual void onRecipeSelected(::Recipe const* recipe, uint64 gridSize, bool displayGhostItems) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool _canRemove(int, int) const;
#else // @header-generator platform
    virtual ::ItemInstance const& getRecipeItem(int slot) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onRecipeSelected(::Recipe const*, ulong, bool);
#else // @header-generator platform
    virtual void clearSelectedRecipe() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void clearSelectedRecipe();
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual bool _canRemove(int, int) const /*override*/;
#else // LL_PLAT_C
    virtual bool _canRemove(int slot, int removeCount) const /*override*/;
#endif

#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit CraftingOutputContainerController(std::shared_ptr<ContainerModel>);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI explicit CraftingOutputContainerController(::std::shared_ptr<::ContainerModel> containerModel);
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

    MCNAPI void $onRecipeSelected(::Recipe const* recipe, uint64 gridSize, bool displayGhostItems);

    MCNAPI ::ItemInstance const& $getRecipeItem(int slot) const;

    MCNAPI void $clearSelectedRecipe();

    MCNAPI bool $_canRemove(int slot, int removeCount) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getBackgroundStyle(int, bool) const;
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $_canRemove(int, int) const;

    MCNAPI void $onRecipeSelected(::Recipe const*, ulong, bool);

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
