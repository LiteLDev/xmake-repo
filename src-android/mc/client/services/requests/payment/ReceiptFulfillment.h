#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/requests/payment/ReceiptData_Amazon.h"
#include "mc/client/services/requests/payment/ReceiptData_Apple.h"
#include "mc/client/services/requests/payment/ReceiptData_Google.h"

struct ReceiptFulfillment {
public:
    // ReceiptFulfillment inner types declare
    // clang-format off
    struct ReceiptData;
    // clang-format on

    // ReceiptFulfillment inner types define
    struct ReceiptData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 72, ::ReceiptData_Google> mGoogle;
        ::ll::TypedStorage<8, 48, ::ReceiptData_Amazon> mAmazon;
        ::ll::TypedStorage<8, 48, ::ReceiptData_Apple>  miOS;
        ::ll::TypedStorage<1, 1, bool>                  mIsFulfilled;
        // NOLINTEND

    public:
        // prevent constructor by default
        ReceiptData& operator=(ReceiptData const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ReceiptData(::ReceiptFulfillment::ReceiptData&&);

        MCNAPI ~ReceiptData();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::ReceiptFulfillment::ReceiptData&&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<ReceiptFulfillment::ReceiptData>> mReceipts;
    // NOLINTEND

public:
    // prevent constructor by default
    ReceiptFulfillment& operator=(ReceiptFulfillment const&);
    ReceiptFulfillment(ReceiptFulfillment const&);
    ReceiptFulfillment();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ReceiptFulfillment();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
