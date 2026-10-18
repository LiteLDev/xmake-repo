#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/client/store/iap/transactions/TransactionStatus.h"
#include "mc/deps/core/http/Status.h"

class MarketplacePassPurchaseErrorScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::TransactionStatus>      mTransactionStatus;
    ::ll::TypedStorage<8, 24, ::Bedrock::Http::Status> mResponseStatus;
    ::ll::TypedStorage<8, 24, std::string>             mCorrelationID;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MarketplacePassPurchaseErrorScreenController();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _registerBindings();
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/client/store/iap/transactions/TransactionStatus.h"
#include "mc/deps/core/http/Status.h"

class MarketplacePassPurchaseErrorScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::TransactionStatus>      mTransactionStatus;
    ::ll::TypedStorage<8, 24, ::Bedrock::Http::Status> mResponseStatus;
    ::ll::TypedStorage<8, 32, ::std::string>           mCorrelationID;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MarketplacePassPurchaseErrorScreenController() /*override*/ = default;
    // NOLINTEND
};
#else // @header-generator platform
class MarketplacePassPurchaseErrorScreenController {};
#endif // @header-generator platform
#endif // @header-generator platform
