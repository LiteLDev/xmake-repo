#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/requests/payment/CheckReceiptDetails.h"
#include "mc/client/services/requests/payment/ReceiptData_Google.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class CheckReceiptDetailsGooglePlayStore : public ::CheckReceiptDetails {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<ReceiptData_Google>> mReceiptsToCheck;
    // NOLINTEND

public:
    // prevent constructor by default
    CheckReceiptDetailsGooglePlayStore();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CheckReceiptDetailsGooglePlayStore();

    virtual char const* getPath() const;

    virtual ::Json::Value toPostBody() const;

    virtual void fromJsonResponse(::Json::Value const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI char const* $getPath() const;

    MCNAPI ::Json::Value $toPostBody() const;

    MCNAPI void $fromJsonResponse(::Json::Value const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class CheckReceiptDetailsGooglePlayStore {};
#endif // @header-generator platform
