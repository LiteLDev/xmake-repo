#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/http/HeaderCollection.h"
#include "mc/deps/core/http/Method.h"
#include "mc/deps/core/http/RequestPriority.h"
#include "mc/deps/core/http/RetryPolicy.h"
#include "mc/deps/core/http/Url.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/threading/Async.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class Response; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Bedrock::Http::Internal { class IRequestBody; }
namespace Bedrock::Http::Internal { class IResponseBody; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace Bedrock::Http {

class Request {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkcb7d93;
    ::ll::UntypedStorage<1, 2>  mUnk67e7ed;
    ::ll::UntypedStorage<8, 64> mUnk3aa28a;
    ::ll::UntypedStorage<8, 16> mUnkb7733e;
    ::ll::UntypedStorage<8, 16> mUnk5b573e;
    ::ll::UntypedStorage<4, 4>  mUnkf34d9b;
    ::ll::UntypedStorage<8, 8>  mUnka3dac0;
    ::ll::UntypedStorage<8, 64> mUnkbee43e;
    ::ll::UntypedStorage<1, 1>  mUnk7f9c7c;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    Request& operator=(Request const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Request();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI Request(::Bedrock::Http::Request const&);
#else // @header-generator platform
    MCNAPI Request(::Bedrock::Http::Request const& rhs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::gsl::not_null<std::shared_ptr<Bedrock::Http::Internal::IRequestBody>> getBody() const;
#else // @header-generator platform
    MCNAPI ::Bedrock::Http::Request& operator=(::Bedrock::Http::Request const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCNAPI ::Bedrock::Threading::Async<::Bedrock::Http::Response> send();
#endif // @header-generator platform

    MCNAPI ~Request();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Bedrock::Http::Request const&);
#else // @header-generator platform
    MCNAPI void* $ctor(::Bedrock::Http::Request const& rhs);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::Http
