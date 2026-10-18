#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"

// auto generated forward declare list
// clang-format off
class ContainerScreenContext;
class ItemStackBase;
class SparseContainer;
// clang-format on

struct ContainerValidation {
public:
    // ContainerValidation inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using AllowedItemInSlotDelegate = std::function<bool(int, const ItemStackBase&, int)>;
#else // @header-generator platform
    using AllowedItemInContainerDelegate = ::std::function<bool(::ItemStackBase const&)>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using AllowedItemToAddDelegate = std::function<bool(const ItemStackBase&)>;
#else // @header-generator platform
    using AllowedItemInSlotDelegate = ::std::function<bool(int, ::ItemStackBase const&, int)>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using AvailableSetCountDelegate = std::function<int(int, const ItemStackBase&)>;
#else // @header-generator platform
    using AllowedItemToAddDelegate = ::std::function<bool(::ItemStackBase const&)>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using ValidSlotForContainerDelegate = std::function<bool(int)>;
#else // @header-generator platform
    using AllowedItemToRemoveDelegate = ::std::function<bool(::ItemStackBase const&)>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using AllowedItemToRemoveDelegate = std::function<bool(const ItemStackBase&)>;
#else // @header-generator platform
    using AvailableSetCountDelegate = ::std::function<int(int, ::ItemStackBase const&)>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using AllowedItemInContainerDelegate = std::function<bool(const ItemStackBase&)>;
#else // @header-generator platform
    using ValidSlotForContainerDelegate = ::std::function<bool(int)>;
#endif // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    assignValidationDelegates(::SparseContainer&, ::ContainerEnumName, ::ContainerScreenContext const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static void assignValidationDelegates(
        ::SparseContainer&              sparseContainer,
        ::ContainerEnumName             containerEnumName,
        ::ContainerScreenContext const& screenContext
    );
#endif
#endif // @header-generator platform
    // NOLINTEND
};
