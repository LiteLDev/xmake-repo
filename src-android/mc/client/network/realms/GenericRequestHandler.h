#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/network/realms/RealmId.h"
#include "mc/client/services/Response.h"
#include "mc/client/services/requests/HttpRequestHandler.h"
#include "mc/deps/core/http/Method.h"
#include "mc/deps/core/threading/Async.h"

// auto generated forward declare list
// clang-format off
class ServiceClient;
// clang-format on

namespace Realms {

class GenericRequestHandler : public ::HttpRequestHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 8>                   mMethod;
    ::ll::TypedStorage<8, 24, std::string const> mUrl;
    ::ll::TypedStorage<8, 24, std::string const> mContentType;
    ::ll::TypedStorage<8, 24, std::string const> mBody;
    ::ll::TypedStorage<8, 24, std::string const> mEndpoint;
    ::ll::TypedStorage<8, 24, std::string const> mRelyingParty;
    ::ll::TypedStorage<8, 24, std::string const> mCallName;
    ::ll::UntypedStorage<8, 16>                  mRealmId;
    ::ll::UntypedStorage<8, 48>                  mCallback;
    ::ll::UntypedStorage<8, 96>                  mResponseOptional;
    // NOLINTEND

public:
    // prevent constructor by default
    GenericRequestHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GenericRequestHandler();

    virtual ::Bedrock::Threading::Async<std::string> getAuthToken();

    virtual ::Bedrock::Threading::Async<Bedrock::Http::Response> send(std::string);

    virtual void processResponse(::Bedrock::Http::Response);

    virtual void onComplete();
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
};

} // namespace Realms
