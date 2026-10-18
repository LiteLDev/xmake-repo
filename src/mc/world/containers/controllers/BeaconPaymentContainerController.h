#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/controllers/ContainerController.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class ContainerModel;
#else // @header-generator platform
#endif // @header-generator platform
class ItemStackBase;
class Recipes;
// clang-format on

class BeaconPaymentContainerController : public ::ContainerController {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    BeaconPaymentContainerController();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~BeaconPaymentContainerController();
#else // @header-generator platform
    virtual ~BeaconPaymentContainerController() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isItemFiltered(::Recipes const&, ::ItemStackBase const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BeaconPaymentContainerController(std::shared_ptr<ContainerModel>);
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
#else // @header-generator platform
    virtual bool isItemFiltered(::Recipes const&, ::ItemStackBase const& item) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isItemFiltered(::Recipes const&, ::ItemStackBase const&) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI bool $isItemFiltered(::Recipes const&, ::ItemStackBase const& item) const;
#endif


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
