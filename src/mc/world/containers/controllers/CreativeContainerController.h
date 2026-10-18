#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/containers/controllers/CraftingContainerController.h"

// auto generated forward declare list
// clang-format off
class ContainerModel;
class ItemInstance;
class ItemStackBase;
class Recipes;
// clang-format on

class CreativeContainerController : public ::CraftingContainerController {
public:
    // prevent constructor by default
    CreativeContainerController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CreativeContainerController();

    virtual ::ItemInstance const& getRecipeItem(int) const;

    virtual bool canRemove(int, int) const;

    virtual bool isItemFiltered(::Recipes const&, ::ItemStackBase const&) const;

    virtual int getBackgroundStyle(int, bool) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit CreativeContainerController(std::shared_ptr<ContainerModel>);
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

    MCNAPI bool $canRemove(int, int) const;

    MCNAPI bool $isItemFiltered(::Recipes const&, ::ItemStackBase const&) const;

    MCNAPI int $getBackgroundStyle(int, bool) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class CreativeContainerController {};
#endif // @header-generator platform
