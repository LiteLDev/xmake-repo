#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/inventory/simulation/AllowedAnywhereConsume.h"
#include "mc/world/inventory/simulation/ExpectedAnywhereConsume.h"
#include "mc/world/inventory/simulation/ExpectedSlotConsume.h"
#include "mc/world/item/ItemStack.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
class ContainerValidationCommitObject;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class ItemStack;
#endif // @header-generator platform
class SimpleSparseContainer;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct AllowedAnywhereConsume;
struct ExpectedAnywhereConsume;
struct ExpectedSlotConsume;
#endif // @header-generator platform
// clang-format on

struct ContainerValidationLayer {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::SimpleSparseContainer>>> mContainers;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::ItemStack, bool>>>             mDropItems;
    ::ll::TypedStorage<8, 24, ::std::vector<::ExpectedSlotConsume>>                      mExpectedSlotConsumes;
    ::ll::TypedStorage<8, 24, ::std::vector<::ExpectedAnywhereConsume>>                  mExpectedAnywhereConsumes;
    ::ll::TypedStorage<8, 24, ::std::vector<::AllowedAnywhereConsume>>                   mAllowedAnywhereConsumes;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::ContainerValidationCommitObject>>> mCommitObjects;
#endif // @header-generator platform
    // NOLINTEND
};
