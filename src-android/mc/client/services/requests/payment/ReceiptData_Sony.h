#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ReceiptData_Sony {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>          mEnvironment;
    ::ll::TypedStorage<8, 24, std::string> mUserId;
    ::ll::TypedStorage<8, 24, std::string> mAuthCode;
    ::ll::TypedStorage<8, 24, std::string> mOfflineAuthCode;
    ::ll::TypedStorage<8, 24, std::string> mRedirectUri;
    ::ll::TypedStorage<8, 24, std::string> mServiceLabel;
    // NOLINTEND

public:
    // prevent constructor by default
    ReceiptData_Sony& operator=(ReceiptData_Sony const&);
    ReceiptData_Sony(ReceiptData_Sony const&);
    ReceiptData_Sony();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ReceiptData_Sony();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
