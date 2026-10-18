#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/ServiceClient.h"
#include "mc/client/services/requests/payment/SendReceiptRealmsResult.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class IOptionRegistry;
struct ReceiptData_Amazon;
struct ReceiptData_Apple;
struct ReceiptData_Google;
struct ReceiptData_Sony;
struct ReceiptFulfillment;
namespace Realms { struct World; }
namespace Social { class IUserManager; }
// clang-format on

class LegacyRealmsPaymentService : public ::ServiceClient {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IOptionRegistry&>               mOptions;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mRealmsOptionSubscription;
    ::ll::TypedStorage<8, 24, std::string>                     mPaymentEndpoint;
    ::ll::TypedStorage<8, 24, std::string>                     mPaymentRelyingParty;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyRealmsPaymentService& operator=(LegacyRealmsPaymentService const&);
    LegacyRealmsPaymentService(LegacyRealmsPaymentService const&);
    LegacyRealmsPaymentService();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LegacyRealmsPaymentService();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LegacyRealmsPaymentService(
        ::IOptionRegistry&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Social::IUserManager>> const&
    );

    MCNAPI void checkForGoogleAccountHold(std::function<void(bool, ReceiptFulfillment)>);

    MCNAPI void checkReceiptsForAmazonAppStore(
        std::vector<ReceiptData_Amazon> const&,
        std::function<void(bool, ReceiptFulfillment)>
    );

    MCNAPI void
    checkReceiptsForAppleAppStore(std::vector<ReceiptData_Apple> const&, std::function<void(bool, ReceiptFulfillment)>);

    MCNAPI void checkReceiptsForGooglePlayStore(
        std::vector<ReceiptData_Google> const&,
        std::function<void(bool, ReceiptFulfillment)>
    );

    MCNAPI void checkReceiptsForSonyStore(
        std::vector<ReceiptData_Sony> const&,
        std::string const&,
        std::function<void(bool, ReceiptFulfillment)>
    );

    MCNAPI void getServiceStatus(std::function<void(bool)>);

    MCNAPI void sendReceiptFromAmazonAppStore(
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        bool,
        std::function<void(SendReceiptRealmsResult, Realms::World, const std::string&)>
    );

    MCNAPI void sendReceiptFromAppleAppStore(
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        bool,
        std::function<void(SendReceiptRealmsResult, Realms::World, const std::string&)>
    );

    MCNAPI void sendReceiptFromGooglePlayStore(
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        bool,
        std::function<void(SendReceiptRealmsResult, Realms::World, const std::string&)>
    );

    MCNAPI void sendReceiptFromNXStore(
        std::string const&,
        std::string const&,
        std::string const&,
        bool,
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        std::function<void(SendReceiptRealmsResult, Realms::World, const std::string&)>
    );

    MCNAPI void sendReceiptFromOneStore(
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        bool,
        std::function<void(SendReceiptRealmsResult, Realms::World, const std::string&)>
    );

    MCNAPI void sendReceiptFromSonyStore(
        std::string const&,
        std::string const&,
        std::string const&,
        int const,
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        bool,
        std::function<void(SendReceiptRealmsResult, Realms::World, const std::string&)>
    );

    MCNAPI void sendReceiptFromWindowsStore(
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        bool,
        std::function<void(SendReceiptRealmsResult, Realms::World, const std::string&)>
    );

    MCNAPI void syncReceiptsForNxStore(std::function<void(bool, ReceiptFulfillment)>);

    MCNAPI void syncReceiptsForWindowsOneStore(std::function<void(bool, ReceiptFulfillment)>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IOptionRegistry&, ::gsl::not_null<Bedrock::NonOwnerPointer<Social::IUserManager>> const&);
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
class LegacyRealmsPaymentService {};
#endif // @header-generator platform
