#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/ItemStackRequestActionTransferBase.h"

// auto generated forward declare list
// clang-format off
struct ItemStackRequestSlotInfo;
// clang-format on

class ItemStackRequestActionDestroy : public ::ItemStackRequestActionTransferBase {
#if defined(LL_PLAT_A) // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ItemStackRequestActionDestroy();
    // NOLINTEND

#else // @header-generator platform
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    ItemStackRequestActionDestroy();

#endif
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ItemStackRequestActionDestroy(uchar, ::ItemStackRequestSlotInfo const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ItemStackRequestActionDestroy(uchar amount, ::ItemStackRequestSlotInfo const& src);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(uchar, ::ItemStackRequestSlotInfo const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(uchar amount, ::ItemStackRequestSlotInfo const& src);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
