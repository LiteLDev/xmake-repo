#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/network/realms/World.h"
#include "mc/client/services/requests/HttpRequestHandler.h"
#include "mc/client/services/requests/payment/SendReceiptRealmsResult.h"
#include "mc/deps/core/threading/Async.h"

// auto generated forward declare list
// clang-format off
class SendReceiptDetails;
class ServiceClient;
namespace Bedrock::Http { class Response; }
// clang-format on

class SendReceiptRealms : public ::HttpRequestHandler {
#else // @header-generator platform
class SendReceiptRealms {
#endif // @header-generator platform
public:
    // SendReceiptRealms inner types declare
    // clang-format off
    struct ResponseData;
    // clang-format on

    // SendReceiptRealms inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct ResponseData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 608, ::Realms::World>         mRealmsWorld;
        ::ll::TypedStorage<4, 4, ::SendReceiptRealmsResult> mResult;
        ::ll::TypedStorage<8, 24, std::string>              mFailureReason;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string const>                                mHost;
    ::ll::UntypedStorage<8, 32>                                                 mRelyingParty;
    ::ll::UntypedStorage<8, 48>                                                 mCallback;
    ::ll::TypedStorage<8, 16, std::shared_ptr<SendReceiptDetails>>              mReceiptDetails;
    ::ll::TypedStorage<8, 16, std::shared_ptr<SendReceiptRealms::ResponseData>> mResponseData;
    // NOLINTEND

public:
    // prevent constructor by default
    SendReceiptRealms();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SendReceiptRealms();

    virtual ::Bedrock::Threading::Async<std::string> getAuthToken();

    virtual ::Bedrock::Threading::Async<Bedrock::Http::Response> send(std::string);

    virtual void processResponse(::Bedrock::Http::Response);

    virtual void onComplete();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SendReceiptRealms(
        ::ServiceClient const&,
        std::string const&,
        std::string const&,
        std::function<void(SendReceiptRealmsResult, Realms::World, const std::string&)>,
        std::shared_ptr<SendReceiptDetails>
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ServiceClient const&,
        std::string const&,
        std::string const&,
        std::function<void(SendReceiptRealmsResult, Realms::World, const std::string&)>,
        std::shared_ptr<SendReceiptDetails>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::Threading::Async<std::string> $getAuthToken();

    MCNAPI ::Bedrock::Threading::Async<Bedrock::Http::Response> $send(std::string);

    MCNAPI void $processResponse(::Bedrock::Http::Response);

    MCNAPI void $onComplete();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
    struct ResponseData {};
#endif // @header-generator platform
};
