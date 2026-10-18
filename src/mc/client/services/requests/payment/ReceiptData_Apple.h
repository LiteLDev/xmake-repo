#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct ReceiptData_Apple {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mTransactionId;
    ::ll::TypedStorage<8, 24, std::string> mReceiptData;
    // NOLINTEND

public:
    // prevent constructor by default
    ReceiptData_Apple& operator=(ReceiptData_Apple const&);
    ReceiptData_Apple();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ReceiptData_Apple();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct ReceiptData_Apple {};
#endif // @header-generator platform
