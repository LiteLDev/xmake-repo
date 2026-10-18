#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/http/HeaderCollection.h"
#include "mc/deps/core/http/Request.h"
#include "mc/deps/core/http/RequestPriority.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace Bedrock::Http { class Method; }
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 192> mRequest;
    ::ll::UntypedStorage<8, 48>  mHeaders;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 224> mUnkaf9bb2;
    ::ll::UntypedStorage<8, 64>  mUnkd459f4;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    RequestBuilder& operator=(RequestBuilder const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    RequestBuilder(RequestBuilder const&);
    RequestBuilder();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Http::RequestBuilder& DEL();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ::Bedrock::Http::RequestBuilder& body(::gsl::span<uchar> const& binaryData);

    MCNAPI ::Bedrock::Http::RequestBuilder&
    body(::gsl::not_null<::std::shared_ptr<::Bedrock::Http::Internal::IRequestBody>> body);

    MCNAPI ::Bedrock::Http::RequestBuilder& body(::Core::Path const& file);

    MCNAPI ::Bedrock::Http::RequestBuilder& body(::Json::Value const& json);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Http::RequestBuilder& GET();
#else // @header-generator platform
    MCNAPI ::Bedrock::Http::RequestBuilder& body(::std::string const& plainText);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Http::RequestBuilder& HEAD();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ::Bedrock::Http::RequestBuilder& contentType(::std::string const& contentType);

    MCNAPI ::Bedrock::Http::RequestBuilder&
    retryPolicy(::std::function<::std::optional<::std::chrono::seconds>(::Bedrock::Http::Response const&)>&& policy);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCNAPI ::Bedrock::Http::RequestBuilder& url(::std::string const& url);
#endif // @header-generator platform

    MCNAPI ~RequestBuilder();
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::Http
