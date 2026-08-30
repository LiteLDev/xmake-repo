#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/requests/HttpRequestHandler.h"
#include "mc/deps/core/http/Status.h"
#include "mc/deps/core/threading/Async.h"

// auto generated forward declare list
// clang-format off
class ServiceClient;
namespace Bedrock::Http { class Response; }
// clang-format on

class FileSizeRequest : public ::HttpRequestHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string const>      mContentUrl;
    ::ll::UntypedStorage<8, 48>                       mCallback;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ulong>> mContentLength;
    ::ll::UntypedStorage<8, 32>                       mStatus;
    // NOLINTEND

public:
    // prevent constructor by default
    FileSizeRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FileSizeRequest();

    virtual ::Bedrock::Threading::Async<std::string> getAuthToken();

    virtual ::Bedrock::Threading::Async<Bedrock::Http::Response> send(std::string);

    virtual void processResponse(::Bedrock::Http::Response);

    virtual void onComplete();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    FileSizeRequest(::ServiceClient const&, std::string const&, std::function<void(Bedrock::Http::Status&, ulong)>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ServiceClient const&, std::string const&, std::function<void(Bedrock::Http::Status&, ulong)>);
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
