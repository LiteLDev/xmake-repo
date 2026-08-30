#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/AllowedAnywhereConsume.h"
#include "mc/world/inventory/simulation/ExpectedAnywhereConsume.h"
#include "mc/world/inventory/simulation/ExpectedSlotConsume.h"
#include "mc/world/item/ItemStack.h"

// auto generated forward declare list
// clang-format off
class ContainerValidationCommitObject;
class SimpleSparseContainer;
// clang-format on

struct ContainerValidationLayer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<SimpleSparseContainer>>>           mContainers;
    ::ll::TypedStorage<8, 24, std::vector<std::pair<ItemStack, bool>>>                       mDropItems;
    ::ll::TypedStorage<8, 24, std::vector<ExpectedSlotConsume>>                              mExpectedSlotConsumes;
    ::ll::TypedStorage<8, 24, std::vector<ExpectedAnywhereConsume>>                          mExpectedAnywhereConsumes;
    ::ll::TypedStorage<8, 24, std::vector<AllowedAnywhereConsume>>                           mAllowedAnywhereConsumes;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<ContainerValidationCommitObject>>> mCommitObjects;
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerValidationLayer& operator=(ContainerValidationLayer const&);
    ContainerValidationLayer(ContainerValidationLayer const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ContainerValidationLayer();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
