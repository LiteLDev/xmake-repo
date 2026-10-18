#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/inventory/simulation/AllowedAnywhereConsume.h"
#include "mc/world/inventory/simulation/ExpectedAnywhereConsume.h"
#include "mc/world/inventory/simulation/ExpectedSlotConsume.h"
#include "mc/world/item/ItemInstance.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
class ContainerValidationCommitObject;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class ItemInstance;
struct AllowedAnywhereConsume;
struct ExpectedAnywhereConsume;
struct ExpectedSlotConsume;
#endif // @header-generator platform
// clang-format on

struct ContainerValidationCraftResult {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<ItemInstance>>                                     mResults;
    ::ll::TypedStorage<8, 24, std::vector<ExpectedSlotConsume>>                              mExpectedSlotConsumes;
    ::ll::TypedStorage<8, 24, std::vector<ExpectedAnywhereConsume>>                          mExpectedAnywhereConsumes;
    ::ll::TypedStorage<8, 24, std::vector<AllowedAnywhereConsume>>                           mAllowedAnywhereConsumes;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<ContainerValidationCommitObject>>> mCommitObjects;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemInstance>>            mResults;
    ::ll::TypedStorage<8, 24, ::std::vector<::ExpectedSlotConsume>>     mExpectedSlotConsumes;
    ::ll::TypedStorage<8, 24, ::std::vector<::ExpectedAnywhereConsume>> mExpectedAnywhereConsumes;
    ::ll::TypedStorage<8, 24, ::std::vector<::AllowedAnywhereConsume>>  mAllowedAnywhereConsumes;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::ContainerValidationCommitObject>>> mCommitObjects;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ContainerValidationCraftResult();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
