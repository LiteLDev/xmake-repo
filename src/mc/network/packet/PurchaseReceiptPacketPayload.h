#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PurchaseReceiptPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mPurchaseReceipts;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PurchaseReceiptPacketPayload(std::string const&);

    MCNAPI PurchaseReceiptPacketPayload(::PurchaseReceiptPacketPayload const&);

    MCNAPI ~PurchaseReceiptPacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&);

    MCNAPI void* $ctor(::PurchaseReceiptPacketPayload const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mPurchaseReceipts;
#endif // @header-generator platform
    // NOLINTEND
};
