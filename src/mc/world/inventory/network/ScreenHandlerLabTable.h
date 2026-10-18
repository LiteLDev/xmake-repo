#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/ItemStackNetResult.h"
#include "mc/world/inventory/network/ScreenHandlerBase.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/item/ItemStack.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class ChemistryTableBlockActor;
class ContainerScreenContext;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class ItemStack;
#endif // @header-generator platform
class ItemStackRequestAction;
#if defined(LL_PLAT_A) // @header-generator platform
class ItemStackRequestActionHandler;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class ScreenHandlerLabTable : public ::ScreenHandlerBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ContainerScreenContext const&> mScreenContext;
    ::ll::TypedStorage<8, 8, ::ChemistryTableBlockActor*>     mChemistryTableBlockActor;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<ItemStack>>         mConsumedInput;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemStack>>     mConsumedInput;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScreenHandlerLabTable& operator=(ScreenHandlerLabTable const&);
    ScreenHandlerLabTable(ScreenHandlerLabTable const&);
    ScreenHandlerLabTable();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ScreenHandlerLabTable();
#else // @header-generator platform
    virtual ~ScreenHandlerLabTable() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemStackNetResult handleAction(::ItemStackRequestAction const&);
#else // @header-generator platform
    virtual ::ItemStackNetResult handleAction(::ItemStackRequestAction const& requestAction) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemStackNetResult endRequest();
#else // @header-generator platform
    virtual ::ItemStackNetResult endRequest() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void postRequest(bool const);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void postRequest(bool const wasSuccess) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStackNetResult $handleAction(::ItemStackRequestAction const&);
#else // @header-generator platform
    MCNAPI ::ItemStackNetResult $handleAction(::ItemStackRequestAction const& requestAction);
#endif // @header-generator platform

    MCNAPI ::ItemStackNetResult $endRequest();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $postRequest(bool const);
    // NOLINTEND
#else // @header-generator platform
    MCNAPI void $postRequest(bool const wasSuccess);
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
