#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/IResponseBody.h"
#include "mc/deps/core/http/ResponseBodyType.h"

namespace Bedrock::Http {

class IgnoredResponseBody : public ::Bedrock::Http::Internal::IResponseBody {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual std::error_code start(std::optional<ulong>);

    virtual std::error_code write(::gsl::span<const uchar>);

    virtual void complete();

    virtual void cancel();

    virtual std::string const& getLoggableDestination() const;

    virtual ::gsl::span<const uchar> getLoggableData() const;

    virtual ::Bedrock::Http::ResponseBodyType getType() const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::error_code $start(std::optional<ulong>);

    MCNAPI std::string const& $getLoggableDestination() const;

    MCNAPI ::gsl::span<const uchar> $getLoggableData() const;

    MCNAPI ::Bedrock::Http::ResponseBodyType $getType() const;
    // NOLINTEND
};

} // namespace Bedrock::Http
