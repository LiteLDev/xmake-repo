#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/inventory/network/ItemStackNetIdVariant.h"
#include "mc/world/inventory/network/ItemStackNetResult.h"
#include "mc/world/inventory/network/crafting/CraftHandlerBase.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class IRandom;
#else // @header-generator platform
#endif // @header-generator platform
class ItemStack;
class ItemStackRequestActionCraftBase;
#if defined(LL_PLAT_A) // @header-generator platform
class ItemStackRequestActionCraftHandler;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~CraftHandlerGrindstone();
#else // @header-generator platform
    virtual ~CraftHandlerGrindstone() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemStackNetResult _handleCraftAction(::ItemStackRequestActionCraftBase const&);
#else // @header-generator platform
    virtual ::ItemStackNetResult
    _handleCraftAction(::ItemStackRequestActionCraftBase const& requestAction) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _postCraftRequest(bool const);
#else // @header-generator platform
    virtual void _postCraftRequest(bool const wasSuccess) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int _getExperienceFromItem(::ItemStack const&) const;

    MCNAPI bool _resolveNetIdAndValidate(::ContainerEnumName, uchar, ::ItemStackNetIdVariant const&);
#else // @header-generator platform
    MCAPI bool
    _resolveNetIdAndValidate(::ContainerEnumName containerNetId, uchar slot, ::ItemStackNetIdVariant const& netId);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ItemStack _getResultItemWithNoEnchants(::ItemStack&, std::vector<ItemStack> const&, bool&);
#else // @header-generator platform
    MCAPI static int _getExperienceFromItem(::ItemStack const& stack);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::pair<ItemStack, ItemStackNetIdVariant> getResultItem(::ItemStack const&, ::ItemStack const&);
    // NOLINTEND
#else // @header-generator platform
    MCAPI static ::ItemStack _getResultItemWithNoEnchants(
        ::ItemStack&                      result,
        ::std::vector<::ItemStack> const& inputItems,
        bool&                             onlyHasCurses
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static ::std::pair<::ItemStack, ::ItemStackNetIdVariant>
    getResultItem(::ItemStack const& input, ::ItemStack const& additional);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStackNetResult $_handleCraftAction(::ItemStackRequestActionCraftBase const&);
#else // @header-generator platform
    MCAPI ::ItemStackNetResult $_handleCraftAction(::ItemStackRequestActionCraftBase const& requestAction);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_postCraftRequest(bool const);
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $_postCraftRequest(bool const wasSuccess);
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
