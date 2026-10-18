#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/ItemStackNetResult.h"
#include "mc/world/inventory/network/ScreenHandlerBase.h"

// auto generated forward declare list
// clang-format off
class BeaconBlockActor;
class ContainerScreenContext;
class ItemStackRequestAction;
#if defined(LL_PLAT_A) // @header-generator platform
class ItemStackRequestActionBeaconPayment;
class ItemStackRequestActionHandler;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class ScreenHandlerBeacon : public ::ScreenHandlerBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ContainerScreenContext const&> mScreenContext;
    ::ll::TypedStorage<1, 1, bool>                            mIsPaymentAction;
    ::ll::TypedStorage<4, 4, int>                             mPrimaryEffectId;
    ::ll::TypedStorage<4, 4, int>                             mSecondaryEffectId;
    ::ll::TypedStorage<8, 8, ::BeaconBlockActor*>             mBeaconBlockActor;
    // NOLINTEND

public:
    // prevent constructor by default
    ScreenHandlerBeacon& operator=(ScreenHandlerBeacon const&);
    ScreenHandlerBeacon(ScreenHandlerBeacon const&);
    ScreenHandlerBeacon();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ScreenHandlerBeacon();
#else // @header-generator platform
    virtual ~ScreenHandlerBeacon() /*override*/ = default;
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
    MCAPI ::ItemStackNetResult $handleAction(::ItemStackRequestAction const& requestAction);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStackNetResult $endRequest();
#else // @header-generator platform
    MCAPI ::ItemStackNetResult $endRequest();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $postRequest(bool const);
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $postRequest(bool const wasSuccess);
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
