#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct ReceiptData_Amazon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mUserId;
    ::ll::TypedStorage<8, 24, std::string> mReceiptId;
    // NOLINTEND

public:
    // prevent constructor by default
    ReceiptData_Amazon& operator=(ReceiptData_Amazon const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ReceiptData_Amazon();

    MCNAPI ~ReceiptData_Amazon();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct ReceiptData_Amazon {};
#endif // @header-generator platform
