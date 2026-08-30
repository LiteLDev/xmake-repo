#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/HeaderCollection.h"
#include "mc/deps/core/http/Request.h"
#include "mc/deps/core/http/RequestPriority.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class Method; }
namespace Bedrock::Http { class Response; }
namespace Bedrock::Http::Internal { class IRequestBody; }
namespace Core { class Path; }
namespace Json { class Value; }
// clang-format on

namespace Bedrock::Http {

class RequestBuilder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 192> mRequest;
    ::ll::UntypedStorage<8, 48>  mHeaders;
    // NOLINTEND

public:
    // prevent constructor by default
    RequestBuilder& operator=(RequestBuilder const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Bedrock::Http::RequestBuilder& DEL();

    MCNAPI ::Bedrock::Http::RequestBuilder& GET();

    MCNAPI ::Bedrock::Http::RequestBuilder& HEAD();

    MCNAPI ::Bedrock::Http::RequestBuilder& POST();

    MCNAPI ::Bedrock::Http::RequestBuilder& PUT();

    MCNAPI RequestBuilder();

    MCNAPI ::Bedrock::Http::RequestBuilder& addHeader(std::string const&, std::string const&, bool);

    MCNAPI ::Bedrock::Http::RequestBuilder& body(std::string const&);

    MCNAPI ::Bedrock::Http::RequestBuilder& body(::Json::Value const&);

    MCNAPI ::Bedrock::Http::RequestBuilder& body(::gsl::span<uchar> const&);

    MCNAPI ::Bedrock::Http::RequestBuilder& body(::Core::Path const&);

    MCNAPI ::Bedrock::Http::RequestBuilder&
        body(::gsl::not_null<std::shared_ptr<Bedrock::Http::Internal::IRequestBody>>);

    MCNAPI ::Bedrock::Http::Request& build();

    MCNAPI ::Bedrock::Http::RequestBuilder& contentType(std::string const&);

    MCNAPI ::Bedrock::Http::RequestBuilder& method(::Bedrock::Http::Method);

    MCNAPI ::Bedrock::Http::RequestBuilder& priority(::Bedrock::Http::RequestPriority);

    MCNAPI ::Bedrock::Http::RequestBuilder& retryPolicy(
        std::function<
            std::optional<std::chrono::duration<long long, std::ratio<1, 1>>>(const Bedrock::Http::Response&)>&&
    );

    MCNAPI ::Bedrock::Http::RequestBuilder& timeout(std::chrono::duration<long long, std::ratio<1, 1>>);

    MCNAPI ::Bedrock::Http::RequestBuilder& url(std::string const&);

    MCNAPI ~RequestBuilder();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::Http
