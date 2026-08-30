#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/HeaderCollection.h"
#include "mc/deps/core/http/Method.h"
#include "mc/deps/core/http/RequestPriority.h"
#include "mc/deps/core/http/RetryPolicy.h"
#include "mc/deps/core/http/Url.h"
#include "mc/deps/core/threading/Async.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class Response; }
namespace Bedrock::Http::Internal { class IRequestBody; }
namespace Bedrock::Http::Internal { class IResponseBody; }
// clang-format on

namespace Bedrock::Http {

class Request {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::UntypedStorage<1, 24> mUrl;
    ::ll::UntypedStorage<1, 8> mMethod;
    ::ll::TypedStorage<8, 40, ::Bedrock::Http::HeaderCollection> mHeaders;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<Bedrock::Http::Internal::IRequestBody>>> mBody;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<Bedrock::Http::Internal::IResponseBody>>> mResponseBodyHandler;
    ::ll::TypedStorage<4, 4, ::Bedrock::Http::RequestPriority> mPriority;
    ::ll::UntypedStorage<8, 16> mTimeout;
    ::ll::UntypedStorage<8, 48> mRetryPolicy;
    ::ll::UntypedStorage<1, 16> mShouldSkipTelemetry;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    Request& operator=(Request const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Request();

    MCNAPI Request(::Bedrock::Http::Request const&);

    MCNAPI ::gsl::not_null<std::shared_ptr<Bedrock::Http::Internal::IRequestBody>> getBody() const;

    MCNAPI ::Bedrock::Http::HeaderCollection const& getHeaders() const;

    MCNAPI ::Bedrock::Http::HeaderCollection& getHeaders();

    MCNAPI ::Bedrock::Http::Method getMethod() const;

    MCNAPI ::Bedrock::Http::RequestPriority const& getPriority() const;

    MCNAPI ::gsl::not_null<std::shared_ptr<Bedrock::Http::Internal::IResponseBody>> getResponseBodyHandler() const;

    MCNAPI ::Bedrock::Http::RetryPolicy const& getRetryPolicy() const;

    MCNAPI bool const getShouldSkipTelemetry() const;

    MCNAPI std::chrono::duration<long long, std::ratio<1, 1>> getTimeout() const;

    MCNAPI ::Bedrock::Threading::Async<Bedrock::Http::Response> send();

    MCNAPI void setMethod(::Bedrock::Http::Method);

    MCNAPI void setResponseBodyHandler(::gsl::not_null<std::shared_ptr<Bedrock::Http::Internal::IResponseBody>>);

    MCNAPI void setShouldSkipTelemetry(bool);

    MCNAPI ~Request();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::Bedrock::Http::Request const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::Http
