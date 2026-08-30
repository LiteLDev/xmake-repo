#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/inventory/network/ItemStackNetIdVariant.h"
#include "mc/world/inventory/network/ItemStackNetResult.h"
#include "mc/world/inventory/network/crafting/CraftHandlerBase.h"

// auto generated forward declare list
// clang-format off
class IRandom;
class ItemStack;
class ItemStackRequestActionCraftBase;
class ItemStackRequestActionCraftHandler;
class Player;
// clang-format on

class CraftHandlerGrindstone : public ::CraftHandlerBase {
public:
    // CraftHandlerGrindstone inner types declare
    // clang-format off
    struct ExperienceAmount;
    // clang-format on

    // CraftHandlerGrindstone inner types define
    struct ExperienceAmount {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int> mInput;
        ::ll::TypedStorage<4, 4, int> mAdditional;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Player&>                                  mPlayer;
    ::ll::TypedStorage<8, 24, ::ItemStackNetIdVariant>                   mSrcItemNetId;
    ::ll::TypedStorage<4, 8, ::CraftHandlerGrindstone::ExperienceAmount> mExperienceAmount;
    // NOLINTEND

public:
    // prevent constructor by default
    CraftHandlerGrindstone& operator=(CraftHandlerGrindstone const&);
    CraftHandlerGrindstone(CraftHandlerGrindstone const&);
    CraftHandlerGrindstone();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CraftHandlerGrindstone();

    virtual ::ItemStackNetResult _handleCraftAction(::ItemStackRequestActionCraftBase const&);

    virtual void _postCraftRequest(bool const);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI int _getExperienceFromItem(::ItemStack const&) const;

    MCNAPI bool _resolveNetIdAndValidate(::ContainerEnumName, uchar, ::ItemStackNetIdVariant const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ItemStack _getResultItemWithNoEnchants(::ItemStack&, std::vector<ItemStack> const&, bool&);

    MCNAPI static std::pair<ItemStack, ItemStackNetIdVariant> getResultItem(::ItemStack const&, ::ItemStack const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ItemStackNetResult $_handleCraftAction(::ItemStackRequestActionCraftBase const&);

    MCNAPI void $_postCraftRequest(bool const);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
