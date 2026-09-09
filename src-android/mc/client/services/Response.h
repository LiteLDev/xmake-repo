#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/HeaderCollection.h"
#include "mc/deps/core/http/Status.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http::Internal { class IResponseBody; }
namespace Json { class Value; }
// clang-format on

namespace Bedrock::Http {

class Response {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::Bedrock::Http::HeaderCollection>                                        mHeaders;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<Bedrock::Http::Internal::IResponseBody>>> mBody;
    ::ll::TypedStorage<8, 24, ::Bedrock::Http::Status>                                                  mStatus;
    // NOLINTEND

public:
    // prevent constructor by default
    Response& operator=(Response const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::gsl::not_null<std::shared_ptr<const Bedrock::Http::Internal::IResponseBody>> getBody() const;

    MCNAPI ::gsl::span<const uchar> getBodyAsBytes() const;

    MCNAPI ::Json::Value getBodyAsJson() const;

    MCNAPI std::string getBodyAsUtf8String() const;

    MCNAPI ::Bedrock::Http::Status getStatus() const;

    MCNAPI void setBody(::gsl::not_null<std::shared_ptr<Bedrock::Http::Internal::IResponseBody>>);

    MCNAPI void setHeaders(::Bedrock::Http::HeaderCollection const&);

    MCNAPI void setStatus(::Bedrock::Http::Status);

    MCNAPI ~Response();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::Http
