#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/network/packet/ItemStackResponseContainerInfo.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/inventory/network/ItemStackNetResult.h"
#include "mc/world/inventory/network/TypedClientNetId.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
struct ItemStackRequestIdTag;
struct ItemStackResponseContainerInfo;
// clang-format on
#endif // @header-generator platform

struct ItemStackResponseInfo {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, ::ItemStackNetResult>                         mResult;
    ::ll::UntypedStorage<8, 16>                                            mClientRequestId;
    ::ll::TypedStorage<8, 24, std::vector<ItemStackResponseContainerInfo>> mContainers;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ItemStackResponseInfo& operator=(::ItemStackResponseInfo&&);
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, ::ItemStackNetResult>                             mResult;
    ::ll::TypedStorage<8, 16, ::ItemStackRequestId>                            mClientRequestId;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemStackResponseContainerInfo>> mContainers;
#endif // @header-generator platform
    // NOLINTEND
};
