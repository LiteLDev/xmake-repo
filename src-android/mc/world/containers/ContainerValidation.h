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
    using AllowedItemInSlotDelegate = std::function<bool(int, const ItemStackBase&, int)>;

    using AllowedItemToAddDelegate = std::function<bool(const ItemStackBase&)>;

    using AvailableSetCountDelegate = std::function<int(int, const ItemStackBase&)>;

    using ValidSlotForContainerDelegate = std::function<bool(int)>;

    using AllowedItemToRemoveDelegate = std::function<bool(const ItemStackBase&)>;

    using AllowedItemInContainerDelegate = std::function<bool(const ItemStackBase&)>;

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    assignValidationDelegates(::SparseContainer&, ::ContainerEnumName, ::ContainerScreenContext const&);
    // NOLINTEND
};
