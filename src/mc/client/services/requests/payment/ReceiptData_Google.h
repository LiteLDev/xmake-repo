#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct ReceiptData_Google {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mPackageName;
    ::ll::TypedStorage<8, 24, std::string> mPurchaseToken;
    ::ll::TypedStorage<8, 24, std::string> mProductId;
    // NOLINTEND

public:
    // prevent constructor by default
    ReceiptData_Google& operator=(ReceiptData_Google const&);
    ReceiptData_Google();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ReceiptData_Google(::ReceiptData_Google const&);

    MCNAPI ~ReceiptData_Google();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ReceiptData_Google const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct ReceiptData_Google {};
#endif // @header-generator platform
