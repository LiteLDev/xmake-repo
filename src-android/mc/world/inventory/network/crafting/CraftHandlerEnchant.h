#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/ItemStackNetResult.h"
#include "mc/world/inventory/network/ItemStackRequestActionType.h"
#include "mc/world/inventory/network/TypedServerNetId.h"
#include "mc/world/inventory/network/crafting/CraftHandlerBase.h"
#include "mc/world/inventory/network/crafting/ItemStackRequestActionCraft.h"

// auto generated forward declare list
// clang-format off
class EnchantingContainerManagerModel;
class ItemStackRequestActionCraftBase;
class ItemStackRequestActionCraftHandler;
class Player;
// clang-format on

class CraftHandlerEnchant : public ::CraftHandlerBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>       mEnchantCost;
    ::ll::TypedStorage<8, 8, ::Player&> mPlayer;
    ::ll::TypedStorage<1, 1, bool>      mRecalculateOptions;
    // NOLINTEND

public:
    // prevent constructor by default
    CraftHandlerEnchant& operator=(CraftHandlerEnchant const&);
    CraftHandlerEnchant(CraftHandlerEnchant const&);
    CraftHandlerEnchant();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CraftHandlerEnchant();

    virtual void endRequestBatch();

    virtual ::ItemStackNetResult _handleCraftAction(::ItemStackRequestActionCraftBase const&);

    virtual void _postCraftRequest(bool const);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CraftHandlerEnchant(::Player&, ::ItemStackRequestActionCraftHandler&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Player&, ::ItemStackRequestActionCraftHandler&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $endRequestBatch();

    MCNAPI ::ItemStackNetResult $_handleCraftAction(::ItemStackRequestActionCraftBase const&);

    MCNAPI void $_postCraftRequest(bool const);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
