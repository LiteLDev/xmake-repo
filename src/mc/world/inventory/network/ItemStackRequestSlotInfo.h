#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/inventory/network/ItemStackNetIdVariant.h"
#endif // @header-generator platform

// auto generated inclusion list
#include "mc/world/containers/FullContainerName.h"
#include "mc/world/inventory/network/ItemStackNetIdVariant.h"

struct ItemStackRequestSlotInfo {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 12, ::FullContainerName>     mFullContainerName;
    ::ll::TypedStorage<1, 1, uchar>                    mSlot;
    ::ll::TypedStorage<8, 24, ::ItemStackNetIdVariant> mNetIdVariant;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemStackRequestSlotInfo& operator=(ItemStackRequestSlotInfo const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ItemStackRequestSlotInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    ::FullContainerName     mFullContainerName;
    uchar                   mSlot;
    ::ItemStackNetIdVariant mNetIdVariant;
#endif // @header-generator platform
    // NOLINTEND
};
