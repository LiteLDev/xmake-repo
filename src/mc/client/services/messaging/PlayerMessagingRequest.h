#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/requests/HttpRequestHandler.h"
#include "mc/deps/core/threading/Async.h"

// auto generated forward declare list
// clang-format off
class PlayerMessagingService;
namespace Bedrock::Http { class Request; }
namespace Bedrock::Http { class Response; }
namespace Json { class Value; }
// clang-format on

class PlayerMessagingRequest : public ::HttpRequestHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::PlayerMessagingService const&> mOwner;
    ::ll::TypedStorage<8, 24, std::string>                    mHostUrl;
    ::ll::TypedStorage<8, 24, std::string const>              mRelyingParty;
    ::ll::UntypedStorage<8, 48>                               mCallback;
    ::ll::UntypedStorage<8, 16>                               mResponseBodyJson;
    ::ll::TypedStorage<1, 1, bool>                            mSuccess;
    ::ll::TypedStorage<1, 1, bool>                            mCanRetry;
    ::ll::TypedStorage<1, 1, bool>                            mAlwaysRetry;
    ::ll::TypedStorage<8, 24, std::string>                    mContinuationToken;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerMessagingRequest& operator=(PlayerMessagingRequest const&);
    PlayerMessagingRequest(PlayerMessagingRequest const&);
    PlayerMessagingRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayerMessagingRequest();

    virtual ::Bedrock::Threading::Async<std::string> getAuthToken();

    virtual ::Bedrock::Threading::Async<Bedrock::Http::Response> send(std::string);

    virtual void processResponse(::Bedrock::Http::Response);

    virtual void onComplete();

    virtual std::string _getUrl();

    virtual std::string _getEndpoint() = 0;

    virtual ::Json::Value _getRequestBody() = 0;

    virtual ::Bedrock::Http::Request _buildRequest(std::string const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PlayerMessagingRequest(::PlayerMessagingService const&, std::function<void(bool, bool, Json::Value&)>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::PlayerMessagingService const&, std::function<void(bool, bool, Json::Value&)>);
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

    MCNAPI std::string $_getUrl();

    MCNAPI ::Bedrock::Http::Request $_buildRequest(std::string const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class PlayerMessagingRequest {};
#endif // @header-generator platform
