#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/ItemStackNetResult.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/inventory/network/ItemStackRequestActionType.h"
#include "mc/world/inventory/network/TypedServerNetId.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/inventory/network/crafting/CraftHandlerBase.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/inventory/network/crafting/ItemStackRequestActionCraft.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class EnchantingContainerManagerModel;
#else // @header-generator platform
#endif // @header-generator platform
class ItemStackRequestActionCraftBase;
#if defined(LL_PLAT_A) // @header-generator platform
class ItemStackRequestActionCraftHandler;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~CraftHandlerEnchant();
#else // @header-generator platform
    virtual ~CraftHandlerEnchant() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void endRequestBatch();
#else // @header-generator platform
    virtual ::ItemStackNetResult
    _handleCraftAction(::ItemStackRequestActionCraftBase const& requestAction) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemStackNetResult _handleCraftAction(::ItemStackRequestActionCraftBase const&);
#else // @header-generator platform
    virtual void _postCraftRequest(bool const wasSuccess) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    virtual void endRequestBatch() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $endRequestBatch();
#else // @header-generator platform
    MCAPI ::ItemStackNetResult $_handleCraftAction(::ItemStackRequestActionCraftBase const& requestAction);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStackNetResult $_handleCraftAction(::ItemStackRequestActionCraftBase const&);
#else // @header-generator platform
    MCAPI void $_postCraftRequest(bool const wasSuccess);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_postCraftRequest(bool const);
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $endRequestBatch();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
