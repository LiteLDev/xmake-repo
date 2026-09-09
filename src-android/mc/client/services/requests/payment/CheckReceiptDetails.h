#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/requests/payment/ReceiptFulfillment.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class CheckReceiptDetails {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                  mSuccess;
    ::ll::TypedStorage<8, 24, ::ReceiptFulfillment> mFulfilledReceipts;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CheckReceiptDetails();

    virtual char const* getPath() const = 0;

    virtual ::Json::Value toPostBody() const = 0;

    virtual void fromJsonResponse(::Json::Value const&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
